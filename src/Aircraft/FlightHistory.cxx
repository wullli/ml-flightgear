// FlightHistory
//
// Written by James Turner, started December 2012.
//
// Copyright (C) 2012 James Turner - zakalawe (at) mac com
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License as
// published by the Free Software Foundation; either version 2 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301, USA.
//
///////////////////////////////////////////////////////////////////////////////

#ifdef HAVE_CONFIG_H
#  include "config.h"
#endif

#include "FlightHistory.hxx"

#include <algorithm>
#include <boost/foreach.hpp>

#include <simgear/sg_inlines.h>
#include <simgear/debug/logstream.hxx>
#include <simgear/props/props_io.hxx>
#include <simgear/misc/strutils.hxx>
#include <simgear/structure/exception.hxx>
#include <simgear/math/SGMath.hxx>

#include <Main/fg_props.hxx>
#include <Main/globals.hxx>

FGFlightHistory::FGFlightHistory() :
    m_sampleInterval(5.0),
    m_validSampleCount(SAMPLE_BUCKET_WIDTH)
{
}

FGFlightHistory::~FGFlightHistory()
{
}

void FGFlightHistory::init()
{
    m_sampleInterval = fgGetDouble("/sim/history/sample-interval-sec", 1.0);
    if (m_sampleInterval <= 0.0) { // would be bad
        SG_LOG(SG_FLIGHT, SG_INFO, "invalid flight-history sample interval:" << m_sampleInterval
               << ", defaulting to " << m_sampleInterval);
        m_sampleInterval = 1.0;
    }
    
    m_weightOnWheels = NULL;
// reset the history when we detect a take-off
    if (fgGetBool("/sim/history/clear-on-takeoff", true)) {
        m_weightOnWheels = fgGetNode("/gear/gear[1]/wow", 0, true);
        m_lastWoW = m_weightOnWheels->getBoolValue();
    }
    
    // force bucket re-allocation
    m_validSampleCount = SAMPLE_BUCKET_WIDTH;
}

void FGFlightHistory::shutdown()
{
    clear();
}

void FGFlightHistory::reinit()
{
    shutdown();
    init();
}

void FGFlightHistory::update(double dt)
{
    SG_UNUSED(dt); // we care about sim-time, not frame-time
    
    if (m_weightOnWheels) {
        
        if (m_lastWoW && !m_weightOnWheels->getBoolValue()) {
            SG_LOG(SG_FLIGHT, SG_INFO, "history: detected main-gear takeoff, clearing history");
            clear();
        }
    } // of rest-on-takeoff enabled
    
    double elapsed = globals->get_sim_time_sec() - m_lastCaptureTime;
    if (elapsed > m_sampleInterval) {
        capture();
    }
}

void FGFlightHistory::allocateNewBucket()
{
    SampleBucket* bucket = new SampleBucket;
    m_buckets.push_back(bucket);
    m_validSampleCount = 0;
}

void FGFlightHistory::capture()
{
    if (m_validSampleCount == SAMPLE_BUCKET_WIDTH) {
        // bucket is full, allocate a new one
        allocateNewBucket();
    }
    
    m_lastCaptureTime = globals->get_sim_time_sec();
    Sample* sample = m_buckets.back()->samples + m_validSampleCount;
    
    sample->simTimeMSec = static_cast<int>(m_lastCaptureTime * 1000.0);
    sample->position = globals->get_aircraft_position();
    
    double heading, pitch, roll;
    globals->get_aircraft_orientation(heading, pitch, roll);
    sample->heading = static_cast<float>(heading);
    sample->pitch = static_cast<float>(pitch);
    sample->roll = static_cast<float>(roll);
    
    ++m_validSampleCount;
}

SGGeodVec FGFlightHistory::pathForHistory(double minEdgeLengthM) const
{
    SGGeodVec result;
    if (m_buckets.empty()) {
        return result;
    }
    
    result.push_back(m_buckets.front()->samples[0].position);
    SGVec3d lastOutputCart = SGVec3d::fromGeod(result.back());
    double minLengthSqr = minEdgeLengthM * minEdgeLengthM;
    
    BOOST_FOREACH(SampleBucket* bucket, m_buckets) {
        unsigned int count = (bucket == m_buckets.back() ? m_validSampleCount : SAMPLE_BUCKET_WIDTH);
    
        // iterate over all the valid samples in the bucket
        for (unsigned int index = 0; index < count; ++index) {
            SGGeod g = bucket->samples[index].position;
            SGVec3d cart(SGVec3d::fromGeod(g));
            if (distSqr(cart, lastOutputCart) > minLengthSqr) {
                lastOutputCart =  cart;
                result.push_back(g);
            }
        } // of samples iteration
    } // of buckets iteration
    
    return result;
}

void FGFlightHistory::clear()
{
    BOOST_FOREACH(SampleBucket* ptr, m_buckets) {
        delete ptr;
    }
    m_buckets.clear();
    m_validSampleCount = SAMPLE_BUCKET_WIDTH;
}
