/****************************************************************************
** Meta object code from reading C++ file 'QmlPositioned.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QmlPositioned.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QmlPositioned.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QmlGeod_t {
    QByteArrayData data[20];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlGeod_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlGeod_t qt_meta_stringdata_QmlGeod = {
    {
QT_MOC_LITERAL(0, 0, 7), // "QmlGeod"
QT_MOC_LITERAL(1, 8, 14), // "setLatitudeDeg"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "latitudeDeg"
QT_MOC_LITERAL(4, 36, 15), // "setLongitudeDeg"
QT_MOC_LITERAL(5, 52, 12), // "longitudeDeg"
QT_MOC_LITERAL(6, 65, 14), // "setLatitudeRad"
QT_MOC_LITERAL(7, 80, 11), // "latitudeRad"
QT_MOC_LITERAL(8, 92, 15), // "setLongitudeRad"
QT_MOC_LITERAL(9, 108, 12), // "longitudeRad"
QT_MOC_LITERAL(10, 121, 13), // "setElevationM"
QT_MOC_LITERAL(11, 135, 10), // "elevationM"
QT_MOC_LITERAL(12, 146, 14), // "setElevationFt"
QT_MOC_LITERAL(13, 161, 11), // "elevationFt"
QT_MOC_LITERAL(14, 173, 8), // "toString"
QT_MOC_LITERAL(15, 182, 6), // "Format"
QT_MOC_LITERAL(16, 189, 3), // "fmt"
QT_MOC_LITERAL(17, 193, 5), // "valid"
QT_MOC_LITERAL(18, 199, 14), // "DecimalDegrees"
QT_MOC_LITERAL(19, 214, 20) // "SignedDecimalDegrees"

    },
    "QmlGeod\0setLatitudeDeg\0\0latitudeDeg\0"
    "setLongitudeDeg\0longitudeDeg\0"
    "setLatitudeRad\0latitudeRad\0setLongitudeRad\0"
    "longitudeRad\0setElevationM\0elevationM\0"
    "setElevationFt\0elevationFt\0toString\0"
    "Format\0fmt\0valid\0DecimalDegrees\0"
    "SignedDecimalDegrees"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlGeod[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       7,   70, // properties
       1,   91, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       8,    1,   58,    2, 0x0a /* Public */,
      10,    1,   61,    2, 0x0a /* Public */,
      12,    1,   64,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      14,    1,   67,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double,    5,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 15,   16,

 // properties: name, type, flags
       3, QMetaType::Double, 0x00095103,
       5, QMetaType::Double, 0x00095103,
       7, QMetaType::Double, 0x00095103,
       9, QMetaType::Double, 0x00095103,
      11, QMetaType::Double, 0x00095103,
      13, QMetaType::Double, 0x00095103,
      17, QMetaType::Bool, 0x00095001,

 // enums: name, alias, flags, count, data
      15,   15, 0x0,    2,   96,

 // enum data: key, value
      18, uint(QmlGeod::DecimalDegrees),
      19, uint(QmlGeod::SignedDecimalDegrees),

       0        // eod
};

void QmlGeod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<QmlGeod *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setLatitudeDeg((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->setLongitudeDeg((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->setLatitudeRad((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->setLongitudeRad((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->setElevationM((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->setElevationFt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: { QString _r = _t->toString((*reinterpret_cast< Format(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QmlGeod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->latitudeDeg(); break;
        case 1: *reinterpret_cast< double*>(_v) = _t->longitudeDeg(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->latitudeRad(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->longitudeRad(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->elevationM(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->elevationFt(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->valid(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<QmlGeod *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLatitudeDeg(*reinterpret_cast< double*>(_v)); break;
        case 1: _t->setLongitudeDeg(*reinterpret_cast< double*>(_v)); break;
        case 2: _t->setLatitudeRad(*reinterpret_cast< double*>(_v)); break;
        case 3: _t->setLongitudeRad(*reinterpret_cast< double*>(_v)); break;
        case 4: _t->setElevationM(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setElevationFt(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QmlGeod::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QmlGeod.data,
    qt_meta_data_QmlGeod,
    qt_static_metacall,
    nullptr,
    nullptr
} };

struct qt_meta_stringdata_QmlPositioned_t {
    QByteArrayData data[54];
    char stringdata0[495];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QmlPositioned_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QmlPositioned_t qt_meta_stringdata_QmlPositioned = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QmlPositioned"
QT_MOC_LITERAL(1, 14, 11), // "guidChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "infoChanged"
QT_MOC_LITERAL(4, 39, 7), // "setGuid"
QT_MOC_LITERAL(5, 47, 4), // "guid"
QT_MOC_LITERAL(6, 52, 6), // "equals"
QT_MOC_LITERAL(7, 59, 14), // "QmlPositioned*"
QT_MOC_LITERAL(8, 74, 5), // "other"
QT_MOC_LITERAL(9, 80, 5), // "ident"
QT_MOC_LITERAL(10, 86, 4), // "name"
QT_MOC_LITERAL(11, 91, 4), // "type"
QT_MOC_LITERAL(12, 96, 4), // "Type"
QT_MOC_LITERAL(13, 101, 5), // "valid"
QT_MOC_LITERAL(14, 107, 4), // "geod"
QT_MOC_LITERAL(15, 112, 8), // "QmlGeod*"
QT_MOC_LITERAL(16, 121, 13), // "isAirportType"
QT_MOC_LITERAL(17, 135, 12), // "isRunwayType"
QT_MOC_LITERAL(18, 148, 12), // "isNavaidType"
QT_MOC_LITERAL(19, 161, 18), // "navaidFrequencyMHz"
QT_MOC_LITERAL(20, 180, 13), // "navaidRangeNm"
QT_MOC_LITERAL(21, 194, 12), // "colocatedDME"
QT_MOC_LITERAL(22, 207, 12), // "navaidRunway"
QT_MOC_LITERAL(23, 220, 13), // "owningAirport"
QT_MOC_LITERAL(24, 234, 16), // "runwayHeadingDeg"
QT_MOC_LITERAL(25, 251, 14), // "runwayLengthFt"
QT_MOC_LITERAL(26, 266, 18), // "airportHasParkings"
QT_MOC_LITERAL(27, 285, 7), // "Invalid"
QT_MOC_LITERAL(28, 293, 7), // "Airport"
QT_MOC_LITERAL(29, 301, 8), // "Heliport"
QT_MOC_LITERAL(30, 310, 7), // "Seaport"
QT_MOC_LITERAL(31, 318, 6), // "Runway"
QT_MOC_LITERAL(32, 325, 7), // "Helipad"
QT_MOC_LITERAL(33, 333, 7), // "Taxiway"
QT_MOC_LITERAL(34, 341, 8), // "Pavement"
QT_MOC_LITERAL(35, 350, 8), // "Waypoint"
QT_MOC_LITERAL(36, 359, 3), // "Fix"
QT_MOC_LITERAL(37, 363, 3), // "NDB"
QT_MOC_LITERAL(38, 367, 3), // "VOR"
QT_MOC_LITERAL(39, 371, 3), // "ILS"
QT_MOC_LITERAL(40, 375, 9), // "Localizer"
QT_MOC_LITERAL(41, 385, 10), // "Glideslope"
QT_MOC_LITERAL(42, 396, 11), // "OuterMarker"
QT_MOC_LITERAL(43, 408, 12), // "MiddleMarker"
QT_MOC_LITERAL(44, 421, 11), // "InnerMarker"
QT_MOC_LITERAL(45, 433, 3), // "DME"
QT_MOC_LITERAL(46, 437, 5), // "TACAN"
QT_MOC_LITERAL(47, 443, 11), // "MobileTACAN"
QT_MOC_LITERAL(48, 455, 5), // "Tower"
QT_MOC_LITERAL(49, 461, 7), // "Parking"
QT_MOC_LITERAL(50, 469, 7), // "Country"
QT_MOC_LITERAL(51, 477, 4), // "City"
QT_MOC_LITERAL(52, 482, 4), // "Town"
QT_MOC_LITERAL(53, 487, 7) // "Village"

    },
    "QmlPositioned\0guidChanged\0\0infoChanged\0"
    "setGuid\0guid\0equals\0QmlPositioned*\0"
    "other\0ident\0name\0type\0Type\0valid\0geod\0"
    "QmlGeod*\0isAirportType\0isRunwayType\0"
    "isNavaidType\0navaidFrequencyMHz\0"
    "navaidRangeNm\0colocatedDME\0navaidRunway\0"
    "owningAirport\0runwayHeadingDeg\0"
    "runwayLengthFt\0airportHasParkings\0"
    "Invalid\0Airport\0Heliport\0Seaport\0"
    "Runway\0Helipad\0Taxiway\0Pavement\0"
    "Waypoint\0Fix\0NDB\0VOR\0ILS\0Localizer\0"
    "Glideslope\0OuterMarker\0MiddleMarker\0"
    "InnerMarker\0DME\0TACAN\0MobileTACAN\0"
    "Tower\0Parking\0Country\0City\0Town\0Village"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QmlPositioned[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
      17,   42, // properties
       1,  110, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   36,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   39,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    5,

 // methods: parameters
    QMetaType::Bool, 0x80000000 | 7,    8,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495001,
      10, QMetaType::QString, 0x00495001,
      11, 0x80000000 | 12, 0x00495009,
      13, QMetaType::Bool, 0x00495001,
      14, 0x80000000 | 15, 0x00495009,
       5, QMetaType::LongLong, 0x00495103,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495001,
      18, QMetaType::Bool, 0x00495001,
      19, QMetaType::Double, 0x00495001,
      20, QMetaType::Double, 0x00495001,
      21, 0x80000000 | 7, 0x00495009,
      22, 0x80000000 | 7, 0x00495009,
      23, 0x80000000 | 7, 0x00495009,
      24, QMetaType::Double, 0x00495001,
      25, QMetaType::Double, 0x00495001,
      26, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       1,
       1,
       1,
       1,
       1,
       0,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,
       1,

 // enums: name, alias, flags, count, data
      12,   12, 0x0,   27,  115,

 // enum data: key, value
      27, uint(QmlPositioned::Invalid),
      28, uint(QmlPositioned::Airport),
      29, uint(QmlPositioned::Heliport),
      30, uint(QmlPositioned::Seaport),
      31, uint(QmlPositioned::Runway),
      32, uint(QmlPositioned::Helipad),
      33, uint(QmlPositioned::Taxiway),
      34, uint(QmlPositioned::Pavement),
      35, uint(QmlPositioned::Waypoint),
      36, uint(QmlPositioned::Fix),
      37, uint(QmlPositioned::NDB),
      38, uint(QmlPositioned::VOR),
      39, uint(QmlPositioned::ILS),
      40, uint(QmlPositioned::Localizer),
      41, uint(QmlPositioned::Glideslope),
      42, uint(QmlPositioned::OuterMarker),
      43, uint(QmlPositioned::MiddleMarker),
      44, uint(QmlPositioned::InnerMarker),
      45, uint(QmlPositioned::DME),
      46, uint(QmlPositioned::TACAN),
      47, uint(QmlPositioned::MobileTACAN),
      48, uint(QmlPositioned::Tower),
      49, uint(QmlPositioned::Parking),
      50, uint(QmlPositioned::Country),
      51, uint(QmlPositioned::City),
      52, uint(QmlPositioned::Town),
      53, uint(QmlPositioned::Village),

       0        // eod
};

void QmlPositioned::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QmlPositioned *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->guidChanged(); break;
        case 1: _t->infoChanged(); break;
        case 2: _t->setGuid((*reinterpret_cast< qlonglong(*)>(_a[1]))); break;
        case 3: { bool _r = _t->equals((*reinterpret_cast< QmlPositioned*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
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
            using _t = void (QmlPositioned::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlPositioned::guidChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QmlPositioned::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&QmlPositioned::infoChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
        case 12:
        case 11:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlPositioned* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QmlPositioned *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->ident(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< Type*>(_v) = _t->type(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->valid(); break;
        case 4: *reinterpret_cast< QmlGeod**>(_v) = _t->geod(); break;
        case 5: *reinterpret_cast< qlonglong*>(_v) = _t->guid(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isAirportType(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isRunwayType(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isNavaidType(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->navaidFrequencyMHz(); break;
        case 10: *reinterpret_cast< double*>(_v) = _t->navaidRangeNm(); break;
        case 11: *reinterpret_cast< QmlPositioned**>(_v) = _t->colocatedDME(); break;
        case 12: *reinterpret_cast< QmlPositioned**>(_v) = _t->navaidRunway(); break;
        case 13: *reinterpret_cast< QmlPositioned**>(_v) = _t->owningAirport(); break;
        case 14: *reinterpret_cast< double*>(_v) = _t->runwayHeadingDeg(); break;
        case 15: *reinterpret_cast< double*>(_v) = _t->runwayLengthFt(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->airportHasParkings(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QmlPositioned *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 5: _t->setGuid(*reinterpret_cast< qlonglong*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject QmlPositioned::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_QmlPositioned.data,
    qt_meta_data_QmlPositioned,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *QmlPositioned::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QmlPositioned::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_QmlPositioned.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QmlPositioned::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 17;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 17;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void QmlPositioned::guidChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QmlPositioned::infoChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
