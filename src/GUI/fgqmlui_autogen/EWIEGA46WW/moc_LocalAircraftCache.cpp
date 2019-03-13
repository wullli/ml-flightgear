/****************************************************************************
** Meta object code from reading C++ file 'LocalAircraftCache.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LocalAircraftCache.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LocalAircraftCache.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LocalAircraftCache_t {
    QByteArrayData data[21];
    char stringdata0[322];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LocalAircraftCache_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LocalAircraftCache_t qt_meta_stringdata_LocalAircraftCache = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LocalAircraftCache"
QT_MOC_LITERAL(1, 19, 11), // "scanStarted"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 13), // "scanCompleted"
QT_MOC_LITERAL(4, 46, 7), // "cleared"
QT_MOC_LITERAL(5, 54, 10), // "addedItems"
QT_MOC_LITERAL(6, 65, 5), // "count"
QT_MOC_LITERAL(7, 71, 13), // "onScanResults"
QT_MOC_LITERAL(8, 85, 14), // "onScanFinished"
QT_MOC_LITERAL(9, 100, 14), // "AircraftStatus"
QT_MOC_LITERAL(10, 115, 10), // "AircraftOk"
QT_MOC_LITERAL(11, 126, 20), // "AircraftUnmaintained"
QT_MOC_LITERAL(12, 147, 27), // "AircraftNeedsNewerSimulator"
QT_MOC_LITERAL(13, 175, 27), // "AircraftNeedsOlderSimulator"
QT_MOC_LITERAL(14, 203, 13), // "PackageStatus"
QT_MOC_LITERAL(15, 217, 19), // "PackageNotInstalled"
QT_MOC_LITERAL(16, 237, 16), // "PackageInstalled"
QT_MOC_LITERAL(17, 254, 22), // "PackageUpdateAvailable"
QT_MOC_LITERAL(18, 277, 13), // "PackageQueued"
QT_MOC_LITERAL(19, 291, 18), // "PackageDownloading"
QT_MOC_LITERAL(20, 310, 11) // "NotPackaged"

    },
    "LocalAircraftCache\0scanStarted\0\0"
    "scanCompleted\0cleared\0addedItems\0count\0"
    "onScanResults\0onScanFinished\0"
    "AircraftStatus\0AircraftOk\0"
    "AircraftUnmaintained\0AircraftNeedsNewerSimulator\0"
    "AircraftNeedsOlderSimulator\0PackageStatus\0"
    "PackageNotInstalled\0PackageInstalled\0"
    "PackageUpdateAvailable\0PackageQueued\0"
    "PackageDownloading\0NotPackaged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LocalAircraftCache[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       2,   52, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
       9,    9, 0x0,    4,   62,
      14,   14, 0x0,    6,   70,

 // enum data: key, value
      10, uint(LocalAircraftCache::AircraftOk),
      11, uint(LocalAircraftCache::AircraftUnmaintained),
      12, uint(LocalAircraftCache::AircraftNeedsNewerSimulator),
      13, uint(LocalAircraftCache::AircraftNeedsOlderSimulator),
      15, uint(LocalAircraftCache::PackageNotInstalled),
      16, uint(LocalAircraftCache::PackageInstalled),
      17, uint(LocalAircraftCache::PackageUpdateAvailable),
      18, uint(LocalAircraftCache::PackageQueued),
      19, uint(LocalAircraftCache::PackageDownloading),
      20, uint(LocalAircraftCache::NotPackaged),

       0        // eod
};

void LocalAircraftCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LocalAircraftCache *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->scanStarted(); break;
        case 1: _t->scanCompleted(); break;
        case 2: _t->cleared(); break;
        case 3: _t->addedItems((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onScanResults(); break;
        case 5: _t->onScanFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LocalAircraftCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalAircraftCache::scanStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LocalAircraftCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalAircraftCache::scanCompleted)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LocalAircraftCache::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalAircraftCache::cleared)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LocalAircraftCache::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LocalAircraftCache::addedItems)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LocalAircraftCache::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LocalAircraftCache.data,
    qt_meta_data_LocalAircraftCache,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LocalAircraftCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LocalAircraftCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LocalAircraftCache.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LocalAircraftCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void LocalAircraftCache::scanStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LocalAircraftCache::scanCompleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LocalAircraftCache::cleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LocalAircraftCache::addedItems(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
