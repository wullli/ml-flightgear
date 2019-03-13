/****************************************************************************
** Meta object code from reading C++ file 'AircraftSearchFilterModel.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/GUI/AircraftSearchFilterModel.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AircraftSearchFilterModel.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AircraftProxyModel_t {
    QByteArrayData data[19];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AircraftProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AircraftProxyModel_t qt_meta_stringdata_AircraftProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 18), // "AircraftProxyModel"
QT_MOC_LITERAL(1, 19, 14), // "ratingsChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 27), // "ratingsFilterEnabledChanged"
QT_MOC_LITERAL(4, 63, 18), // "summaryTextChanged"
QT_MOC_LITERAL(5, 82, 12), // "countChanged"
QT_MOC_LITERAL(6, 95, 25), // "setInstalledFilterEnabled"
QT_MOC_LITERAL(7, 121, 1), // "e"
QT_MOC_LITERAL(8, 123, 26), // "setHaveUpdateFilterEnabled"
QT_MOC_LITERAL(9, 150, 23), // "setAircraftFilterString"
QT_MOC_LITERAL(10, 174, 1), // "s"
QT_MOC_LITERAL(11, 176, 11), // "indexForURI"
QT_MOC_LITERAL(12, 188, 3), // "uri"
QT_MOC_LITERAL(13, 192, 27), // "selectVariantForAircraftURI"
QT_MOC_LITERAL(14, 220, 7), // "ratings"
QT_MOC_LITERAL(15, 228, 10), // "QList<int>"
QT_MOC_LITERAL(16, 239, 20), // "ratingsFilterEnabled"
QT_MOC_LITERAL(17, 260, 11), // "summaryText"
QT_MOC_LITERAL(18, 272, 5) // "count"

    },
    "AircraftProxyModel\0ratingsChanged\0\0"
    "ratingsFilterEnabledChanged\0"
    "summaryTextChanged\0countChanged\0"
    "setInstalledFilterEnabled\0e\0"
    "setHaveUpdateFilterEnabled\0"
    "setAircraftFilterString\0s\0indexForURI\0"
    "uri\0selectVariantForAircraftURI\0ratings\0"
    "QList<int>\0ratingsFilterEnabled\0"
    "summaryText\0count"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AircraftProxyModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       4,   78, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    0,   60,    2, 0x06 /* Public */,
       4,    0,   61,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       9,    1,   69,    2, 0x02 /* Public */,
      11,    1,   72,    2, 0x02 /* Public */,
      13,    1,   75,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Int, QMetaType::QUrl,   12,
    QMetaType::Void, QMetaType::QUrl,   12,

 // properties: name, type, flags
      14, 0x80000000 | 15, 0x0049510b,
      16, QMetaType::Bool, 0x00495003,
      17, QMetaType::QString, 0x00495001,
      18, QMetaType::Int, 0x00495001,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void AircraftProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AircraftProxyModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ratingsChanged(); break;
        case 1: _t->ratingsFilterEnabledChanged(); break;
        case 2: _t->summaryTextChanged(); break;
        case 3: _t->countChanged(); break;
        case 4: _t->setInstalledFilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setHaveUpdateFilterEnabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->setAircraftFilterString((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: { int _r = _t->indexForURI((*reinterpret_cast< QUrl(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->selectVariantForAircraftURI((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AircraftProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AircraftProxyModel::ratingsChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AircraftProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AircraftProxyModel::ratingsFilterEnabledChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AircraftProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AircraftProxyModel::summaryTextChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AircraftProxyModel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AircraftProxyModel::countChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AircraftProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<int>*>(_v) = _t->ratings(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->ratingsFilterEnabled(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->summaryText(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->count(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AircraftProxyModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setRatings(*reinterpret_cast< QList<int>*>(_v)); break;
        case 1: _t->setRatingFilterEnabled(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AircraftProxyModel::staticMetaObject = { {
    &QSortFilterProxyModel::staticMetaObject,
    qt_meta_stringdata_AircraftProxyModel.data,
    qt_meta_data_AircraftProxyModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AircraftProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AircraftProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AircraftProxyModel.stringdata0))
        return static_cast<void*>(this);
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int AircraftProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
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
void AircraftProxyModel::ratingsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AircraftProxyModel::ratingsFilterEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AircraftProxyModel::summaryTextChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AircraftProxyModel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
