/****************************************************************************
** Meta object code from reading C++ file 'testdevicecommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/cli/testdevicecommand.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testdevicecommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS = QtMocHelpers::stringData(
    "TestDeviceCommand",
    "start",
    "",
    "disconnect",
    "controllerError",
    "deviceDisconnected",
    "serviceError",
    "serviceDetailsDiscovered",
    "deviceDiscovered",
    "deviceDiscoveryFinished",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[18];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[11];
    char stringdata4[16];
    char stringdata5[19];
    char stringdata6[13];
    char stringdata7[25];
    char stringdata8[17];
    char stringdata9[24];
    char stringdata10[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS_t qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "TestDeviceCommand"
        QT_MOC_LITERAL(18, 5),  // "start"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 10),  // "disconnect"
        QT_MOC_LITERAL(36, 15),  // "controllerError"
        QT_MOC_LITERAL(52, 18),  // "deviceDisconnected"
        QT_MOC_LITERAL(71, 12),  // "serviceError"
        QT_MOC_LITERAL(84, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(109, 16),  // "deviceDiscovered"
        QT_MOC_LITERAL(126, 23),  // "deviceDiscoveryFinished"
        QT_MOC_LITERAL(150, 2)   // "tr"
    },
    "TestDeviceCommand",
    "start",
    "",
    "disconnect",
    "controllerError",
    "deviceDisconnected",
    "serviceError",
    "serviceDetailsDiscovered",
    "deviceDiscovered",
    "deviceDiscoveryFinished",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestDeviceCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    1 /* Private */,
       3,    0,   69,    2, 0x08,    2 /* Private */,
       4,    0,   70,    2, 0x08,    3 /* Private */,
       5,    0,   71,    2, 0x08,    4 /* Private */,
       6,    0,   72,    2, 0x08,    5 /* Private */,
       7,    0,   73,    2, 0x08,    6 /* Private */,
       8,    0,   74,    2, 0x08,    7 /* Private */,
       9,    0,   75,    2, 0x08,    8 /* Private */,
      10,    0,   76,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TestDeviceCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestDeviceCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestDeviceCommand, std::true_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'controllerError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serviceError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscoveryFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestDeviceCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestDeviceCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->start(); break;
        case 1: _t->disconnect(); break;
        case 2: _t->controllerError(); break;
        case 3: _t->deviceDisconnected(); break;
        case 4: _t->serviceError(); break;
        case 5: _t->serviceDetailsDiscovered(); break;
        case 6: _t->deviceDiscovered(); break;
        case 7: _t->deviceDiscoveryFinished(); break;
        case 8: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestDeviceCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestDeviceCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestDeviceCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestDeviceCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
