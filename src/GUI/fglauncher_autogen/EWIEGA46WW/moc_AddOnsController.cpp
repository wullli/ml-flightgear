/****************************************************************************
** Meta object code from reading C++ file 'AddOnsController.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../AddOnsController.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AddOnsController.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddOnsController_t {
    QByteArrayData data[21];
    char stringdata0[351];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddOnsController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddOnsController_t qt_meta_stringdata_AddOnsController = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AddOnsController"
QT_MOC_LITERAL(1, 17, 20), // "aircraftPathsChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "aircraftPaths"
QT_MOC_LITERAL(4, 53, 19), // "sceneryPathsChanged"
QT_MOC_LITERAL(5, 73, 12), // "sceneryPaths"
QT_MOC_LITERAL(6, 86, 33), // "isOfficialHangarRegisteredCha..."
QT_MOC_LITERAL(7, 120, 27), // "showNoOfficialHangarChanged"
QT_MOC_LITERAL(8, 148, 16), // "setAircraftPaths"
QT_MOC_LITERAL(9, 165, 15), // "setSceneryPaths"
QT_MOC_LITERAL(10, 181, 15), // "addAircraftPath"
QT_MOC_LITERAL(11, 197, 14), // "addSceneryPath"
QT_MOC_LITERAL(12, 212, 20), // "installCustomScenery"
QT_MOC_LITERAL(13, 233, 13), // "openDirectory"
QT_MOC_LITERAL(14, 247, 4), // "path"
QT_MOC_LITERAL(15, 252, 21), // "officialCatalogAction"
QT_MOC_LITERAL(16, 274, 1), // "s"
QT_MOC_LITERAL(17, 276, 8), // "catalogs"
QT_MOC_LITERAL(18, 285, 17), // "CatalogListModel*"
QT_MOC_LITERAL(19, 303, 26), // "isOfficialHangarRegistered"
QT_MOC_LITERAL(20, 330, 20) // "showNoOfficialHangar"

    },
    "AddOnsController\0aircraftPathsChanged\0"
    "\0aircraftPaths\0sceneryPathsChanged\0"
    "sceneryPaths\0isOfficialHangarRegisteredChanged\0"
    "showNoOfficialHangarChanged\0"
    "setAircraftPaths\0setSceneryPaths\0"
    "addAircraftPath\0addSceneryPath\0"
    "installCustomScenery\0openDirectory\0"
    "path\0officialCatalogAction\0s\0catalogs\0"
    "CatalogListModel*\0isOfficialHangarRegistered\0"
    "showNoOfficialHangar"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddOnsController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       4,    1,   72,    2, 0x06 /* Public */,
       6,    0,   75,    2, 0x06 /* Public */,
       7,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   77,    2, 0x0a /* Public */,
       9,    1,   80,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
      10,    0,   83,    2, 0x02 /* Public */,
      11,    0,   84,    2, 0x02 /* Public */,
      12,    0,   85,    2, 0x02 /* Public */,
      13,    1,   86,    2, 0x02 /* Public */,
      15,    1,   89,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,    3,
    QMetaType::Void, QMetaType::QStringList,    5,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,

 // properties: name, type, flags
       3, QMetaType::QStringList, 0x00495103,
       5, QMetaType::QStringList, 0x00495103,
      17, 0x80000000 | 18, 0x00095409,
      19, QMetaType::Bool, 0x00495001,
      20, QMetaType::Bool, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       0,
       2,
       3,

       0        // eod
};

void AddOnsController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddOnsController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->aircraftPathsChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 1: _t->sceneryPathsChanged((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->isOfficialHangarRegisteredChanged(); break;
        case 3: _t->showNoOfficialHangarChanged(); break;
        case 4: _t->setAircraftPaths((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->setSceneryPaths((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: { QString _r = _t->addAircraftPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 7: { QString _r = _t->addSceneryPath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 8: { QString _r = _t->installCustomScenery();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->openDirectory((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: _t->officialCatalogAction((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddOnsController::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddOnsController::aircraftPathsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddOnsController::*)(QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddOnsController::sceneryPathsChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AddOnsController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddOnsController::isOfficialHangarRegisteredChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AddOnsController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddOnsController::showNoOfficialHangarChanged)) {
                *result = 3;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AddOnsController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->aircraftPaths(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->sceneryPaths(); break;
        case 2: *reinterpret_cast< CatalogListModel**>(_v) = _t->catalogs(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isOfficialHangarRegistered(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->showNoOfficialHangar(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AddOnsController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAircraftPaths(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setSceneryPaths(*reinterpret_cast< QStringList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AddOnsController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_AddOnsController.data,
    qt_meta_data_AddOnsController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddOnsController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddOnsController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddOnsController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AddOnsController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
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
void AddOnsController::aircraftPathsChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddOnsController::sceneryPathsChanged(QStringList _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AddOnsController::isOfficialHangarRegisteredChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AddOnsController::showNoOfficialHangarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
