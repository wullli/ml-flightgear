/****************************************************************************
** Meta object code from reading C++ file 'NavaidSearchModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../NavaidSearchModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NavaidSearchModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_NavaidSearchModel_t {
    QByteArrayData data[26];
    char stringdata0[321];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_NavaidSearchModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_NavaidSearchModel_t qt_meta_stringdata_NavaidSearchModel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "NavaidSearchModel"
QT_MOC_LITERAL(1, 18, 14), // "searchComplete"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "searchActiveChanged"
QT_MOC_LITERAL(4, 54, 25), // "haveExistingSearchChanged"
QT_MOC_LITERAL(5, 80, 19), // "airportsOnlyChanged"
QT_MOC_LITERAL(6, 100, 17), // "maxResultsChanged"
QT_MOC_LITERAL(7, 118, 19), // "onSearchResultsPoll"
QT_MOC_LITERAL(8, 138, 9), // "setSearch"
QT_MOC_LITERAL(9, 148, 1), // "t"
QT_MOC_LITERAL(10, 150, 12), // "AircraftType"
QT_MOC_LITERAL(11, 163, 8), // "aircraft"
QT_MOC_LITERAL(12, 172, 5), // "clear"
QT_MOC_LITERAL(13, 178, 11), // "guidAtIndex"
QT_MOC_LITERAL(14, 190, 5), // "index"
QT_MOC_LITERAL(15, 196, 14), // "isSearchActive"
QT_MOC_LITERAL(16, 211, 18), // "haveExistingSearch"
QT_MOC_LITERAL(17, 230, 12), // "airportsOnly"
QT_MOC_LITERAL(18, 243, 10), // "maxResults"
QT_MOC_LITERAL(19, 254, 10), // "numResults"
QT_MOC_LITERAL(20, 265, 10), // "exactMatch"
QT_MOC_LITERAL(21, 276, 7), // "Unknown"
QT_MOC_LITERAL(22, 284, 8), // "Airplane"
QT_MOC_LITERAL(23, 293, 8), // "Seaplane"
QT_MOC_LITERAL(24, 302, 10), // "Helicopter"
QT_MOC_LITERAL(25, 313, 7) // "Airship"

    },
    "NavaidSearchModel\0searchComplete\0\0"
    "searchActiveChanged\0haveExistingSearchChanged\0"
    "airportsOnlyChanged\0maxResultsChanged\0"
    "onSearchResultsPoll\0setSearch\0t\0"
    "AircraftType\0aircraft\0clear\0guidAtIndex\0"
    "index\0isSearchActive\0haveExistingSearch\0"
    "airportsOnly\0maxResults\0numResults\0"
    "exactMatch\0Unknown\0Airplane\0Seaplane\0"
    "Helicopter\0Airship"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_NavaidSearchModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       6,   82, // properties
       1,  106, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    0,   68,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   69,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
       8,    2,   70,    2, 0x02 /* Public */,
       8,    1,   75,    2, 0x22 /* Public | MethodCloned */,
      12,    0,   78,    2, 0x02 /* Public */,
      13,    1,   79,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::LongLong, QMetaType::Int,   14,

 // properties: name, type, flags
      15, QMetaType::Bool, 0x00495001,
      16, QMetaType::Bool, 0x00495001,
      17, QMetaType::Bool, 0x00495003,
      18, QMetaType::Int, 0x00495003,
      19, QMetaType::Int, 0x00495001,
      20, QMetaType::LongLong, 0x00495001,

 // properties: notify_signal_id
       1,
       2,
       3,
       4,
       1,
       1,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    5,  111,

 // enum data: key, value
      21, uint(NavaidSearchModel::Unknown),
      22, uint(NavaidSearchModel::Airplane),
      23, uint(NavaidSearchModel::Seaplane),
      24, uint(NavaidSearchModel::Helicopter),
      25, uint(NavaidSearchModel::Airship),

       0        // eod
};

void NavaidSearchModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NavaidSearchModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchComplete(); break;
        case 1: _t->searchActiveChanged(); break;
        case 2: _t->haveExistingSearchChanged(); break;
        case 3: _t->airportsOnlyChanged(); break;
        case 4: _t->maxResultsChanged(); break;
        case 5: _t->onSearchResultsPoll(); break;
        case 6: _t->setSearch((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< AircraftType(*)>(_a[2]))); break;
        case 7: _t->setSearch((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: { qlonglong _r = _t->guidAtIndex((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qlonglong*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NavaidSearchModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidSearchModel::searchComplete)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NavaidSearchModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidSearchModel::searchActiveChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (NavaidSearchModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidSearchModel::haveExistingSearchChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (NavaidSearchModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidSearchModel::airportsOnlyChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (NavaidSearchModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&NavaidSearchModel::maxResultsChanged)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<NavaidSearchModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSearchActive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->haveExistingSearch(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->m_airportsOnly; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->m_maxResults; break;
        case 4: *reinterpret_cast< int*>(_v) = _t->numResults(); break;
        case 5: *reinterpret_cast< qlonglong*>(_v) = _t->exactMatch(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<NavaidSearchModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2:
            if (_t->m_airportsOnly != *reinterpret_cast< bool*>(_v)) {
                _t->m_airportsOnly = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->airportsOnlyChanged();
            }
            break;
        case 3:
            if (_t->m_maxResults != *reinterpret_cast< int*>(_v)) {
                _t->m_maxResults = *reinterpret_cast< int*>(_v);
                Q_EMIT _t->maxResultsChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject NavaidSearchModel::staticMetaObject = { {
    &QAbstractListModel::staticMetaObject,
    qt_meta_stringdata_NavaidSearchModel.data,
    qt_meta_data_NavaidSearchModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *NavaidSearchModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NavaidSearchModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_NavaidSearchModel.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int NavaidSearchModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void NavaidSearchModel::searchComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NavaidSearchModel::searchActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void NavaidSearchModel::haveExistingSearchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void NavaidSearchModel::airportsOnlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void NavaidSearchModel::maxResultsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
