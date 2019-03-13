/****************************************************************************
** Meta object code from reading C++ file 'LauncherArgumentTokenizer.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/LauncherArgumentTokenizer.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LauncherArgumentTokenizer.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LauncherArgumentTokenizer_t {
    QByteArrayData data[9];
    char stringdata0[119];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LauncherArgumentTokenizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LauncherArgumentTokenizer_t qt_meta_stringdata_LauncherArgumentTokenizer = {
    {
QT_MOC_LITERAL(0, 0, 25), // "LauncherArgumentTokenizer"
QT_MOC_LITERAL(1, 26, 16), // "argStringChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 9), // "argString"
QT_MOC_LITERAL(4, 54, 12), // "setArgString"
QT_MOC_LITERAL(5, 67, 6), // "tokens"
QT_MOC_LITERAL(6, 74, 5), // "valid"
QT_MOC_LITERAL(7, 80, 18), // "havePositionalArgs"
QT_MOC_LITERAL(8, 99, 19) // "haveUnsupportedArgs"

    },
    "LauncherArgumentTokenizer\0argStringChanged\0"
    "\0argString\0setArgString\0tokens\0valid\0"
    "havePositionalArgs\0haveUnsupportedArgs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LauncherArgumentTokenizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       5,   30, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   27,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // properties: name, type, flags
       3, QMetaType::QString, 0x00495103,
       5, QMetaType::QVariantList, 0x00495001,
       6, QMetaType::Bool, 0x00495001,
       7, QMetaType::Bool, 0x00495001,
       8, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,

       0        // eod
};

void LauncherArgumentTokenizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LauncherArgumentTokenizer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->argStringChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setArgString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LauncherArgumentTokenizer::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherArgumentTokenizer::argStringChanged)) {
                *result = 0;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LauncherArgumentTokenizer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->argString(); break;
        case 1: *reinterpret_cast< QVariantList*>(_v) = _t->tokens(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isValid(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->havePositionalArgs(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->haveUnsupportedArgs(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LauncherArgumentTokenizer *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setArgString(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LauncherArgumentTokenizer::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LauncherArgumentTokenizer.data,
    qt_meta_data_LauncherArgumentTokenizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LauncherArgumentTokenizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LauncherArgumentTokenizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LauncherArgumentTokenizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LauncherArgumentTokenizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LauncherArgumentTokenizer::argStringChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
