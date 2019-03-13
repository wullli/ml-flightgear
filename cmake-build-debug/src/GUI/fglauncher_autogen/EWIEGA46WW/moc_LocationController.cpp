/****************************************************************************
** Meta object code from reading C++ file 'LocationController.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/LocationController.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocationController.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocationController_t {
    QByteArrayData data[52];
    char stringdata0[733];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocationController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocationController_t qt_meta_stringdata_LocationController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LocationController"
QT_MOC_LITERAL(1, 19, 18), // "descriptionChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "offsetChanged"
QT_MOC_LITERAL(4, 53, 19), // "baseLocationChanged"
QT_MOC_LITERAL(5, 73, 13), // "configChanged"
QT_MOC_LITERAL(6, 87, 19), // "skipFromArgsChanged"
QT_MOC_LITERAL(7, 107, 15), // "setOffsetRadial"
QT_MOC_LITERAL(8, 123, 13), // "QuantityValue"
QT_MOC_LITERAL(9, 137, 12), // "offsetRadial"
QT_MOC_LITERAL(10, 150, 17), // "setOffsetDistance"
QT_MOC_LITERAL(11, 168, 8), // "offsetNm"
QT_MOC_LITERAL(12, 177, 16), // "setOffsetEnabled"
QT_MOC_LITERAL(13, 194, 13), // "offsetEnabled"
QT_MOC_LITERAL(14, 208, 10), // "setOnFinal"
QT_MOC_LITERAL(15, 219, 7), // "onFinal"
QT_MOC_LITERAL(16, 227, 11), // "setTuneNAV1"
QT_MOC_LITERAL(17, 239, 8), // "tuneNAV1"
QT_MOC_LITERAL(18, 248, 22), // "setUseAvailableParking"
QT_MOC_LITERAL(19, 271, 19), // "useAvailableParking"
QT_MOC_LITERAL(20, 291, 15), // "onCollectConfig"
QT_MOC_LITERAL(21, 307, 24), // "onRestoreCurrentLocation"
QT_MOC_LITERAL(22, 332, 21), // "onSaveCurrentLocation"
QT_MOC_LITERAL(23, 354, 15), // "setBaseLocation"
QT_MOC_LITERAL(24, 370, 14), // "QmlPositioned*"
QT_MOC_LITERAL(25, 385, 3), // "pos"
QT_MOC_LITERAL(26, 389, 17), // "setDetailLocation"
QT_MOC_LITERAL(27, 407, 11), // "addToRecent"
QT_MOC_LITERAL(28, 419, 24), // "showHistoryInSearchModel"
QT_MOC_LITERAL(29, 444, 17), // "parseStringAsGeod"
QT_MOC_LITERAL(30, 462, 7), // "QmlGeod"
QT_MOC_LITERAL(31, 470, 6), // "string"
QT_MOC_LITERAL(32, 477, 11), // "description"
QT_MOC_LITERAL(33, 489, 11), // "searchModel"
QT_MOC_LITERAL(34, 501, 18), // "NavaidSearchModel*"
QT_MOC_LITERAL(35, 520, 14), // "airportRunways"
QT_MOC_LITERAL(36, 535, 15), // "QList<QObject*>"
QT_MOC_LITERAL(37, 551, 15), // "airportParkings"
QT_MOC_LITERAL(38, 567, 14), // "offsetDistance"
QT_MOC_LITERAL(39, 582, 14), // "headingEnabled"
QT_MOC_LITERAL(40, 597, 12), // "speedEnabled"
QT_MOC_LITERAL(41, 610, 15), // "altitudeEnabled"
QT_MOC_LITERAL(42, 626, 7), // "heading"
QT_MOC_LITERAL(43, 634, 8), // "altitude"
QT_MOC_LITERAL(44, 643, 8), // "airspeed"
QT_MOC_LITERAL(45, 652, 17), // "isAirportLocation"
QT_MOC_LITERAL(46, 670, 15), // "useActiveRunway"
QT_MOC_LITERAL(47, 686, 8), // "baseGeod"
QT_MOC_LITERAL(48, 695, 4), // "base"
QT_MOC_LITERAL(49, 700, 6), // "detail"
QT_MOC_LITERAL(50, 707, 12), // "isBaseLatLon"
QT_MOC_LITERAL(51, 720, 12) // "skipFromArgs"

    },
    "LocationController\0descriptionChanged\0"
    "\0offsetChanged\0baseLocationChanged\0"
    "configChanged\0skipFromArgsChanged\0"
    "setOffsetRadial\0QuantityValue\0"
    "offsetRadial\0setOffsetDistance\0offsetNm\0"
    "setOffsetEnabled\0offsetEnabled\0"
    "setOnFinal\0onFinal\0setTuneNAV1\0tuneNAV1\0"
    "setUseAvailableParking\0useAvailableParking\0"
    "onCollectConfig\0onRestoreCurrentLocation\0"
    "onSaveCurrentLocation\0setBaseLocation\0"
    "QmlPositioned*\0pos\0setDetailLocation\0"
    "addToRecent\0showHistoryInSearchModel\0"
    "parseStringAsGeod\0QmlGeod\0string\0"
    "description\0searchModel\0NavaidSearchModel*\0"
    "airportRunways\0QList<QObject*>\0"
    "airportParkings\0offsetDistance\0"
    "headingEnabled\0speedEnabled\0altitudeEnabled\0"
    "heading\0altitude\0airspeed\0isAirportLocation\0"
    "useActiveRunway\0baseGeod\0base\0detail\0"
    "isBaseLatLon\0skipFromArgs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocationController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
      23,  148, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,
       5,    0,  112,    2, 0x06 /* Public */,
       6,    0,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,  114,    2, 0x0a /* Public */,
      10,    1,  117,    2, 0x0a /* Public */,
      12,    1,  120,    2, 0x0a /* Public */,
      14,    1,  123,    2, 0x0a /* Public */,
      16,    1,  126,    2, 0x0a /* Public */,
      18,    1,  129,    2, 0x0a /* Public */,
      20,    0,  132,    2, 0x08 /* Private */,
      21,    0,  133,    2, 0x08 /* Private */,
      22,    0,  134,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      23,    1,  135,    2, 0x02 /* Public */,
      26,    1,  138,    2, 0x02 /* Public */,
      27,    1,  141,    2, 0x02 /* Public */,
      28,    0,  144,    2, 0x02 /* Public */,
      29,    1,  145,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 8,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::Bool,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void,
    0x80000000 | 30, QMetaType::QString,   31,

 // properties: name, type, flags
      32, QMetaType::QString, 0x00495001,
      33, 0x80000000 | 34, 0x00095409,
      35, 0x80000000 | 36, 0x00495009,
      37, 0x80000000 | 36, 0x00495009,
      13, QMetaType::Bool, 0x00495103,
       9, 0x80000000 | 8, 0x0049510b,
      38, 0x80000000 | 8, 0x0049510b,
      39, QMetaType::Bool, 0x00495003,
      40, QMetaType::Bool, 0x00495003,
      41, QMetaType::Bool, 0x00495003,
      42, 0x80000000 | 8, 0x0049500b,
      43, 0x80000000 | 8, 0x0049500b,
      44, 0x80000000 | 8, 0x0049500b,
      15, QMetaType::Bool, 0x00495103,
      45, QMetaType::Bool, 0x00495001,
      46, QMetaType::Bool, 0x00495103,
      19, QMetaType::Bool, 0x00495103,
      17, QMetaType::Bool, 0x00495103,
      47, 0x80000000 | 30, 0x0049510b,
      48, 0x80000000 | 24, 0x00095409,
      49, 0x80000000 | 24, 0x00095409,
      50, QMetaType::Bool, 0x00495001,
      51, QMetaType::Bool, 0x00495003,

 // properties: notify_signal_id
       0,
       0,
       2,
       2,
       1,
       1,
       1,
       3,
       3,
       3,
       3,
       3,
       3,
       3,
       2,
       3,
       3,
       3,
       2,
       0,
       0,
       2,
       4,

       0        // eod
};

void LocationController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocationController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->descriptionChanged(); break;
        case 1: _t->offsetChanged(); break;
        case 2: _t->baseLocationChanged(); break;
        case 3: _t->configChanged(); break;
        case 4: _t->skipFromArgsChanged(); break;
        case 5: _t->setOffsetRadial((*reinterpret_cast< QuantityValue(*)>(_a[1]))); break;
        case 6: _t->setOffsetDistance((*reinterpret_cast< QuantityValue(*)>(_a[1]))); break;
        case 7: _t->setOffsetEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setOnFinal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setTuneNAV1((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setUseAvailableParking((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onCollectConfig(); break;
        case 12: _t->onRestoreCurrentLocation(); break;
        case 13: _t->onSaveCurrentLocation(); break;
        case 14: _t->setBaseLocation((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 15: _t->setDetailLocation((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 16: _t->addToRecent((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 17: _t->showHistoryInSearchModel(); break;
        case 18: { QmlGeod _r = _t->parseStringAsGeod((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QmlGeod*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlPositioned* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlPositioned* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlPositioned* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocationController::descriptionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocationController::offsetChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LocationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocationController::baseLocationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LocationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocationController::configChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LocationController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocationController::skipFromArgsChanged)) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QObject*> >(); break;
        case 18:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlGeod >(); break;
        case 20:
        case 19:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlPositioned* >(); break;
        case 12:
        case 11:
        case 10:
        case 6:
        case 5:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LocationController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 1: *reinterpret_cast< NavaidSearchModel**>(_v) = _t->m_searchModel; break;
        case 2: *reinterpret_cast< QList<QObject*>*>(_v) = _t->airportRunways(); break;
        case 3: *reinterpret_cast< QList<QObject*>*>(_v) = _t->airportParkings(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->offsetEnabled(); break;
        case 5: *reinterpret_cast< QuantityValue*>(_v) = _t->offsetRadial(); break;
        case 6: *reinterpret_cast< QuantityValue*>(_v) = _t->offsetDistance(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_headingEnabled; break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->m_speedEnabled; break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->m_altitudeEnabled; break;
        case 10: *reinterpret_cast< QuantityValue*>(_v) = _t->m_heading; break;
        case 11: *reinterpret_cast< QuantityValue*>(_v) = _t->m_altitude; break;
        case 12: *reinterpret_cast< QuantityValue*>(_v) = _t->m_airspeed; break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->onFinal(); break;
        case 14: *reinterpret_cast< bool*>(_v) = _t->isAirportLocation(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->useActiveRunway(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->useAvailableParking(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->tuneNAV1(); break;
        case 18: *reinterpret_cast< QmlGeod*>(_v) = _t->baseGeod(); break;
        case 19: *reinterpret_cast< QmlPositioned**>(_v) = _t->baseLocation(); break;
        case 20: *reinterpret_cast< QmlPositioned**>(_v) = _t->detail(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->isBaseLatLon(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->m_skipFromArgs; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LocationController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setOffsetEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setOffsetRadial(*reinterpret_cast< QuantityValue*>(_v)); break;
        case 6: _t->setOffsetDistance(*reinterpret_cast< QuantityValue*>(_v)); break;
        case 7:
            if (_t->m_headingEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->m_headingEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->configChanged();
            }
            break;
        case 8:
            if (_t->m_speedEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->m_speedEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->configChanged();
            }
            break;
        case 9:
            if (_t->m_altitudeEnabled != *reinterpret_cast< bool*>(_v)) {
                _t->m_altitudeEnabled = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->configChanged();
            }
            break;
        case 10:
            if (_t->m_heading != *reinterpret_cast< QuantityValue*>(_v)) {
                _t->m_heading = *reinterpret_cast< QuantityValue*>(_v);
                Q_EMIT _t->configChanged();
            }
            break;
        case 11:
            if (_t->m_altitude != *reinterpret_cast< QuantityValue*>(_v)) {
                _t->m_altitude = *reinterpret_cast< QuantityValue*>(_v);
                Q_EMIT _t->configChanged();
            }
            break;
        case 12:
            if (_t->m_airspeed != *reinterpret_cast< QuantityValue*>(_v)) {
                _t->m_airspeed = *reinterpret_cast< QuantityValue*>(_v);
                Q_EMIT _t->configChanged();
            }
            break;
        case 13: _t->setOnFinal(*reinterpret_cast< bool*>(_v)); break;
        case 15: _t->setUseActiveRunway(*reinterpret_cast< bool*>(_v)); break;
        case 16: _t->setUseAvailableParking(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setTuneNAV1(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setBaseGeod(*reinterpret_cast< QmlGeod*>(_v)); break;
        case 22:
            if (_t->m_skipFromArgs != *reinterpret_cast< bool*>(_v)) {
                _t->m_skipFromArgs = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->skipFromArgsChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LocationController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LocationController.data,
    qt_meta_data_LocationController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocationController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocationController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocationController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LocationController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LocationController::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LocationController::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LocationController::baseLocationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LocationController::configChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LocationController::skipFromArgsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
