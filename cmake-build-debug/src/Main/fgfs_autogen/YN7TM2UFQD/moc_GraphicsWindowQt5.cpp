/****************************************************************************
** Meta object code from reading C++ file 'GraphicsWindowQt5.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/Viewer/GraphicsWindowQt5.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GraphicsWindowQt5.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_flightgear__GLWindow_t {
    QByteArrayData data[6];
    char stringdata0[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_flightgear__GLWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_flightgear__GLWindow_t qt_meta_stringdata_flightgear__GLWindow = {
    {
QT_MOC_LITERAL(0, 0, 20), // "flightgear::GLWindow"
QT_MOC_LITERAL(1, 21, 15), // "beforeRendering"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 14), // "afterRendering"
QT_MOC_LITERAL(4, 53, 15), // "onScreenChanged"
QT_MOC_LITERAL(5, 69, 18) // "processUpdateEvent"

    },
    "flightgear::GLWindow\0beforeRendering\0"
    "\0afterRendering\0onScreenChanged\0"
    "processUpdateEvent"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_flightgear__GLWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void flightgear::GLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GLWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->beforeRendering(); break;
        case 1: _t->afterRendering(); break;
        case 2: _t->onScreenChanged(); break;
        case 3: _t->processUpdateEvent(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GLWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWindow::beforeRendering)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GLWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&GLWindow::afterRendering)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject flightgear::GLWindow::staticMetaObject = { {
    &QWindow::staticMetaObject,
    qt_meta_stringdata_flightgear__GLWindow.data,
    qt_meta_data_flightgear__GLWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *flightgear::GLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *flightgear::GLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_flightgear__GLWindow.stringdata0))
        return static_cast<void*>(this);
    return QWindow::qt_metacast(_clname);
}

int flightgear::GLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void flightgear::GLWindow::beforeRendering()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void flightgear::GLWindow::afterRendering()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
