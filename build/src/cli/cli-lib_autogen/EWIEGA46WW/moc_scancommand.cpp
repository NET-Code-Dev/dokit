/****************************************************************************
** Meta object code from reading C++ file 'scancommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/cli/scancommand.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scancommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSScanCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSScanCommandENDCLASS = QtMocHelpers::stringData(
    "ScanCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "start",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "info",
    "deviceUpdated",
    "QBluetoothDeviceInfo::Fields",
    "updatedFields",
    "deviceDiscoveryFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScanCommandENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[7];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[21];
    char stringdata8[5];
    char stringdata9[14];
    char stringdata10[29];
    char stringdata11[14];
    char stringdata12[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScanCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScanCommandENDCLASS_t qt_meta_stringdata_CLASSScanCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "ScanCommand"
        QT_MOC_LITERAL(12, 14),  // "processOptions"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 18),  // "QCommandLineParser"
        QT_MOC_LITERAL(47, 6),  // "parser"
        QT_MOC_LITERAL(54, 5),  // "start"
        QT_MOC_LITERAL(60, 16),  // "deviceDiscovered"
        QT_MOC_LITERAL(77, 20),  // "QBluetoothDeviceInfo"
        QT_MOC_LITERAL(98, 4),  // "info"
        QT_MOC_LITERAL(103, 13),  // "deviceUpdated"
        QT_MOC_LITERAL(117, 28),  // "QBluetoothDeviceInfo::Fields"
        QT_MOC_LITERAL(146, 13),  // "updatedFields"
        QT_MOC_LITERAL(160, 23)   // "deviceDiscoveryFinished"
    },
    "ScanCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "start",
    "deviceDiscovered",
    "QBluetoothDeviceInfo",
    "info",
    "deviceUpdated",
    "QBluetoothDeviceInfo::Fields",
    "updatedFields",
    "deviceDiscoveryFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScanCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       5,    0,   47,    2, 0x0a,    3 /* Public */,
       6,    1,   48,    2, 0x09,    4 /* Protected */,
       9,    2,   51,    2, 0x09,    6 /* Protected */,
      12,    0,   56,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 10,    8,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScanCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCommand::staticMetaObject>(),
    qt_meta_stringdata_CLASSScanCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScanCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScanCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScanCommand, std::true_type>,
        // method 'processOptions'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCommandLineParser &, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'deviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo &, std::false_type>,
        // method 'deviceUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QBluetoothDeviceInfo::Fields, std::false_type>,
        // method 'deviceDiscoveryFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ScanCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScanCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->processOptions((*reinterpret_cast< std::add_pointer_t<QCommandLineParser>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->start();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->deviceDiscovered((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1]))); break;
        case 3: _t->deviceUpdated((*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QBluetoothDeviceInfo::Fields>>(_a[2]))); break;
        case 4: _t->deviceDiscoveryFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QBluetoothDeviceInfo >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ScanCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScanCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScanCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractCommand::qt_metacast(_clname);
}

int ScanCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
