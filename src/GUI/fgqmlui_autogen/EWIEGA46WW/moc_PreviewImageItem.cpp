/****************************************************************************
** Meta object code from reading C++ file 'PreviewImageItem.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../PreviewImageItem.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PreviewImageItem.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PreviewImageItem_t {
    QByteArrayData data[16];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreviewImageItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreviewImageItem_t qt_meta_stringdata_PreviewImageItem = {
    {
QT_MOC_LITERAL(0, 0, 16), // "PreviewImageItem"
QT_MOC_LITERAL(1, 17, 15), // "imageUrlChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "sourceSizeChanged"
QT_MOC_LITERAL(4, 52, 16), // "isLoadingChanged"
QT_MOC_LITERAL(5, 69, 11), // "setImageUrl"
QT_MOC_LITERAL(6, 81, 3), // "url"
QT_MOC_LITERAL(7, 85, 15), // "onDownloadError"
QT_MOC_LITERAL(8, 101, 27), // "QNetworkReply::NetworkError"
QT_MOC_LITERAL(9, 129, 9), // "errorCode"
QT_MOC_LITERAL(10, 139, 10), // "onFinished"
QT_MOC_LITERAL(11, 150, 5), // "clear"
QT_MOC_LITERAL(12, 156, 8), // "imageUrl"
QT_MOC_LITERAL(13, 165, 10), // "sourceSize"
QT_MOC_LITERAL(14, 176, 9), // "isLoading"
QT_MOC_LITERAL(15, 186, 11) // "aspectRatio"

    },
    "PreviewImageItem\0imageUrlChanged\0\0"
    "sourceSizeChanged\0isLoadingChanged\0"
    "setImageUrl\0url\0onDownloadError\0"
    "QNetworkReply::NetworkError\0errorCode\0"
    "onFinished\0clear\0imageUrl\0sourceSize\0"
    "isLoading\0aspectRatio"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreviewImageItem[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       4,   60, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,
       3,    0,   50,    2, 0x06 /* Public */,
       4,    0,   51,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   52,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x08 /* Private */,
      10,    0,   58,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      11,    0,   59,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,

 // properties: name, type, flags
      12, QMetaType::QUrl, 0x00495103,
      13, QMetaType::QSize, 0x00495001,
      14, QMetaType::Bool, 0x00495001,
      15, QMetaType::Float, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       1,

       0        // eod
};

void PreviewImageItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreviewImageItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->imageUrlChanged(); break;
        case 1: _t->sourceSizeChanged(); break;
        case 2: _t->isLoadingChanged(); break;
        case 3: _t->setImageUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 4: _t->onDownloadError((*reinterpret_cast< QNetworkReply::NetworkError(*)>(_a[1]))); break;
        case 5: _t->onFinished(); break;
        case 6: _t->clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreviewImageItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewImageItem::imageUrlChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreviewImageItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewImageItem::sourceSizeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PreviewImageItem::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreviewImageItem::isLoadingChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PreviewImageItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->imageUrl(); break;
        case 1: *reinterpret_cast< QSize*>(_v) = _t->sourceSize(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isLoading(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->aspectRatio(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PreviewImageItem *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setImageUrl(*reinterpret_cast< QUrl*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PreviewImageItem::staticMetaObject = { {
    &QQuickItem::staticMetaObject,
    qt_meta_stringdata_PreviewImageItem.data,
    qt_meta_data_PreviewImageItem,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreviewImageItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreviewImageItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreviewImageItem.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int PreviewImageItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
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
void PreviewImageItem::imageUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PreviewImageItem::sourceSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PreviewImageItem::isLoadingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
