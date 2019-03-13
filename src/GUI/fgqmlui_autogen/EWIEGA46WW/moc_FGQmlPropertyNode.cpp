/****************************************************************************
** Meta object code from reading C++ file 'FGQmlPropertyNode.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../FGQmlPropertyNode.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FGQmlPropertyNode.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FGQmlPropertyNode_t {
    QByteArrayData data[12];
    char stringdata0[130];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FGQmlPropertyNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FGQmlPropertyNode_t qt_meta_stringdata_FGQmlPropertyNode = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FGQmlPropertyNode"
QT_MOC_LITERAL(1, 18, 18), // "valueChangedNotify"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "value"
QT_MOC_LITERAL(4, 44, 11), // "pathChanged"
QT_MOC_LITERAL(5, 56, 4), // "path"
QT_MOC_LITERAL(6, 61, 17), // "parentPropChanged"
QT_MOC_LITERAL(7, 79, 18), // "FGQmlPropertyNode*"
QT_MOC_LITERAL(8, 98, 10), // "parentProp"
QT_MOC_LITERAL(9, 109, 7), // "setPath"
QT_MOC_LITERAL(10, 117, 3), // "set"
QT_MOC_LITERAL(11, 121, 8) // "newValue"

    },
    "FGQmlPropertyNode\0valueChangedNotify\0"
    "\0value\0pathChanged\0path\0parentPropChanged\0"
    "FGQmlPropertyNode*\0parentProp\0setPath\0"
    "set\0newValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FGQmlPropertyNode[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   54, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,
       6,    1,   45,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   48,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    1,   51,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QVariant,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,

 // methods: parameters
    QMetaType::Bool, QMetaType::QVariant,   11,

 // properties: name, type, flags
       3, QMetaType::QVariant, 0x00495001,
       5, QMetaType::QString, 0x00495103,
       8, 0x80000000 | 7, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void FGQmlPropertyNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FGQmlPropertyNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChangedNotify((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 1: _t->pathChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->parentPropChanged((*reinterpret_cast< FGQmlPropertyNode*(*)>(_a[1]))); break;
        case 3: _t->setPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { bool _r = _t->set((*reinterpret_cast< QVariant(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FGQmlPropertyNode* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FGQmlPropertyNode::*)(QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FGQmlPropertyNode::valueChangedNotify)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FGQmlPropertyNode::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FGQmlPropertyNode::pathChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FGQmlPropertyNode::*)(FGQmlPropertyNode * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FGQmlPropertyNode::parentPropChanged)) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FGQmlPropertyNode* >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FGQmlPropertyNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariant*>(_v) = _t->value(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< FGQmlPropertyNode**>(_v) = _t->parentProp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FGQmlPropertyNode *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FGQmlPropertyNode::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FGQmlPropertyNode.data,
    qt_meta_data_FGQmlPropertyNode,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FGQmlPropertyNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FGQmlPropertyNode::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FGQmlPropertyNode.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SGPropertyChangeListener"))
        return static_cast< SGPropertyChangeListener*>(this);
    return QObject::qt_metacast(_clname);
}

int FGQmlPropertyNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
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
void FGQmlPropertyNode::valueChangedNotify(QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FGQmlPropertyNode::pathChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FGQmlPropertyNode::parentPropChanged(FGQmlPropertyNode * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
