/****************************************************************************
** Meta object code from reading C++ file 'testflashledcommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/cli/testflashledcommand.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testflashledcommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS = QtMocHelpers::stringData(
    "TestFlashLedCommand",
    "requiredOptions",
    "",
    "supportedOptions",
    "processOptions",
    "getService",
    "serviceDetailsDiscovered",
    "deviceLedFlashed_data",
    "deviceLedFlashed",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[20];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[11];
    char stringdata6[25];
    char stringdata7[22];
    char stringdata8[17];
    char stringdata9[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS_t qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "TestFlashLedCommand"
        QT_MOC_LITERAL(20, 15),  // "requiredOptions"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 16),  // "supportedOptions"
        QT_MOC_LITERAL(54, 14),  // "processOptions"
        QT_MOC_LITERAL(69, 10),  // "getService"
        QT_MOC_LITERAL(80, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(105, 21),  // "deviceLedFlashed_data"
        QT_MOC_LITERAL(127, 16),  // "deviceLedFlashed"
        QT_MOC_LITERAL(144, 2)   // "tr"
    },
    "TestFlashLedCommand",
    "requiredOptions",
    "",
    "supportedOptions",
    "processOptions",
    "getService",
    "serviceDetailsDiscovered",
    "deviceLedFlashed_data",
    "deviceLedFlashed",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestFlashLedCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x08,    8 /* Private */,

 // slots: parameters
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

Q_CONSTINIT const QMetaObject TestFlashLedCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestFlashLedCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestFlashLedCommand, std::true_type>,
        // method 'requiredOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'supportedOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getService'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceLedFlashed_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceLedFlashed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestFlashLedCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestFlashLedCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requiredOptions(); break;
        case 1: _t->supportedOptions(); break;
        case 2: _t->processOptions(); break;
        case 3: _t->getService(); break;
        case 4: _t->serviceDetailsDiscovered(); break;
        case 5: _t->deviceLedFlashed_data(); break;
        case 6: _t->deviceLedFlashed(); break;
        case 7: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestFlashLedCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestFlashLedCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestFlashLedCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestFlashLedCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
