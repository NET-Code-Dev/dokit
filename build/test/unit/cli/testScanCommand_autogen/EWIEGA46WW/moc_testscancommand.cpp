/****************************************************************************
** Meta object code from reading C++ file 'testscancommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../test/unit/cli/testscancommand.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'testscancommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTestScanCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTestScanCommandENDCLASS = QtMocHelpers::stringData(
    "TestScanCommand",
    "requiredOptions",
    "",
    "supportedOptions",
    "processOptions",
    "start",
    "deviceDiscovered_data",
    "deviceDiscovered",
    "deviceUpdated_data",
    "deviceUpdated",
    "deviceDiscoveryFinished",
    "toJson_info_data",
    "toJson_info",
    "toJson_coreConfig_data",
    "toJson_coreConfig",
    "toJson_majorClass_data",
    "toJson_majorClass",
    "toJson_minorClass_data",
    "toJson_minorClass",
    "toJson_serviceClasses_data",
    "toJson_serviceClasses",
    "toJson_uuids_list_data",
    "toJson_uuids_list",
    "toJson_manufacturerData_data",
    "toJson_manufacturerData",
    "toString_majorClass_data",
    "toString_majorClass",
    "toString_minorClass_data",
    "toString_minorClass",
    "tr"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTestScanCommandENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[16];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[15];
    char stringdata5[6];
    char stringdata6[22];
    char stringdata7[17];
    char stringdata8[19];
    char stringdata9[14];
    char stringdata10[24];
    char stringdata11[17];
    char stringdata12[12];
    char stringdata13[23];
    char stringdata14[18];
    char stringdata15[23];
    char stringdata16[18];
    char stringdata17[23];
    char stringdata18[18];
    char stringdata19[27];
    char stringdata20[22];
    char stringdata21[23];
    char stringdata22[18];
    char stringdata23[29];
    char stringdata24[24];
    char stringdata25[25];
    char stringdata26[20];
    char stringdata27[25];
    char stringdata28[20];
    char stringdata29[3];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTestScanCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTestScanCommandENDCLASS_t qt_meta_stringdata_CLASSTestScanCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "TestScanCommand"
        QT_MOC_LITERAL(16, 15),  // "requiredOptions"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 16),  // "supportedOptions"
        QT_MOC_LITERAL(50, 14),  // "processOptions"
        QT_MOC_LITERAL(65, 5),  // "start"
        QT_MOC_LITERAL(71, 21),  // "deviceDiscovered_data"
        QT_MOC_LITERAL(93, 16),  // "deviceDiscovered"
        QT_MOC_LITERAL(110, 18),  // "deviceUpdated_data"
        QT_MOC_LITERAL(129, 13),  // "deviceUpdated"
        QT_MOC_LITERAL(143, 23),  // "deviceDiscoveryFinished"
        QT_MOC_LITERAL(167, 16),  // "toJson_info_data"
        QT_MOC_LITERAL(184, 11),  // "toJson_info"
        QT_MOC_LITERAL(196, 22),  // "toJson_coreConfig_data"
        QT_MOC_LITERAL(219, 17),  // "toJson_coreConfig"
        QT_MOC_LITERAL(237, 22),  // "toJson_majorClass_data"
        QT_MOC_LITERAL(260, 17),  // "toJson_majorClass"
        QT_MOC_LITERAL(278, 22),  // "toJson_minorClass_data"
        QT_MOC_LITERAL(301, 17),  // "toJson_minorClass"
        QT_MOC_LITERAL(319, 26),  // "toJson_serviceClasses_data"
        QT_MOC_LITERAL(346, 21),  // "toJson_serviceClasses"
        QT_MOC_LITERAL(368, 22),  // "toJson_uuids_list_data"
        QT_MOC_LITERAL(391, 17),  // "toJson_uuids_list"
        QT_MOC_LITERAL(409, 28),  // "toJson_manufacturerData_data"
        QT_MOC_LITERAL(438, 23),  // "toJson_manufacturerData"
        QT_MOC_LITERAL(462, 24),  // "toString_majorClass_data"
        QT_MOC_LITERAL(487, 19),  // "toString_majorClass"
        QT_MOC_LITERAL(507, 24),  // "toString_minorClass_data"
        QT_MOC_LITERAL(532, 19),  // "toString_minorClass"
        QT_MOC_LITERAL(552, 2)   // "tr"
    },
    "TestScanCommand",
    "requiredOptions",
    "",
    "supportedOptions",
    "processOptions",
    "start",
    "deviceDiscovered_data",
    "deviceDiscovered",
    "deviceUpdated_data",
    "deviceUpdated",
    "deviceDiscoveryFinished",
    "toJson_info_data",
    "toJson_info",
    "toJson_coreConfig_data",
    "toJson_coreConfig",
    "toJson_majorClass_data",
    "toJson_majorClass",
    "toJson_minorClass_data",
    "toJson_minorClass",
    "toJson_serviceClasses_data",
    "toJson_serviceClasses",
    "toJson_uuids_list_data",
    "toJson_uuids_list",
    "toJson_manufacturerData_data",
    "toJson_manufacturerData",
    "toString_majorClass_data",
    "toString_majorClass",
    "toString_minorClass_data",
    "toString_minorClass",
    "tr"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTestScanCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x08,    1 /* Private */,
       3,    0,  183,    2, 0x08,    2 /* Private */,
       4,    0,  184,    2, 0x08,    3 /* Private */,
       5,    0,  185,    2, 0x08,    4 /* Private */,
       6,    0,  186,    2, 0x08,    5 /* Private */,
       7,    0,  187,    2, 0x08,    6 /* Private */,
       8,    0,  188,    2, 0x08,    7 /* Private */,
       9,    0,  189,    2, 0x08,    8 /* Private */,
      10,    0,  190,    2, 0x08,    9 /* Private */,
      11,    0,  191,    2, 0x08,   10 /* Private */,
      12,    0,  192,    2, 0x08,   11 /* Private */,
      13,    0,  193,    2, 0x08,   12 /* Private */,
      14,    0,  194,    2, 0x08,   13 /* Private */,
      15,    0,  195,    2, 0x08,   14 /* Private */,
      16,    0,  196,    2, 0x08,   15 /* Private */,
      17,    0,  197,    2, 0x08,   16 /* Private */,
      18,    0,  198,    2, 0x08,   17 /* Private */,
      19,    0,  199,    2, 0x08,   18 /* Private */,
      20,    0,  200,    2, 0x08,   19 /* Private */,
      21,    0,  201,    2, 0x08,   20 /* Private */,
      22,    0,  202,    2, 0x08,   21 /* Private */,
      23,    0,  203,    2, 0x08,   22 /* Private */,
      24,    0,  204,    2, 0x08,   23 /* Private */,
      25,    0,  205,    2, 0x08,   24 /* Private */,
      26,    0,  206,    2, 0x08,   25 /* Private */,
      27,    0,  207,    2, 0x08,   26 /* Private */,
      28,    0,  208,    2, 0x08,   27 /* Private */,
      29,    0,  209,    2, 0x08,   28 /* Private */,

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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

Q_CONSTINIT const QMetaObject TestScanCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTestScanCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTestScanCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTestScanCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TestScanCommand, std::true_type>,
        // method 'requiredOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'supportedOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscovered_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceUpdated_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deviceDiscoveryFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_info_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_info'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_coreConfig_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_coreConfig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_majorClass_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_majorClass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_minorClass_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_minorClass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_serviceClasses_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_serviceClasses'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_uuids_list_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_uuids_list'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_manufacturerData_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toJson_manufacturerData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_majorClass_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_majorClass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_minorClass_data'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toString_minorClass'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TestScanCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TestScanCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->requiredOptions(); break;
        case 1: _t->supportedOptions(); break;
        case 2: _t->processOptions(); break;
        case 3: _t->start(); break;
        case 4: _t->deviceDiscovered_data(); break;
        case 5: _t->deviceDiscovered(); break;
        case 6: _t->deviceUpdated_data(); break;
        case 7: _t->deviceUpdated(); break;
        case 8: _t->deviceDiscoveryFinished(); break;
        case 9: _t->toJson_info_data(); break;
        case 10: _t->toJson_info(); break;
        case 11: _t->toJson_coreConfig_data(); break;
        case 12: _t->toJson_coreConfig(); break;
        case 13: _t->toJson_majorClass_data(); break;
        case 14: _t->toJson_majorClass(); break;
        case 15: _t->toJson_minorClass_data(); break;
        case 16: _t->toJson_minorClass(); break;
        case 17: _t->toJson_serviceClasses_data(); break;
        case 18: _t->toJson_serviceClasses(); break;
        case 19: _t->toJson_uuids_list_data(); break;
        case 20: _t->toJson_uuids_list(); break;
        case 21: _t->toJson_manufacturerData_data(); break;
        case 22: _t->toJson_manufacturerData(); break;
        case 23: _t->toString_majorClass_data(); break;
        case 24: _t->toString_majorClass(); break;
        case 25: _t->toString_minorClass_data(); break;
        case 26: _t->toString_minorClass(); break;
        case 27: _t->tr(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *TestScanCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TestScanCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTestScanCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TestScanCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
