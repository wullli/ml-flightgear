/****************************************************************************
** Meta object code from reading C++ file 'AirportDiagram.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/AirportDiagram.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AirportDiagram.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AirportDiagram_t {
    QByteArrayData data[13];
    char stringdata0[175];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AirportDiagram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AirportDiagram_t qt_meta_stringdata_AirportDiagram = {
    {
QT_MOC_LITERAL(0, 0, 14), // "AirportDiagram"
QT_MOC_LITERAL(1, 15, 7), // "clicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "QmlPositioned*"
QT_MOC_LITERAL(4, 39, 3), // "pos"
QT_MOC_LITERAL(5, 43, 16), // "selectionChanged"
QT_MOC_LITERAL(6, 60, 14), // "airportChanged"
QT_MOC_LITERAL(7, 75, 24), // "approachExtensionChanged"
QT_MOC_LITERAL(8, 100, 9), // "selection"
QT_MOC_LITERAL(9, 110, 7), // "airport"
QT_MOC_LITERAL(10, 118, 24), // "approachExtensionEnabled"
QT_MOC_LITERAL(11, 143, 17), // "approachExtension"
QT_MOC_LITERAL(12, 161, 13) // "QuantityValue"

    },
    "AirportDiagram\0clicked\0\0QmlPositioned*\0"
    "pos\0selectionChanged\0airportChanged\0"
    "approachExtensionChanged\0selection\0"
    "airport\0approachExtensionEnabled\0"
    "approachExtension\0QuantityValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AirportDiagram[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       4,   40, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       5,    0,   37,    2, 0x06 /* Public */,
       6,    0,   38,    2, 0x06 /* Public */,
       7,    0,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, 0x80000000 | 3, 0x0049510b,
       9, QMetaType::LongLong, 0x00495003,
      10, QMetaType::Bool, 0x00495103,
      11, 0x80000000 | 12, 0x0049510b,

 // properties: notify_signal_id
       1,
       2,
       3,
       3,

       0        // eod
};

void AirportDiagram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AirportDiagram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clicked((*reinterpret_cast< QmlPositioned*(*)>(_a[1]))); break;
        case 1: _t->selectionChanged(); break;
        case 2: _t->airportChanged(); break;
        case 3: _t->approachExtensionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AirportDiagram::*)(QmlPositioned * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirportDiagram::clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AirportDiagram::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirportDiagram::selectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AirportDiagram::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirportDiagram::airportChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AirportDiagram::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AirportDiagram::approachExtensionChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AirportDiagram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QmlPositioned**>(_v) = _t->selection(); break;
        case 1: *reinterpret_cast< qlonglong*>(_v) = _t->airportGuid(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->approachExtensionEnabled(); break;
        case 3: *reinterpret_cast< QuantityValue*>(_v) = _t->approachExtension(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AirportDiagram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelection(*reinterpret_cast< QmlPositioned**>(_v)); break;
        case 1: _t->setAirportGuid(*reinterpret_cast< qlonglong*>(_v)); break;
        case 2: _t->setApproachExtensionEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setApproachExtension(*reinterpret_cast< QuantityValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AirportDiagram::staticMetaObject = { {
    &BaseDiagram::staticMetaObject,
    qt_meta_stringdata_AirportDiagram.data,
    qt_meta_data_AirportDiagram,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AirportDiagram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AirportDiagram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AirportDiagram.stringdata0))
        return static_cast<void*>(this);
    return BaseDiagram::qt_metacast(_clname);
}

int AirportDiagram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDiagram::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AirportDiagram::clicked(QmlPositioned * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AirportDiagram::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AirportDiagram::airportChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AirportDiagram::approachExtensionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
