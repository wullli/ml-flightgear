/****************************************************************************
** Meta object code from reading C++ file 'ThumbnailImageItem.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/ThumbnailImageItem.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ThumbnailImageItem.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ThumbnailImageItem_t {
    QByteArrayData data[12];
    char stringdata0[149];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ThumbnailImageItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ThumbnailImageItem_t qt_meta_stringdata_ThumbnailImageItem = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ThumbnailImageItem"
QT_MOC_LITERAL(1, 19, 18), // "aircraftUriChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 17), // "sourceSizeChanged"
QT_MOC_LITERAL(4, 57, 18), // "maximumSizeChanged"
QT_MOC_LITERAL(5, 76, 11), // "maximumSize"
QT_MOC_LITERAL(6, 88, 14), // "setAircraftUri"
QT_MOC_LITERAL(7, 103, 3), // "uri"
QT_MOC_LITERAL(8, 107, 14), // "setMaximumSize"
QT_MOC_LITERAL(9, 122, 11), // "aircraftUri"
QT_MOC_LITERAL(10, 134, 3), // "url"
QT_MOC_LITERAL(11, 138, 10) // "sourceSize"

    },
    "ThumbnailImageItem\0aircraftUriChanged\0"
    "\0sourceSizeChanged\0maximumSizeChanged\0"
    "maximumSize\0setAircraftUri\0uri\0"
    "setMaximumSize\0aircraftUri\0url\0"
    "sourceSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ThumbnailImageItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       4,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       8,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QSize,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QSize,    5,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QUrl, 0x00495001,
      11, QMetaType::QSize, 0x00495001,
       5, QMetaType::QSize, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       1,
       2,

       0        // eod
};

void ThumbnailImageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ThumbnailImageItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aircraftUriChanged(); break;
        case 1: _t->sourceSizeChanged(); break;
        case 2: _t->maximumSizeChanged((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        case 3: _t->setAircraftUri((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setMaximumSize((*reinterpret_cast< QSize(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ThumbnailImageItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThumbnailImageItem::aircraftUriChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ThumbnailImageItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThumbnailImageItem::sourceSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ThumbnailImageItem::*)(QSize );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ThumbnailImageItem::maximumSizeChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ThumbnailImageItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->aircraftUri(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->url(); break;
        case 2: *reinterpret_cast< QSize*>(_v) = _t->sourceSize(); break;
        case 3: *reinterpret_cast< QSize*>(_v) = _t->maximumSize(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ThumbnailImageItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAircraftUri(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMaximumSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject ThumbnailImageItem::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_ThumbnailImageItem.data,
    qt_meta_data_ThumbnailImageItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ThumbnailImageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ThumbnailImageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ThumbnailImageItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int ThumbnailImageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
void ThumbnailImageItem::aircraftUriChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ThumbnailImageItem::sourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ThumbnailImageItem::maximumSizeChanged(QSize _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
