/****************************************************************************
** Meta object code from reading C++ file 'RouteDiagram.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RouteDiagram.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'RouteDiagram.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RouteDiagram_t {
    QByteArrayData data[9];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RouteDiagram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RouteDiagram_t qt_meta_stringdata_RouteDiagram = {
    {
QT_MOC_LITERAL(0, 0, 12), // "RouteDiagram"
QT_MOC_LITERAL(1, 13, 17), // "flightplanChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 21), // "FlightPlanController*"
QT_MOC_LITERAL(4, 54, 10), // "flightplan"
QT_MOC_LITERAL(5, 65, 15), // "legIndexChanged"
QT_MOC_LITERAL(6, 81, 14), // "activeLegIndex"
QT_MOC_LITERAL(7, 96, 17), // "setActiveLegIndex"
QT_MOC_LITERAL(8, 114, 7) // "numLegs"

    },
    "RouteDiagram\0flightplanChanged\0\0"
    "FlightPlanController*\0flightplan\0"
    "legIndexChanged\0activeLegIndex\0"
    "setActiveLegIndex\0numLegs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RouteDiagram[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    6,

 // properties: name, type, flags
       4, 0x80000000 | 3, 0x0049510b,
       6, QMetaType::Int, 0x00495103,
       8, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,

       0        // eod
};

void RouteDiagram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<RouteDiagram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->flightplanChanged((*reinterpret_cast< FlightPlanController*(*)>(_a[1]))); break;
        case 1: _t->legIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setActiveLegIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (RouteDiagram::*)(FlightPlanController * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RouteDiagram::flightplanChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (RouteDiagram::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RouteDiagram::legIndexChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<RouteDiagram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< FlightPlanController**>(_v) = _t->flightplan(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->activeLegIndex(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->numLegs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<RouteDiagram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFlightplan(*reinterpret_cast< FlightPlanController**>(_v)); break;
        case 1: _t->setActiveLegIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject RouteDiagram::staticMetaObject = { {
    &BaseDiagram::staticMetaObject,
    qt_meta_stringdata_RouteDiagram.data,
    qt_meta_data_RouteDiagram,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *RouteDiagram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RouteDiagram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RouteDiagram.stringdata0))
        return static_cast<void*>(this);
    return BaseDiagram::qt_metacast(_clname);
}

int RouteDiagram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDiagram::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void RouteDiagram::flightplanChanged(FlightPlanController * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void RouteDiagram::legIndexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
