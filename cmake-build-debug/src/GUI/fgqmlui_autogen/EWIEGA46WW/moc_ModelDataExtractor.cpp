/****************************************************************************
** Meta object code from reading C++ file 'ModelDataExtractor.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/ModelDataExtractor.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModelDataExtractor.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ModelDataExtractor_t {
    QByteArrayData data[18];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ModelDataExtractor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ModelDataExtractor_t qt_meta_stringdata_ModelDataExtractor = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ModelDataExtractor"
QT_MOC_LITERAL(1, 19, 12), // "modelChanged"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "indexChanged"
QT_MOC_LITERAL(4, 46, 5), // "index"
QT_MOC_LITERAL(5, 52, 11), // "roleChanged"
QT_MOC_LITERAL(6, 64, 4), // "role"
QT_MOC_LITERAL(7, 69, 11), // "dataChanged"
QT_MOC_LITERAL(8, 81, 8), // "setModel"
QT_MOC_LITERAL(9, 90, 8), // "QJSValue"
QT_MOC_LITERAL(10, 99, 5), // "model"
QT_MOC_LITERAL(11, 105, 8), // "setIndex"
QT_MOC_LITERAL(12, 114, 7), // "setRole"
QT_MOC_LITERAL(13, 122, 13), // "onDataChanged"
QT_MOC_LITERAL(14, 136, 11), // "QModelIndex"
QT_MOC_LITERAL(15, 148, 7), // "topLeft"
QT_MOC_LITERAL(16, 156, 11), // "bottomRight"
QT_MOC_LITERAL(17, 168, 4) // "data"

    },
    "ModelDataExtractor\0modelChanged\0\0"
    "indexChanged\0index\0roleChanged\0role\0"
    "dataChanged\0setModel\0QJSValue\0model\0"
    "setIndex\0setRole\0onDataChanged\0"
    "QModelIndex\0topLeft\0bottomRight\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ModelDataExtractor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       4,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    1,   55,    2, 0x06 /* Public */,
       5,    1,   58,    2, 0x06 /* Public */,
       7,    0,   61,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   62,    2, 0x0a /* Public */,
      11,    1,   65,    2, 0x0a /* Public */,
      12,    1,   68,    2, 0x0a /* Public */,
      13,    2,   71,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 14, 0x80000000 | 14,   15,   16,

 // properties: name, type, flags
      10, 0x80000000 | 9, 0x0049510b,
       4, QMetaType::Int, 0x00495103,
       6, QMetaType::QString, 0x00495103,
      17, QMetaType::QVariant, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void ModelDataExtractor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModelDataExtractor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->modelChanged(); break;
        case 1: _t->indexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->roleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->dataChanged(); break;
        case 4: _t->setModel((*reinterpret_cast< QJSValue(*)>(_a[1]))); break;
        case 5: _t->setIndex((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setRole((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->onDataChanged((*reinterpret_cast< const QModelIndex(*)>(_a[1])),(*reinterpret_cast< const QModelIndex(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ModelDataExtractor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelDataExtractor::modelChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ModelDataExtractor::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelDataExtractor::indexChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ModelDataExtractor::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelDataExtractor::roleChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ModelDataExtractor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ModelDataExtractor::dataChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QJSValue >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ModelDataExtractor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QJSValue*>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->index(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->role(); break;
        case 3: *reinterpret_cast< QVariant*>(_v) = _t->data(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ModelDataExtractor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setModel(*reinterpret_cast< QJSValue*>(_v)); break;
        case 1: _t->setIndex(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setRole(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ModelDataExtractor::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_ModelDataExtractor.data,
    qt_meta_data_ModelDataExtractor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ModelDataExtractor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModelDataExtractor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ModelDataExtractor.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ModelDataExtractor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
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
void ModelDataExtractor::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ModelDataExtractor::indexChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ModelDataExtractor::roleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ModelDataExtractor::dataChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
