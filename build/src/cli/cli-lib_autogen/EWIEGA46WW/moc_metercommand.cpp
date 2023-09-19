/****************************************************************************
** Meta object code from reading C++ file 'metercommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/cli/metercommand.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'metercommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMeterCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMeterCommandENDCLASS = QtMocHelpers::stringData(
    "MeterCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "serviceDetailsDiscovered",
    "settingsWritten",
    "outputReading",
    "MultimeterService::Reading",
    "reading"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMeterCommandENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[13];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[7];
    char stringdata5[25];
    char stringdata6[16];
    char stringdata7[14];
    char stringdata8[27];
    char stringdata9[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMeterCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMeterCommandENDCLASS_t qt_meta_stringdata_CLASSMeterCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "MeterCommand"
        QT_MOC_LITERAL(13, 14),  // "processOptions"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 18),  // "QCommandLineParser"
        QT_MOC_LITERAL(48, 6),  // "parser"
        QT_MOC_LITERAL(55, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(80, 15),  // "settingsWritten"
        QT_MOC_LITERAL(96, 13),  // "outputReading"
        QT_MOC_LITERAL(110, 26),  // "MultimeterService::Reading"
        QT_MOC_LITERAL(137, 7)   // "reading"
    },
    "MeterCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "serviceDetailsDiscovered",
    "settingsWritten",
    "outputReading",
    "MultimeterService::Reading",
    "reading"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMeterCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    0,   41,    2, 0x09,    3 /* Protected */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    1,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject MeterCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceCommand::staticMetaObject>(),
    qt_meta_stringdata_CLASSMeterCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMeterCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMeterCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MeterCommand, std::true_type>,
        // method 'processOptions'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCommandLineParser &, std::false_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'settingsWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'outputReading'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const MultimeterService::Reading &, std::false_type>
    >,
    nullptr
} };

void MeterCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MeterCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->processOptions((*reinterpret_cast< std::add_pointer_t<QCommandLineParser>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->serviceDetailsDiscovered(); break;
        case 2: _t->settingsWritten(); break;
        case 3: _t->outputReading((*reinterpret_cast< std::add_pointer_t<MultimeterService::Reading>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MeterCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MeterCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMeterCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DeviceCommand::qt_metacast(_clname);
}

int MeterCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
