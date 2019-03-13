/****************************************************************************
** Meta object code from reading C++ file 'CatalogListModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/CatalogListModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CatalogListModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CatalogListModel_t {
    QByteArrayData data[26];
    char stringdata0[380];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CatalogListModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CatalogListModel_t qt_meta_stringdata_CatalogListModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "CatalogListModel"
QT_MOC_LITERAL(1, 17, 22), // "isAddingCatalogChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 28), // "statusOfAddingCatalogChanged"
QT_MOC_LITERAL(4, 70, 15), // "catalogsChanged"
QT_MOC_LITERAL(5, 86, 9), // "resetData"
QT_MOC_LITERAL(6, 96, 13), // "removeCatalog"
QT_MOC_LITERAL(7, 110, 5), // "index"
QT_MOC_LITERAL(8, 116, 14), // "refreshCatalog"
QT_MOC_LITERAL(9, 131, 21), // "installDefaultCatalog"
QT_MOC_LITERAL(10, 153, 15), // "addCatalogByUrl"
QT_MOC_LITERAL(11, 169, 3), // "url"
QT_MOC_LITERAL(12, 173, 18), // "finalizeAddCatalog"
QT_MOC_LITERAL(13, 192, 17), // "abandonAddCatalog"
QT_MOC_LITERAL(14, 210, 15), // "isAddingCatalog"
QT_MOC_LITERAL(15, 226, 21), // "statusOfAddingCatalog"
QT_MOC_LITERAL(16, 248, 13), // "CatalogStatus"
QT_MOC_LITERAL(17, 262, 2), // "Ok"
QT_MOC_LITERAL(18, 265, 10), // "Refreshing"
QT_MOC_LITERAL(19, 276, 12), // "NetworkError"
QT_MOC_LITERAL(20, 289, 16), // "NotFoundOnServer"
QT_MOC_LITERAL(21, 306, 18), // "IncomaptbleVersion"
QT_MOC_LITERAL(22, 325, 13), // "HTTPForbidden"
QT_MOC_LITERAL(23, 339, 11), // "InvalidData"
QT_MOC_LITERAL(24, 351, 12), // "UnknownError"
QT_MOC_LITERAL(25, 364, 15) // "NoAddInProgress"

    },
    "CatalogListModel\0isAddingCatalogChanged\0"
    "\0statusOfAddingCatalogChanged\0"
    "catalogsChanged\0resetData\0removeCatalog\0"
    "index\0refreshCatalog\0installDefaultCatalog\0"
    "addCatalogByUrl\0url\0finalizeAddCatalog\0"
    "abandonAddCatalog\0isAddingCatalog\0"
    "statusOfAddingCatalog\0CatalogStatus\0"
    "Ok\0Refreshing\0NetworkError\0NotFoundOnServer\0"
    "IncomaptbleVersion\0HTTPForbidden\0"
    "InvalidData\0UnknownError\0NoAddInProgress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CatalogListModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       2,   80, // properties
       1,   88, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   67,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       6,    1,   68,    2, 0x02 /* Public */,
       8,    1,   71,    2, 0x02 /* Public */,
       9,    0,   74,    2, 0x02 /* Public */,
      10,    1,   75,    2, 0x02 /* Public */,
      12,    0,   78,    2, 0x02 /* Public */,
      13,    0,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl,   11,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      14, QMetaType::Bool, 0x00495001,
      15, 0x80000000 | 16, 0x00495009,

 // properties: notify_signal_id
       0,
       1,

 // enums: name, alias, flags, count, data
      16,   16, 0x0,    9,   93,

 // enum data: key, value
      17, uint(CatalogListModel::Ok),
      18, uint(CatalogListModel::Refreshing),
      19, uint(CatalogListModel::NetworkError),
      20, uint(CatalogListModel::NotFoundOnServer),
      21, uint(CatalogListModel::IncomaptbleVersion),
      22, uint(CatalogListModel::HTTPForbidden),
      23, uint(CatalogListModel::InvalidData),
      24, uint(CatalogListModel::UnknownError),
      25, uint(CatalogListModel::NoAddInProgress),

       0        // eod
};

void CatalogListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CatalogListModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->isAddingCatalogChanged(); break;
        case 1: _t->statusOfAddingCatalogChanged(); break;
        case 2: _t->catalogsChanged(); break;
        case 3: _t->resetData(); break;
        case 4: _t->removeCatalog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->refreshCatalog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->installDefaultCatalog(); break;
        case 7: _t->addCatalogByUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 8: _t->finalizeAddCatalog(); break;
        case 9: _t->abandonAddCatalog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CatalogListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CatalogListModel::isAddingCatalogChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CatalogListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CatalogListModel::statusOfAddingCatalogChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CatalogListModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CatalogListModel::catalogsChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CatalogListModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isAddingCatalog(); break;
        case 1: *reinterpret_cast< CatalogStatus*>(_v) = _t->statusOfAddingCatalog(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CatalogListModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_CatalogListModel.data,
    qt_meta_data_CatalogListModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CatalogListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CatalogListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CatalogListModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int CatalogListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void CatalogListModel::isAddingCatalogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CatalogListModel::statusOfAddingCatalogChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void CatalogListModel::catalogsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
