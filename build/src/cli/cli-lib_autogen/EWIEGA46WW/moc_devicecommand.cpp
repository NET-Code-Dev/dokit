/****************************************************************************
** Meta object code from reading C++ file 'devicecommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/cli/devicecommand.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'devicecommand.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSDeviceCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDeviceCommandENDCLASS = QtMocHelpers::stringData(
    "DeviceCommand",
    "start",
    "",
    "controllerError",
    "QLowEnergyController::Error",
    "error",
    "deviceDisconnected",
    "serviceError",
    "QLowEnergyService::ServiceError",
    "serviceDetailsDiscovered",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "info",
    "deviceDiscoveryFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDeviceCommandENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[14];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[28];
    char stringdata5[6];
    char stringdata6[19];
    char stringdata7[13];
    char stringdata8[32];
    char stringdata9[25];
    char stringdata10[17];
    char stringdata11[21];
    char stringdata12[5];
    char stringdata13[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDeviceCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDeviceCommandENDCLASS_t qt_meta_stringdata_CLASSDeviceCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "DeviceCommand"
        QT_MOC_LITERAL(14, 5),  // "start"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 15),  // "controllerError"
        QT_MOC_LITERAL(37, 27),  // "QLowEnergyController::Error"
        QT_MOC_LITERAL(65, 5),  // "error"
        QT_MOC_LITERAL(71, 18),  // "deviceDisconnected"
        QT_MOC_LITERAL(90, 12),  // "serviceError"
        QT_MOC_LITERAL(103, 31),  // "QLowEnergyService::ServiceError"
        QT_MOC_LITERAL(135, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(160, 16),  // "deviceDiscovered"
        QT_MOC_LITERAL(177, 20),  // "QBluetoothDeviceInfo"
        QT_MOC_LITERAL(198, 4),  // "info"
        QT_MOC_LITERAL(203, 23)   // "deviceDiscoveryFinished"
    },
    "DeviceCommand",
    "start",
    "",
    "controllerError",
    "QLowEnergyController::Error",
    "error",
    "deviceDisconnected",
    "serviceError",
    "QLowEnergyService::ServiceError",
    "serviceDetailsDiscovered",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "info",
    "deviceDiscoveryFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDeviceCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    1,   57,    2, 0x09,    2 /* Protected */,
       6,    0,   60,    2, 0x09,    4 /* Protected */,
       7,    1,   61,    2, 0x09,    5 /* Protected */,
       9,    0,   64,    2, 0x09,    7 /* Protected */,
      10,    1,   65,    2, 0x08,    8 /* Private */,
      13,    0,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCommand::staticMetaObject>(),
    qt_meta_stringdata_CLASSDeviceCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDeviceCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDeviceCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceCommand, std::true_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'controllerError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QLowEnergyController::Error, std::false_type>,
        // method 'deviceDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serviceError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QLowEnergyService::ServiceError, std::false_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo &, std::false_type>,
        // method 'deviceDiscoveryFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DeviceCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->controllerError((*reinterpret_cast< std::add_pointer_t<QLowEnergyController::Error>>(_a[1]))); break;
        case 2: _t->deviceDisconnected(); break;
        case 3: _t->serviceError((*reinterpret_cast< std::add_pointer_t<QLowEnergyService::ServiceError>>(_a[1]))); break;
        case 4: _t->serviceDetailsDiscovered(); break;
        case 5: _t->deviceDiscovered((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1]))); break;
        case 6: _t->deviceDiscoveryFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLowEnergyController::Error >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QLowEnergyService::ServiceError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *DeviceCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDeviceCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractCommand::qt_metacast(_clname);
}

int DeviceCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCommand::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_WARNING_POP
