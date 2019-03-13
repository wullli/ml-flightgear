/****************************************************************************
** Meta object code from reading C++ file 'LauncherController.hxx'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LauncherController.hxx"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LauncherController.hxx' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LauncherController_t {
    QByteArrayData data[85];
    char stringdata0[1297];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LauncherController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LauncherController_t qt_meta_stringdata_LauncherController = {
    {
QT_MOC_LITERAL(0, 0, 18), // "LauncherController"
QT_MOC_LITERAL(1, 19, 23), // "selectedAircraftChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 16), // "selectedAircraft"
QT_MOC_LITERAL(4, 61, 28), // "selectedAircraftStateChanged"
QT_MOC_LITERAL(5, 90, 13), // "searchChanged"
QT_MOC_LITERAL(6, 104, 14), // "summaryChanged"
QT_MOC_LITERAL(7, 119, 20), // "minWindowSizeChanged"
QT_MOC_LITERAL(8, 140, 13), // "canFlyChanged"
QT_MOC_LITERAL(9, 154, 15), // "viewCommandLine"
QT_MOC_LITERAL(10, 170, 19), // "setSelectedAircraft"
QT_MOC_LITERAL(11, 190, 21), // "setSettingsSearchTerm"
QT_MOC_LITERAL(12, 212, 18), // "settingsSearchTerm"
QT_MOC_LITERAL(13, 231, 18), // "setSettingsSummary"
QT_MOC_LITERAL(14, 250, 15), // "settingsSummary"
QT_MOC_LITERAL(15, 266, 21), // "setEnvironmentSummary"
QT_MOC_LITERAL(16, 288, 18), // "environmentSummary"
QT_MOC_LITERAL(17, 307, 3), // "fly"
QT_MOC_LITERAL(18, 311, 4), // "quit"
QT_MOC_LITERAL(19, 316, 22), // "requestRestoreDefaults"
QT_MOC_LITERAL(20, 339, 21), // "requestChangeDataPath"
QT_MOC_LITERAL(21, 361, 10), // "openConfig"
QT_MOC_LITERAL(22, 372, 12), // "saveConfigAs"
QT_MOC_LITERAL(23, 385, 28), // "onAircraftInstalledCompleted"
QT_MOC_LITERAL(24, 414, 11), // "QModelIndex"
QT_MOC_LITERAL(25, 426, 5), // "index"
QT_MOC_LITERAL(26, 432, 23), // "onAircraftInstallFailed"
QT_MOC_LITERAL(27, 456, 12), // "errorMessage"
QT_MOC_LITERAL(28, 469, 12), // "saveAircraft"
QT_MOC_LITERAL(29, 482, 15), // "restoreAircraft"
QT_MOC_LITERAL(30, 498, 19), // "validateMetarString"
QT_MOC_LITERAL(31, 518, 5), // "metar"
QT_MOC_LITERAL(32, 524, 20), // "requestInstallUpdate"
QT_MOC_LITERAL(33, 545, 11), // "aircraftUri"
QT_MOC_LITERAL(34, 557, 16), // "requestUninstall"
QT_MOC_LITERAL(35, 574, 20), // "requestInstallCancel"
QT_MOC_LITERAL(36, 595, 18), // "downloadDirChanged"
QT_MOC_LITERAL(37, 614, 4), // "path"
QT_MOC_LITERAL(38, 619, 24), // "requestUpdateAllAircraft"
QT_MOC_LITERAL(39, 644, 14), // "queryMPServers"
QT_MOC_LITERAL(40, 659, 11), // "mapToGlobal"
QT_MOC_LITERAL(41, 671, 11), // "QQuickItem*"
QT_MOC_LITERAL(42, 683, 4), // "item"
QT_MOC_LITERAL(43, 688, 3), // "pos"
QT_MOC_LITERAL(44, 692, 15), // "restoreLocation"
QT_MOC_LITERAL(45, 708, 3), // "var"
QT_MOC_LITERAL(46, 712, 13), // "matchesSearch"
QT_MOC_LITERAL(47, 726, 4), // "term"
QT_MOC_LITERAL(48, 731, 8), // "keywords"
QT_MOC_LITERAL(49, 740, 9), // "launchUrl"
QT_MOC_LITERAL(50, 750, 3), // "url"
QT_MOC_LITERAL(51, 754, 17), // "defaultSplashUrls"
QT_MOC_LITERAL(52, 772, 22), // "installedAircraftModel"
QT_MOC_LITERAL(53, 795, 19), // "AircraftProxyModel*"
QT_MOC_LITERAL(54, 815, 24), // "aircraftWithUpdatesModel"
QT_MOC_LITERAL(55, 840, 19), // "browseAircraftModel"
QT_MOC_LITERAL(56, 860, 19), // "searchAircraftModel"
QT_MOC_LITERAL(57, 880, 17), // "baseAircraftModel"
QT_MOC_LITERAL(58, 898, 18), // "AircraftItemModel*"
QT_MOC_LITERAL(59, 917, 8), // "location"
QT_MOC_LITERAL(60, 926, 19), // "LocationController*"
QT_MOC_LITERAL(61, 946, 10), // "flightPlan"
QT_MOC_LITERAL(62, 957, 21), // "FlightPlanController*"
QT_MOC_LITERAL(63, 979, 14), // "mpServersModel"
QT_MOC_LITERAL(64, 994, 15), // "MPServersModel*"
QT_MOC_LITERAL(65, 1010, 20), // "selectedAircraftInfo"
QT_MOC_LITERAL(66, 1031, 16), // "QmlAircraftInfo*"
QT_MOC_LITERAL(67, 1048, 21), // "selectedAircraftState"
QT_MOC_LITERAL(68, 1070, 14), // "isSearchActive"
QT_MOC_LITERAL(69, 1085, 15), // "combinedSummary"
QT_MOC_LITERAL(70, 1101, 13), // "versionString"
QT_MOC_LITERAL(71, 1115, 15), // "aircraftHistory"
QT_MOC_LITERAL(72, 1131, 20), // "RecentAircraftModel*"
QT_MOC_LITERAL(73, 1152, 15), // "locationHistory"
QT_MOC_LITERAL(74, 1168, 21), // "RecentLocationsModel*"
QT_MOC_LITERAL(75, 1190, 6), // "canFly"
QT_MOC_LITERAL(76, 1197, 12), // "aircraftType"
QT_MOC_LITERAL(77, 1210, 12), // "AircraftType"
QT_MOC_LITERAL(78, 1223, 17), // "minimumWindowSize"
QT_MOC_LITERAL(79, 1241, 10), // "flyIconUrl"
QT_MOC_LITERAL(80, 1252, 7), // "Unknown"
QT_MOC_LITERAL(81, 1260, 8), // "Airplane"
QT_MOC_LITERAL(82, 1269, 8), // "Seaplane"
QT_MOC_LITERAL(83, 1278, 10), // "Helicopter"
QT_MOC_LITERAL(84, 1289, 7) // "Airship"

    },
    "LauncherController\0selectedAircraftChanged\0"
    "\0selectedAircraft\0selectedAircraftStateChanged\0"
    "searchChanged\0summaryChanged\0"
    "minWindowSizeChanged\0canFlyChanged\0"
    "viewCommandLine\0setSelectedAircraft\0"
    "setSettingsSearchTerm\0settingsSearchTerm\0"
    "setSettingsSummary\0settingsSummary\0"
    "setEnvironmentSummary\0environmentSummary\0"
    "fly\0quit\0requestRestoreDefaults\0"
    "requestChangeDataPath\0openConfig\0"
    "saveConfigAs\0onAircraftInstalledCompleted\0"
    "QModelIndex\0index\0onAircraftInstallFailed\0"
    "errorMessage\0saveAircraft\0restoreAircraft\0"
    "validateMetarString\0metar\0"
    "requestInstallUpdate\0aircraftUri\0"
    "requestUninstall\0requestInstallCancel\0"
    "downloadDirChanged\0path\0"
    "requestUpdateAllAircraft\0queryMPServers\0"
    "mapToGlobal\0QQuickItem*\0item\0pos\0"
    "restoreLocation\0var\0matchesSearch\0"
    "term\0keywords\0launchUrl\0url\0"
    "defaultSplashUrls\0installedAircraftModel\0"
    "AircraftProxyModel*\0aircraftWithUpdatesModel\0"
    "browseAircraftModel\0searchAircraftModel\0"
    "baseAircraftModel\0AircraftItemModel*\0"
    "location\0LocationController*\0flightPlan\0"
    "FlightPlanController*\0mpServersModel\0"
    "MPServersModel*\0selectedAircraftInfo\0"
    "QmlAircraftInfo*\0selectedAircraftState\0"
    "isSearchActive\0combinedSummary\0"
    "versionString\0aircraftHistory\0"
    "RecentAircraftModel*\0locationHistory\0"
    "RecentLocationsModel*\0canFly\0aircraftType\0"
    "AircraftType\0minimumWindowSize\0"
    "flyIconUrl\0Unknown\0Airplane\0Seaplane\0"
    "Helicopter\0Airship"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LauncherController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      33,   14, // methods
      23,  250, // properties
       1,  342, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  179,    2, 0x06 /* Public */,
       4,    0,  182,    2, 0x06 /* Public */,
       5,    0,  183,    2, 0x06 /* Public */,
       6,    0,  184,    2, 0x06 /* Public */,
       7,    0,  185,    2, 0x06 /* Public */,
       8,    0,  186,    2, 0x06 /* Public */,
       9,    0,  187,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,  188,    2, 0x0a /* Public */,
      11,    1,  191,    2, 0x0a /* Public */,
      13,    1,  194,    2, 0x0a /* Public */,
      15,    1,  197,    2, 0x0a /* Public */,
      17,    0,  200,    2, 0x0a /* Public */,
      18,    0,  201,    2, 0x0a /* Public */,
      19,    0,  202,    2, 0x0a /* Public */,
      20,    0,  203,    2, 0x0a /* Public */,
      21,    0,  204,    2, 0x0a /* Public */,
      22,    0,  205,    2, 0x0a /* Public */,
      23,    1,  206,    2, 0x08 /* Private */,
      26,    2,  209,    2, 0x08 /* Private */,
      28,    0,  214,    2, 0x08 /* Private */,
      29,    0,  215,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      30,    1,  216,    2, 0x02 /* Public */,
      32,    1,  219,    2, 0x02 /* Public */,
      34,    1,  222,    2, 0x02 /* Public */,
      35,    1,  225,    2, 0x02 /* Public */,
      36,    1,  228,    2, 0x02 /* Public */,
      38,    0,  231,    2, 0x02 /* Public */,
      39,    0,  232,    2, 0x02 /* Public */,
      40,    2,  233,    2, 0x02 /* Public */,
      44,    1,  238,    2, 0x02 /* Public */,
      46,    2,  241,    2, 0x02 /* Public */,
      49,    1,  246,    2, 0x02 /* Public */,
      51,    0,  249,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QStringList,   14,
    QMetaType::Void, QMetaType::QStringList,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24, QMetaType::QString,   25,   27,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QUrl,   33,
    QMetaType::Void, QMetaType::QUrl,   33,
    QMetaType::Void, QMetaType::QUrl,   33,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QPointF, 0x80000000 | 41, QMetaType::QPointF,   42,   43,
    QMetaType::Void, QMetaType::QVariant,   45,
    QMetaType::Bool, QMetaType::QString, QMetaType::QStringList,   47,   48,
    QMetaType::Void, QMetaType::QUrl,   50,
    QMetaType::QVariantList,

 // properties: name, type, flags
      52, 0x80000000 | 53, 0x00095409,
      54, 0x80000000 | 53, 0x00095409,
      55, 0x80000000 | 53, 0x00095409,
      56, 0x80000000 | 53, 0x00095409,
      57, 0x80000000 | 58, 0x00095409,
      59, 0x80000000 | 60, 0x00095409,
      61, 0x80000000 | 62, 0x00095409,
      63, 0x80000000 | 64, 0x00095409,
       3, QMetaType::QUrl, 0x00495103,
      65, 0x80000000 | 66, 0x00495009,
      67, QMetaType::QString, 0x00495003,
      68, QMetaType::Bool, 0x00495001,
      12, QMetaType::QString, 0x00495103,
      14, QMetaType::QStringList, 0x00495103,
      16, QMetaType::QStringList, 0x00495103,
      69, QMetaType::QStringList, 0x00495001,
      70, QMetaType::QString, 0x00095401,
      71, 0x80000000 | 72, 0x00095409,
      73, 0x80000000 | 74, 0x00095409,
      75, QMetaType::Bool, 0x00495001,
      76, 0x80000000 | 77, 0x00495009,
      78, QMetaType::QSize, 0x00495003,
      79, QMetaType::QUrl, 0x00495001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       0,
       1,
       2,
       2,
       3,
       3,
       3,
       0,
       0,
       0,
       5,
       0,
       4,
       0,

 // enums: name, alias, flags, count, data
      77,   77, 0x0,    5,  347,

 // enum data: key, value
      80, uint(LauncherController::Unknown),
      81, uint(LauncherController::Airplane),
      82, uint(LauncherController::Seaplane),
      83, uint(LauncherController::Helicopter),
      84, uint(LauncherController::Airship),

       0        // eod
};

void LauncherController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LauncherController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectedAircraftChanged((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 1: _t->selectedAircraftStateChanged(); break;
        case 2: _t->searchChanged(); break;
        case 3: _t->summaryChanged(); break;
        case 4: _t->minWindowSizeChanged(); break;
        case 5: _t->canFlyChanged(); break;
        case 6: _t->viewCommandLine(); break;
        case 7: _t->setSelectedAircraft((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 8: _t->setSettingsSearchTerm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->setSettingsSummary((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 10: _t->setEnvironmentSummary((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 11: _t->fly(); break;
        case 12: _t->quit(); break;
        case 13: _t->requestRestoreDefaults(); break;
        case 14: _t->requestChangeDataPath(); break;
        case 15: _t->openConfig(); break;
        case 16: _t->saveConfigAs(); break;
        case 17: _t->onAircraftInstalledCompleted((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        case 18: _t->onAircraftInstallFailed((*reinterpret_cast< QModelIndex(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 19: _t->saveAircraft(); break;
        case 20: _t->restoreAircraft(); break;
        case 21: { bool _r = _t->validateMetarString((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 22: _t->requestInstallUpdate((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 23: _t->requestUninstall((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 24: _t->requestInstallCancel((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 25: _t->downloadDirChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->requestUpdateAllAircraft(); break;
        case 27: _t->queryMPServers(); break;
        case 28: { QPointF _r = _t->mapToGlobal((*reinterpret_cast< QQuickItem*(*)>(_a[1])),(*reinterpret_cast< const QPointF(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QPointF*>(_a[0]) = std::move(_r); }  break;
        case 29: _t->restoreLocation((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        case 30: { bool _r = _t->matchesSearch((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 31: _t->launchUrl((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        case 32: { QVariantList _r = _t->defaultSplashUrls();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LauncherController::*)(QUrl );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::selectedAircraftChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LauncherController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::selectedAircraftStateChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LauncherController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::searchChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LauncherController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::summaryChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (LauncherController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::minWindowSizeChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (LauncherController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::canFlyChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (LauncherController::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LauncherController::viewCommandLine)) {
                *result = 6;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LauncherController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AircraftProxyModel**>(_v) = _t->m_installedAircraftModel; break;
        case 1: *reinterpret_cast< AircraftProxyModel**>(_v) = _t->m_aircraftWithUpdatesModel; break;
        case 2: *reinterpret_cast< AircraftProxyModel**>(_v) = _t->m_browseAircraftModel; break;
        case 3: *reinterpret_cast< AircraftProxyModel**>(_v) = _t->m_aircraftSearchModel; break;
        case 4: *reinterpret_cast< AircraftItemModel**>(_v) = _t->m_aircraftModel; break;
        case 5: *reinterpret_cast< LocationController**>(_v) = _t->m_location; break;
        case 6: *reinterpret_cast< FlightPlanController**>(_v) = _t->m_flightPlan; break;
        case 7: *reinterpret_cast< MPServersModel**>(_v) = _t->m_serversModel; break;
        case 8: *reinterpret_cast< QUrl*>(_v) = _t->selectedAircraft(); break;
        case 9: *reinterpret_cast< QmlAircraftInfo**>(_v) = _t->selectedAircraftInfo(); break;
        case 10: *reinterpret_cast< QString*>(_v) = _t->m_aircraftState; break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isSearchActive(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->settingsSearchTerm(); break;
        case 13: *reinterpret_cast< QStringList*>(_v) = _t->settingsSummary(); break;
        case 14: *reinterpret_cast< QStringList*>(_v) = _t->environmentSummary(); break;
        case 15: *reinterpret_cast< QStringList*>(_v) = _t->combinedSummary(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->versionString(); break;
        case 17: *reinterpret_cast< RecentAircraftModel**>(_v) = _t->aircraftHistory(); break;
        case 18: *reinterpret_cast< RecentLocationsModel**>(_v) = _t->locationHistory(); break;
        case 19: *reinterpret_cast< bool*>(_v) = _t->canFly(); break;
        case 20: *reinterpret_cast< AircraftType*>(_v) = _t->aircraftType(); break;
        case 21: *reinterpret_cast< QSize*>(_v) = _t->minWindowSize(); break;
        case 22: *reinterpret_cast< QUrl*>(_v) = _t->flyIconUrl(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LauncherController *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 8: _t->setSelectedAircraft(*reinterpret_cast< QUrl*>(_v)); break;
        case 10:
            if (_t->m_aircraftState != *reinterpret_cast< QString*>(_v)) {
                _t->m_aircraftState = *reinterpret_cast< QString*>(_v);
                Q_EMIT _t->selectedAircraftStateChanged();
            }
            break;
        case 12: _t->setSettingsSearchTerm(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setSettingsSummary(*reinterpret_cast< QStringList*>(_v)); break;
        case 14: _t->setEnvironmentSummary(*reinterpret_cast< QStringList*>(_v)); break;
        case 21: _t->setMinWindowSize(*reinterpret_cast< QSize*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject LauncherController::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_LauncherController.data,
    qt_meta_data_LauncherController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LauncherController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LauncherController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LauncherController.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LauncherController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 33)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 33;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 33)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 33;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 23;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 23;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LauncherController::selectedAircraftChanged(QUrl _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LauncherController::selectedAircraftStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LauncherController::searchChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LauncherController::summaryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void LauncherController::minWindowSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void LauncherController::canFlyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void LauncherController::viewCommandLine()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
