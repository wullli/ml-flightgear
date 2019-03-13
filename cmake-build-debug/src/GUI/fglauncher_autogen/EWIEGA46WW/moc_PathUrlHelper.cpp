/****************************************************************************
** Meta object code from reading C++ file 'PathUrlHelper.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/PathUrlHelper.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PathUrlHelper.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileDialogWrapper_t {
    QByteArrayData data[26];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileDialogWrapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileDialogWrapper_t qt_meta_stringdata_FileDialogWrapper = {
    {
QT_MOC_LITERAL(0, 0, 17), // "FileDialogWrapper"
QT_MOC_LITERAL(1, 18, 8), // "accepted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "rejected"
QT_MOC_LITERAL(4, 37, 13), // "folderChanged"
QT_MOC_LITERAL(5, 51, 6), // "folder"
QT_MOC_LITERAL(6, 58, 12), // "titleChanged"
QT_MOC_LITERAL(7, 71, 5), // "title"
QT_MOC_LITERAL(8, 77, 19), // "selectFolderChanged"
QT_MOC_LITERAL(9, 97, 12), // "selectFolder"
QT_MOC_LITERAL(10, 110, 14), // "fileUrlChanged"
QT_MOC_LITERAL(11, 125, 7), // "fileUrl"
QT_MOC_LITERAL(12, 133, 13), // "filterChanged"
QT_MOC_LITERAL(13, 147, 6), // "filter"
QT_MOC_LITERAL(14, 154, 9), // "setFolder"
QT_MOC_LITERAL(15, 164, 8), // "setTitle"
QT_MOC_LITERAL(16, 173, 15), // "setSelectFolder"
QT_MOC_LITERAL(17, 189, 10), // "setFileUrl"
QT_MOC_LITERAL(18, 200, 11), // "setFilePath"
QT_MOC_LITERAL(19, 212, 8), // "filePath"
QT_MOC_LITERAL(20, 221, 9), // "setFilter"
QT_MOC_LITERAL(21, 231, 18), // "urlToLocalFilePath"
QT_MOC_LITERAL(22, 250, 3), // "url"
QT_MOC_LITERAL(23, 254, 20), // "urlFromLocalFilePath"
QT_MOC_LITERAL(24, 275, 4), // "path"
QT_MOC_LITERAL(25, 280, 4) // "open"

    },
    "FileDialogWrapper\0accepted\0\0rejected\0"
    "folderChanged\0folder\0titleChanged\0"
    "title\0selectFolderChanged\0selectFolder\0"
    "fileUrlChanged\0fileUrl\0filterChanged\0"
    "filter\0setFolder\0setTitle\0setSelectFolder\0"
    "setFileUrl\0setFilePath\0filePath\0"
    "setFilter\0urlToLocalFilePath\0url\0"
    "urlFromLocalFilePath\0path\0open"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileDialogWrapper[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       6,  136, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    1,   96,    2, 0x06 /* Public */,
       6,    1,   99,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,
      10,    1,  105,    2, 0x06 /* Public */,
      12,    1,  108,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    1,  111,    2, 0x0a /* Public */,
      15,    1,  114,    2, 0x0a /* Public */,
      16,    1,  117,    2, 0x0a /* Public */,
      17,    1,  120,    2, 0x0a /* Public */,
      18,    1,  123,    2, 0x0a /* Public */,
      20,    1,  126,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      21,    1,  129,    2, 0x02 /* Public */,
      23,    1,  132,    2, 0x02 /* Public */,
      25,    0,  135,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, QMetaType::QString,   13,

 // methods: parameters
    QMetaType::QString, QMetaType::QUrl,   22,
    QMetaType::QUrl, QMetaType::QString,   24,
    QMetaType::Void,

 // properties: name, type, flags
       5, QMetaType::QUrl, 0x00495103,
       7, QMetaType::QString, 0x00495103,
       9, QMetaType::Bool, 0x00495103,
      11, QMetaType::QUrl, 0x00495103,
      19, QMetaType::QString, 0x00495103,
      13, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       2,
       3,
       4,
       5,
       5,
       6,

       0        // eod
};

void FileDialogWrapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDialogWrapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->accepted(); break;
        case 1: _t->rejected(); break;
        case 2: _t->folderChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 3: _t->titleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->selectFolderChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->fileUrlChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 6: _t->filterChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->setFolder((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 8: _t->setTitle((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setSelectFolder((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->setFileUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 11: _t->setFilePath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 12: _t->setFilter((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: { QString _r = _t->urlToLocalFilePath((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QUrl _r = _t->urlFromLocalFilePath((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QUrl*>(_a[0]) = std::move(_r); }  break;
        case 15: _t->open(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDialogWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::accepted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDialogWrapper::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::rejected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDialogWrapper::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::folderChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDialogWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::titleChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileDialogWrapper::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::selectFolderChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FileDialogWrapper::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::fileUrlChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (FileDialogWrapper::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileDialogWrapper::filterChanged)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileDialogWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->folder(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->selectFolder(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->fileUrl(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->filePath(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->filter(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileDialogWrapper *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setFolder(*reinterpret_cast< QUrl*>(_v)); break;
        case 1: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setSelectFolder(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setFileUrl(*reinterpret_cast< QUrl*>(_v)); break;
        case 4: _t->setFilePath(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setFilter(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject FileDialogWrapper::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_FileDialogWrapper.data,
    qt_meta_data_FileDialogWrapper,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileDialogWrapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileDialogWrapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileDialogWrapper.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileDialogWrapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
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
void FileDialogWrapper::accepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void FileDialogWrapper::rejected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void FileDialogWrapper::folderChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileDialogWrapper::titleChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void FileDialogWrapper::selectFolderChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void FileDialogWrapper::fileUrlChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void FileDialogWrapper::filterChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
