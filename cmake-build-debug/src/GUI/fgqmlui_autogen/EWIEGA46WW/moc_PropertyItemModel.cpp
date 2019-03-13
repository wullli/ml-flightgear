/****************************************************************************
** Meta object code from reading C++ file 'PropertyItemModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/PropertyItemModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PropertyItemModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PropertyItemModel_t {
    QByteArrayData data[14];
    char stringdata0[214];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PropertyItemModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PropertyItemModel_t qt_meta_stringdata_PropertyItemModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PropertyItemModel"
QT_MOC_LITERAL(1, 18, 11), // "rootChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 22), // "childNameFilterChanged"
QT_MOC_LITERAL(4, 54, 15), // "childNameFilter"
QT_MOC_LITERAL(5, 70, 15), // "mappingsChanged"
QT_MOC_LITERAL(6, 86, 11), // "setRootPath"
QT_MOC_LITERAL(7, 98, 8), // "rootPath"
QT_MOC_LITERAL(8, 107, 18), // "setChildNameFilter"
QT_MOC_LITERAL(9, 126, 7), // "setRoot"
QT_MOC_LITERAL(10, 134, 18), // "FGQmlPropertyNode*"
QT_MOC_LITERAL(11, 153, 4), // "root"
QT_MOC_LITERAL(12, 158, 8), // "mappings"
QT_MOC_LITERAL(13, 167, 46) // "QQmlListProperty<PropertyItem..."

    },
    "PropertyItemModel\0rootChanged\0\0"
    "childNameFilterChanged\0childNameFilter\0"
    "mappingsChanged\0setRootPath\0rootPath\0"
    "setChildNameFilter\0setRoot\0"
    "FGQmlPropertyNode*\0root\0mappings\0"
    "QQmlListProperty<PropertyItemModelRoleMapping>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PropertyItemModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   58, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    1,   45,    2, 0x06 /* Public */,
       5,    0,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   49,    2, 0x0a /* Public */,
       8,    1,   52,    2, 0x0a /* Public */,
       9,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 10,   11,

 // properties: name, type, flags
       7, QMetaType::QString, 0x00495103,
      11, 0x80000000 | 10, 0x0049510b,
       4, QMetaType::QString, 0x00495103,
      12, 0x80000000 | 13, 0x00495009,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void PropertyItemModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropertyItemModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rootChanged(); break;
        case 1: _t->childNameFilterChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->mappingsChanged(); break;
        case 3: _t->setRootPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setChildNameFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setRoot((*reinterpret_cast< FGQmlPropertyNode*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropertyItemModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyItemModel::rootChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropertyItemModel::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyItemModel::childNameFilterChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PropertyItemModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PropertyItemModel::mappingsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PropertyItemModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->rootPath(); break;
        case 1: *reinterpret_cast< FGQmlPropertyNode**>(_v) = _t->root(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->childNameFilter(); break;
        case 3: *reinterpret_cast< QQmlListProperty<PropertyItemModelRoleMapping>*>(_v) = _t->mappings(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PropertyItemModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRootPath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setRoot(*reinterpret_cast< FGQmlPropertyNode**>(_v)); break;
        case 2: _t->setChildNameFilter(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PropertyItemModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_PropertyItemModel.data,
    qt_meta_data_PropertyItemModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PropertyItemModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PropertyItemModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PropertyItemModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SGPropertyChangeListener"))
        return static_cast< SGPropertyChangeListener*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int PropertyItemModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void PropertyItemModel::rootChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PropertyItemModel::childNameFilterChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PropertyItemModel::mappingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
