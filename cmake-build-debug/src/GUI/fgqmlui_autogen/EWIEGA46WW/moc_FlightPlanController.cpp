/****************************************************************************
** Meta object code from reading C++ file 'FlightPlanController.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/FlightPlanController.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FlightPlanController.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FlightPlanController_t {
    QByteArrayData data[61];
    char stringdata0[699];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FlightPlanController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FlightPlanController_t qt_meta_stringdata_FlightPlanController = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FlightPlanController"
QT_MOC_LITERAL(1, 21, 11), // "infoChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 16), // "waypointsChanged"
QT_MOC_LITERAL(4, 51, 14), // "enabledChanged"
QT_MOC_LITERAL(5, 66, 7), // "enabled"
QT_MOC_LITERAL(6, 74, 13), // "setFlightType"
QT_MOC_LITERAL(7, 88, 10), // "FlightType"
QT_MOC_LITERAL(8, 99, 2), // "ty"
QT_MOC_LITERAL(9, 102, 14), // "setFlightRules"
QT_MOC_LITERAL(10, 117, 11), // "FlightRules"
QT_MOC_LITERAL(11, 129, 1), // "r"
QT_MOC_LITERAL(12, 131, 11), // "setCallsign"
QT_MOC_LITERAL(13, 143, 1), // "s"
QT_MOC_LITERAL(14, 145, 10), // "setRemarks"
QT_MOC_LITERAL(15, 156, 15), // "setAircraftType"
QT_MOC_LITERAL(16, 172, 12), // "setDeparture"
QT_MOC_LITERAL(17, 185, 14), // "QmlPositioned*"
QT_MOC_LITERAL(18, 200, 18), // "destinationAirport"
QT_MOC_LITERAL(19, 219, 14), // "setDestination"
QT_MOC_LITERAL(20, 234, 12), // "setAlternate"
QT_MOC_LITERAL(21, 247, 3), // "apt"
QT_MOC_LITERAL(22, 251, 14), // "setCruiseSpeed"
QT_MOC_LITERAL(23, 266, 13), // "QuantityValue"
QT_MOC_LITERAL(24, 280, 11), // "cruiseSpeed"
QT_MOC_LITERAL(25, 292, 27), // "setEstimatedDurationMinutes"
QT_MOC_LITERAL(26, 320, 4), // "mins"
QT_MOC_LITERAL(27, 325, 15), // "computeDuration"
QT_MOC_LITERAL(28, 341, 9), // "clearPlan"
QT_MOC_LITERAL(29, 351, 8), // "savePlan"
QT_MOC_LITERAL(30, 360, 15), // "onCollectConfig"
QT_MOC_LITERAL(31, 376, 6), // "onSave"
QT_MOC_LITERAL(32, 383, 9), // "onRestore"
QT_MOC_LITERAL(33, 393, 13), // "tryParseRoute"
QT_MOC_LITERAL(34, 407, 9), // "routeDesc"
QT_MOC_LITERAL(35, 417, 16), // "tryGenerateRoute"
QT_MOC_LITERAL(36, 434, 10), // "clearRoute"
QT_MOC_LITERAL(37, 445, 8), // "loadPlan"
QT_MOC_LITERAL(38, 454, 8), // "callsign"
QT_MOC_LITERAL(39, 463, 7), // "remarks"
QT_MOC_LITERAL(40, 471, 12), // "aircraftType"
QT_MOC_LITERAL(41, 484, 4), // "legs"
QT_MOC_LITERAL(42, 489, 10), // "LegsModel*"
QT_MOC_LITERAL(43, 500, 9), // "icaoRoute"
QT_MOC_LITERAL(44, 510, 11), // "flightRules"
QT_MOC_LITERAL(45, 522, 10), // "flightType"
QT_MOC_LITERAL(46, 533, 15), // "totalDistanceNm"
QT_MOC_LITERAL(47, 549, 24), // "estimatedDurationMinutes"
QT_MOC_LITERAL(48, 574, 14), // "cruiseAltitude"
QT_MOC_LITERAL(49, 589, 9), // "departure"
QT_MOC_LITERAL(50, 599, 11), // "destination"
QT_MOC_LITERAL(51, 611, 9), // "alternate"
QT_MOC_LITERAL(52, 621, 3), // "VFR"
QT_MOC_LITERAL(53, 625, 3), // "IFR"
QT_MOC_LITERAL(54, 629, 7), // "IFR_VFR"
QT_MOC_LITERAL(55, 637, 7), // "VFR_IFR"
QT_MOC_LITERAL(56, 645, 9), // "Scheduled"
QT_MOC_LITERAL(57, 655, 12), // "NonScheduled"
QT_MOC_LITERAL(58, 668, 15), // "GeneralAviation"
QT_MOC_LITERAL(59, 684, 8), // "Military"
QT_MOC_LITERAL(60, 693, 5) // "Other"

    },
    "FlightPlanController\0infoChanged\0\0"
    "waypointsChanged\0enabledChanged\0enabled\0"
    "setFlightType\0FlightType\0ty\0setFlightRules\0"
    "FlightRules\0r\0setCallsign\0s\0setRemarks\0"
    "setAircraftType\0setDeparture\0"
    "QmlPositioned*\0destinationAirport\0"
    "setDestination\0setAlternate\0apt\0"
    "setCruiseSpeed\0QuantityValue\0cruiseSpeed\0"
    "setEstimatedDurationMinutes\0mins\0"
    "computeDuration\0clearPlan\0savePlan\0"
    "onCollectConfig\0onSave\0onRestore\0"
    "tryParseRoute\0routeDesc\0tryGenerateRoute\0"
    "clearRoute\0loadPlan\0callsign\0remarks\0"
    "aircraftType\0legs\0LegsModel*\0icaoRoute\0"
    "flightRules\0flightType\0totalDistanceNm\0"
    "estimatedDurationMinutes\0cruiseAltitude\0"
    "departure\0destination\0alternate\0VFR\0"
    "IFR\0IFR_VFR\0VFR_IFR\0Scheduled\0"
    "NonScheduled\0GeneralAviation\0Military\0"
    "Other"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FlightPlanController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
      15,  176, // properties
       2,  236, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  129,    2, 0x06 /* Public */,
       3,    0,  130,    2, 0x06 /* Public */,
       4,    1,  131,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,  134,    2, 0x0a /* Public */,
       9,    1,  137,    2, 0x0a /* Public */,
      12,    1,  140,    2, 0x0a /* Public */,
      14,    1,  143,    2, 0x0a /* Public */,
      15,    1,  146,    2, 0x0a /* Public */,
      16,    1,  149,    2, 0x0a /* Public */,
      19,    1,  152,    2, 0x0a /* Public */,
      20,    1,  155,    2, 0x0a /* Public */,
      22,    1,  158,    2, 0x0a /* Public */,
      25,    1,  161,    2, 0x0a /* Public */,
      27,    0,  164,    2, 0x0a /* Public */,
      28,    0,  165,    2, 0x0a /* Public */,
      29,    0,  166,    2, 0x0a /* Public */,
      30,    0,  167,    2, 0x08 /* Private */,
      31,    0,  168,    2, 0x08 /* Private */,
      32,    0,  169,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      33,    1,  170,    2, 0x02 /* Public */,
      35,    0,  173,    2, 0x02 /* Public */,
      36,    0,  174,    2, 0x02 /* Public */,
      37,    0,  175,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::Int,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,   34,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Bool,

 // properties: name, type, flags
       5, QMetaType::Bool, 0x00495003,
      38, QMetaType::QString, 0x00495103,
      39, QMetaType::QString, 0x00495103,
      40, QMetaType::QString, 0x00495103,
      41, 0x80000000 | 42, 0x00095409,
      43, QMetaType::QString, 0x00495001,
      44, 0x80000000 | 10, 0x0049510b,
      45, 0x80000000 | 7, 0x0049510b,
      46, 0x80000000 | 23, 0x00495009,
      47, QMetaType::Int, 0x00495103,
      48, 0x80000000 | 23, 0x0049510b,
      24, 0x80000000 | 23, 0x0049510b,
      49, 0x80000000 | 17, 0x0049510b,
      50, 0x80000000 | 17, 0x0049510b,
      51, 0x80000000 | 17, 0x0049510b,

 // properties: notify_signal_id
       2,
       0,
       0,
       0,
       0,
       1,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    4,  246,
       7,    7, 0x0,    5,  254,

 // enum data: key, value
      52, uint(FlightPlanController::VFR),
      53, uint(FlightPlanController::IFR),
      54, uint(FlightPlanController::IFR_VFR),
      55, uint(FlightPlanController::VFR_IFR),
      56, uint(FlightPlanController::Scheduled),
      57, uint(FlightPlanController::NonScheduled),
      58, uint(FlightPlanController::GeneralAviation),
      59, uint(FlightPlanController::Military),
      60, uint(FlightPlanController::Other),

       0        // eod
};

void FlightPlanController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlightPlanController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->infoChanged(); break;
        case 1: _t->waypointsChanged(); break;
        case 2: _t->enabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->setFlightType((*reinterpret_cast< FlightType(*)>(_a[1]))); break;
        case 4: _t->setFlightRules((*reinterpret_cast< FlightRules(*)>(_a[1]))); break;
        case 5: _t->setCallsign((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->setRemarks((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setAircraftType((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->setDeparture((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 9: _t->setDestination((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 10: _t->setAlternate((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 11: _t->setCruiseSpeed((*reinterpret_cast< QuantityValue(*)>(_a[1]))); break;
        case 12: _t->setEstimatedDurationMinutes((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->computeDuration(); break;
        case 14: _t->clearPlan(); break;
        case 15: _t->savePlan(); break;
        case 16: _t->onCollectConfig(); break;
        case 17: _t->onSave(); break;
        case 18: _t->onRestore(); break;
        case 19: { bool _r = _t->tryParseRoute((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 20: { bool _r = _t->tryGenerateRoute();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 21: _t->clearRoute(); break;
        case 22: { bool _r = _t->loadPlan();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FlightPlanController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanController::infoChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FlightPlanController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanController::waypointsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FlightPlanController::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FlightPlanController::enabledChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 11:
        case 10:
        case 8:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FlightPlanController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->_enabled; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->callsign(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->remarks(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->aircraftType(); break;
        case 4: *reinterpret_cast< LegsModel**>(_v) = _t->legs(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->icaoRoute(); break;
        case 6: *reinterpret_cast< FlightRules*>(_v) = _t->flightRules(); break;
        case 7: *reinterpret_cast< FlightType*>(_v) = _t->flightType(); break;
        case 8: *reinterpret_cast< QuantityValue*>(_v) = _t->totalDistanceNm(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->estimatedDurationMinutes(); break;
        case 10: *reinterpret_cast< QuantityValue*>(_v) = _t->cruiseAltitude(); break;
        case 11: *reinterpret_cast< QuantityValue*>(_v) = _t->cruiseSpeed(); break;
        case 12: *reinterpret_cast< QmlPositioned**>(_v) = _t->departure(); break;
        case 13: *reinterpret_cast< QmlPositioned**>(_v) = _t->destination(); break;
        case 14: *reinterpret_cast< QmlPositioned**>(_v) = _t->alternate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FlightPlanController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_enabled != *reinterpret_cast< bool*>(_v)) {
                _t->_enabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->enabledChanged(_t->_enabled);
            }
            break;
        case 1: _t->setCallsign(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRemarks(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setAircraftType(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setFlightRules(*reinterpret_cast< FlightRules*>(_v)); break;
        case 7: _t->setFlightType(*reinterpret_cast< FlightType*>(_v)); break;
        case 9: _t->setEstimatedDurationMinutes(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setCruiseAltitude(*reinterpret_cast< QuantityValue*>(_v)); break;
        case 11: _t->setCruiseSpeed(*reinterpret_cast< QuantityValue*>(_v)); break;
        case 12: _t->setDeparture(*reinterpret_cast< QmlPositioned**>(_v)); break;
        case 13: _t->setDestination(*reinterpret_cast< QmlPositioned**>(_v)); break;
        case 14: _t->setAlternate(*reinterpret_cast< QmlPositioned**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FlightPlanController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FlightPlanController.data,
    qt_meta_data_FlightPlanController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FlightPlanController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlightPlanController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FlightPlanController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FlightPlanController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void FlightPlanController::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FlightPlanController::waypointsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FlightPlanController::enabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
