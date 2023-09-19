/****************************************************************************
** Meta object code from reading C++ file 'calibratecommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/cli/calibratecommand.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calibratecommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSCalibrateCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSCalibrateCommandENDCLASS = QtMocHelpers::stringData(
    "CalibrateCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "serviceDetailsDiscovered",
    "temperatureCalibrated"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSCalibrateCommandENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[17];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[7];
    char stringdata5[25];
    char stringdata6[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSCalibrateCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSCalibrateCommandENDCLASS_t qt_meta_stringdata_CLASSCalibrateCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "CalibrateCommand"
        QT_MOC_LITERAL(17, 14),  // "processOptions"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 18),  // "QCommandLineParser"
        QT_MOC_LITERAL(52, 6),  // "parser"
        QT_MOC_LITERAL(59, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(84, 21)   // "temperatureCalibrated"
    },
    "CalibrateCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "serviceDetailsDiscovered",
    "temperatureCalibrated"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCalibrateCommandENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       5,    0,   35,    2, 0x09,    3 /* Protected */,
       6,    0,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject CalibrateCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceCommand::staticMetaObject>(),
    qt_meta_stringdata_CLASSCalibrateCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCalibrateCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCalibrateCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CalibrateCommand, std::true_type>,
        // method 'processOptions'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCommandLineParser &, std::false_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'temperatureCalibrated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void CalibrateCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CalibrateCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->processOptions((*reinterpret_cast< std::add_pointer_t<QCommandLineParser>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->serviceDetailsDiscovered(); break;
        case 2: _t->temperatureCalibrated(); break;
        default: ;
        }
    }
}

const QMetaObject *CalibrateCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CalibrateCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSCalibrateCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DeviceCommand::qt_metacast(_clname);
}

int CalibrateCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
