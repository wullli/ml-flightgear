/****************************************************************************
** Meta object code from reading C++ file 'NavaidDiagram.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NavaidDiagram.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavaidDiagram.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NavaidDiagram_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavaidDiagram_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavaidDiagram_t qt_meta_stringdata_NavaidDiagram = {
    {
QT_MOC_LITERAL(0, 0, 13), // "NavaidDiagram"
QT_MOC_LITERAL(1, 14, 15), // "locationChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "offsetChanged"
QT_MOC_LITERAL(4, 45, 6), // "navaid"
QT_MOC_LITERAL(5, 52, 4), // "geod"
QT_MOC_LITERAL(6, 57, 7), // "QmlGeod"
QT_MOC_LITERAL(7, 65, 7), // "heading"
QT_MOC_LITERAL(8, 73, 13), // "QuantityValue"
QT_MOC_LITERAL(9, 87, 13), // "offsetBearing"
QT_MOC_LITERAL(10, 101, 13), // "offsetEnabled"
QT_MOC_LITERAL(11, 115, 14) // "offsetDistance"

    },
    "NavaidDiagram\0locationChanged\0\0"
    "offsetChanged\0navaid\0geod\0QmlGeod\0"
    "heading\0QuantityValue\0offsetBearing\0"
    "offsetEnabled\0offsetDistance"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavaidDiagram[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       6,   26, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       4, QMetaType::LongLong, 0x00495103,
       5, 0x80000000 | 6, 0x0049510b,
       7, 0x80000000 | 8, 0x0049510b,
       9, 0x80000000 | 8, 0x0049510b,
      10, QMetaType::Bool, 0x00495103,
      11, 0x80000000 | 8, 0x0049510b,

 // properties: notify_signal_id
       0,
       0,
       1,
       1,
       1,
       1,

       0        // eod
};

void NavaidDiagram::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavaidDiagram *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->locationChanged(); break;
        case 1: _t->offsetChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavaidDiagram::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidDiagram::locationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavaidDiagram::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidDiagram::offsetChanged)) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QmlGeod >(); break;
        case 5:
        case 3:
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QuantityValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavaidDiagram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qlonglong*>(_v) = _t->navaid(); break;
        case 1: *reinterpret_cast< QmlGeod*>(_v) = _t->geod(); break;
        case 2: *reinterpret_cast< QuantityValue*>(_v) = _t->heading(); break;
        case 3: *reinterpret_cast< QuantityValue*>(_v) = _t->offsetBearing(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->isOffsetEnabled(); break;
        case 5: *reinterpret_cast< QuantityValue*>(_v) = _t->offsetDistance(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavaidDiagram *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNavaid(*reinterpret_cast< qlonglong*>(_v)); break;
        case 1: _t->setGeod(*reinterpret_cast< QmlGeod*>(_v)); break;
        case 2: _t->setHeading(*reinterpret_cast< QuantityValue*>(_v)); break;
        case 3: _t->setOffsetBearing(*reinterpret_cast< QuantityValue*>(_v)); break;
        case 4: _t->setOffsetEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setOffsetDistance(*reinterpret_cast< QuantityValue*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject NavaidDiagram::staticMetaObject = { {
    &BaseDiagram::staticMetaObject,
    qt_meta_stringdata_NavaidDiagram.data,
    qt_meta_data_NavaidDiagram,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavaidDiagram::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavaidDiagram::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavaidDiagram.stringdata0))
        return static_cast<void*>(this);
    return BaseDiagram::qt_metacast(_clname);
}

int NavaidDiagram::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = BaseDiagram::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 6;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 6;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void NavaidDiagram::locationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NavaidDiagram::offsetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
