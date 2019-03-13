/****************************************************************************
** Meta object code from reading C++ file 'UnitsModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../UnitsModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UnitsModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Units_t {
    QByteArrayData data[27];
    char stringdata0[277];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Units_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Units_t qt_meta_stringdata_Units = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Units"
QT_MOC_LITERAL(1, 6, 4), // "Type"
QT_MOC_LITERAL(2, 11, 7), // "NoUnits"
QT_MOC_LITERAL(3, 19, 7), // "FeetMSL"
QT_MOC_LITERAL(4, 27, 7), // "FeetAGL"
QT_MOC_LITERAL(5, 35, 11), // "FlightLevel"
QT_MOC_LITERAL(6, 47, 9), // "MetersMSL"
QT_MOC_LITERAL(7, 57, 5), // "Knots"
QT_MOC_LITERAL(8, 63, 4), // "Mach"
QT_MOC_LITERAL(9, 68, 11), // "DegreesTrue"
QT_MOC_LITERAL(10, 80, 15), // "DegreesMagnetic"
QT_MOC_LITERAL(11, 96, 7), // "TimeUTC"
QT_MOC_LITERAL(12, 104, 9), // "TimeLocal"
QT_MOC_LITERAL(13, 114, 13), // "NauticalMiles"
QT_MOC_LITERAL(14, 128, 10), // "Kilometers"
QT_MOC_LITERAL(15, 139, 7), // "FreqMHz"
QT_MOC_LITERAL(16, 147, 7), // "FreqKHz"
QT_MOC_LITERAL(17, 155, 4), // "Mode"
QT_MOC_LITERAL(18, 160, 8), // "Altitude"
QT_MOC_LITERAL(19, 169, 20), // "AltitudeIncludingAGL"
QT_MOC_LITERAL(20, 190, 23), // "AltitudeIncludingMeters"
QT_MOC_LITERAL(21, 214, 5), // "Speed"
QT_MOC_LITERAL(22, 220, 14), // "SpeedOnlyKnots"
QT_MOC_LITERAL(23, 235, 7), // "Heading"
QT_MOC_LITERAL(24, 243, 8), // "Timezone"
QT_MOC_LITERAL(25, 252, 8), // "Distance"
QT_MOC_LITERAL(26, 261, 15) // "HeadingOnlyTrue"

    },
    "Units\0Type\0NoUnits\0FeetMSL\0FeetAGL\0"
    "FlightLevel\0MetersMSL\0Knots\0Mach\0"
    "DegreesTrue\0DegreesMagnetic\0TimeUTC\0"
    "TimeLocal\0NauticalMiles\0Kilometers\0"
    "FreqMHz\0FreqKHz\0Mode\0Altitude\0"
    "AltitudeIncludingAGL\0AltitudeIncludingMeters\0"
    "Speed\0SpeedOnlyKnots\0Heading\0Timezone\0"
    "Distance\0HeadingOnlyTrue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Units[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   15,   24,
      17,   17, 0x0,    9,   54,

 // enum data: key, value
       2, uint(Units::NoUnits),
       3, uint(Units::FeetMSL),
       4, uint(Units::FeetAGL),
       5, uint(Units::FlightLevel),
       6, uint(Units::MetersMSL),
       7, uint(Units::Knots),
       8, uint(Units::Mach),
       9, uint(Units::DegreesTrue),
      10, uint(Units::DegreesMagnetic),
      11, uint(Units::TimeUTC),
      12, uint(Units::TimeLocal),
      13, uint(Units::NauticalMiles),
      14, uint(Units::Kilometers),
      15, uint(Units::FreqMHz),
      16, uint(Units::FreqKHz),
      18, uint(Units::Altitude),
      19, uint(Units::AltitudeIncludingAGL),
      20, uint(Units::AltitudeIncludingMeters),
      21, uint(Units::Speed),
      22, uint(Units::SpeedOnlyKnots),
      23, uint(Units::Heading),
      24, uint(Units::Timezone),
      25, uint(Units::Distance),
      26, uint(Units::HeadingOnlyTrue),

       0        // eod
};

void Units::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Units::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_Units.data,
    qt_meta_data_Units,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Units::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Units::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Units.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Units::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_QuantityValue_t {
    QByteArrayData data[9];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QuantityValue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QuantityValue_t qt_meta_stringdata_QuantityValue = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QuantityValue"
QT_MOC_LITERAL(1, 14, 13), // "convertToUnit"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 1), // "u"
QT_MOC_LITERAL(4, 31, 8), // "toString"
QT_MOC_LITERAL(5, 40, 7), // "isValid"
QT_MOC_LITERAL(6, 48, 5), // "value"
QT_MOC_LITERAL(7, 54, 4), // "unit"
QT_MOC_LITERAL(8, 59, 11) // "Units::Type"

    },
    "QuantityValue\0convertToUnit\0\0u\0toString\0"
    "isValid\0value\0unit\0Units::Type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QuantityValue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       2,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x02 /* Public */,
       4,    0,   32,    2, 0x02 /* Public */,
       5,    0,   33,    2, 0x02 /* Public */,

 // methods: parameters
    0x80000000 | 0, QMetaType::Int,    3,
    QMetaType::QString,
    QMetaType::Bool,

 // properties: name, type, flags
       6, QMetaType::Double, 0x00095003,
       7, 0x80000000 | 8, 0x0009500b,

       0        // eod
};

void QuantityValue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = reinterpret_cast<QuantityValue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QuantityValue _r = _t->convertToUnit((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QuantityValue*>(_a[0]) = std::move(_r); }  break;
        case 1: { QString _r = _t->toString();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->isValid();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<QuantityValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->value; break;
        case 1: *reinterpret_cast< Units::Type*>(_v) = _t->unit; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<QuantityValue *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->value != *reinterpret_cast< double*>(_v)) {
                _t->value = *reinterpret_cast< double*>(_v);
            }
            break;
        case 1:
            if (_t->unit != *reinterpret_cast< Units::Type*>(_v)) {
                _t->unit = *reinterpret_cast< Units::Type*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_QuantityValue[] = {
        &Units::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject QuantityValue::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_QuantityValue.data,
    qt_meta_data_QuantityValue,
    qt_static_metacall,
    qt_meta_extradata_QuantityValue,
    nullptr
} };

struct qt_meta_stringdata_UnitsModel_t {
    QByteArrayData data[23];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UnitsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UnitsModel_t qt_meta_stringdata_UnitsModel = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UnitsModel"
QT_MOC_LITERAL(1, 11, 11), // "modeChanged"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "Units::Mode"
QT_MOC_LITERAL(4, 36, 4), // "mode"
QT_MOC_LITERAL(5, 41, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 58, 13), // "selectedIndex"
QT_MOC_LITERAL(7, 72, 7), // "setMode"
QT_MOC_LITERAL(8, 80, 16), // "setSelectedIndex"
QT_MOC_LITERAL(9, 97, 15), // "setSelectedUnit"
QT_MOC_LITERAL(10, 113, 1), // "u"
QT_MOC_LITERAL(11, 115, 10), // "numChoices"
QT_MOC_LITERAL(12, 126, 12), // "selectedUnit"
QT_MOC_LITERAL(13, 139, 8), // "minValue"
QT_MOC_LITERAL(14, 148, 8), // "maxValue"
QT_MOC_LITERAL(15, 157, 8), // "stepSize"
QT_MOC_LITERAL(16, 166, 11), // "numDecimals"
QT_MOC_LITERAL(17, 178, 17), // "maxTextForMetrics"
QT_MOC_LITERAL(18, 196, 9), // "shortText"
QT_MOC_LITERAL(19, 206, 8), // "isPrefix"
QT_MOC_LITERAL(20, 215, 5), // "wraps"
QT_MOC_LITERAL(21, 221, 9), // "validator"
QT_MOC_LITERAL(22, 231, 11) // "QValidator*"

    },
    "UnitsModel\0modeChanged\0\0Units::Mode\0"
    "mode\0selectionChanged\0selectedIndex\0"
    "setMode\0setSelectedIndex\0setSelectedUnit\0"
    "u\0numChoices\0selectedUnit\0minValue\0"
    "maxValue\0stepSize\0numDecimals\0"
    "maxTextForMetrics\0shortText\0isPrefix\0"
    "wraps\0validator\0QValidator*"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UnitsModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      13,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
       9,    1,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,   10,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
      11, QMetaType::Int, 0x00495001,
       6, QMetaType::Int, 0x00495103,
      12, QMetaType::Int, 0x00495103,
      13, QMetaType::Double, 0x00495001,
      14, QMetaType::Double, 0x00495001,
      15, QMetaType::Double, 0x00495001,
      16, QMetaType::Int, 0x00495001,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::QString, 0x00495001,
      19, QMetaType::Bool, 0x00495001,
      20, QMetaType::Bool, 0x00495001,
      21, 0x80000000 | 22, 0x00495009,

 // properties: notify_signal_id
       0,
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

       0        // eod
};

void UnitsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnitsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modeChanged((*reinterpret_cast< Units::Mode(*)>(_a[1]))); break;
        case 1: _t->selectionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setMode((*reinterpret_cast< Units::Mode(*)>(_a[1]))); break;
        case 3: _t->setSelectedIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->setSelectedUnit((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UnitsModel::*)(Units::Mode );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnitsModel::modeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UnitsModel::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&UnitsModel::selectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UnitsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Units::Mode*>(_v) = _t->mode(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->numChoices(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->selectedIndex(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->selectedUnit(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->minValue(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->maxValue(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->stepSize(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->numDecimals(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->maxTextForMetrics(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->shortText(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->isPrefix(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->doesWrap(); break;
        case 12: *reinterpret_cast< QValidator**>(_v) = _t->validator(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UnitsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMode(*reinterpret_cast< Units::Mode*>(_v)); break;
        case 2: _t->setSelectedIndex(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setSelectedUnit(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

static const QMetaObject * const qt_meta_extradata_UnitsModel[] = {
        &Units::staticMetaObject,
    nullptr
};

QT_INIT_METAOBJECT const QMetaObject UnitsModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_UnitsModel.data,
    qt_meta_data_UnitsModel,
    qt_static_metacall,
    qt_meta_extradata_UnitsModel,
    nullptr
} };


const QMetaObject *UnitsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UnitsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UnitsModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int UnitsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void UnitsModel::modeChanged(Units::Mode _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void UnitsModel::selectionChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
