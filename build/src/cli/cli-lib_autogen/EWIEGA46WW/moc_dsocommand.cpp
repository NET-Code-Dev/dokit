/****************************************************************************
** Meta object code from reading C++ file 'dsocommand.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/cli/dsocommand.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dsocommand.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDsoCommandENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDsoCommandENDCLASS = QtMocHelpers::stringData(
    "DsoCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "serviceDetailsDiscovered",
    "settingsWritten",
    "metadataRead",
    "DsoService::Metadata",
    "data",
    "outputSamples",
    "DsoService::Samples",
    "samples"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDsoCommandENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[7];
    char stringdata5[25];
    char stringdata6[16];
    char stringdata7[13];
    char stringdata8[21];
    char stringdata9[5];
    char stringdata10[14];
    char stringdata11[20];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDsoCommandENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDsoCommandENDCLASS_t qt_meta_stringdata_CLASSDsoCommandENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "DsoCommand"
        QT_MOC_LITERAL(11, 14),  // "processOptions"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 18),  // "QCommandLineParser"
        QT_MOC_LITERAL(46, 6),  // "parser"
        QT_MOC_LITERAL(53, 24),  // "serviceDetailsDiscovered"
        QT_MOC_LITERAL(78, 15),  // "settingsWritten"
        QT_MOC_LITERAL(94, 12),  // "metadataRead"
        QT_MOC_LITERAL(107, 20),  // "DsoService::Metadata"
        QT_MOC_LITERAL(128, 4),  // "data"
        QT_MOC_LITERAL(133, 13),  // "outputSamples"
        QT_MOC_LITERAL(147, 19),  // "DsoService::Samples"
        QT_MOC_LITERAL(167, 7)   // "samples"
    },
    "DsoCommand",
    "processOptions",
    "",
    "QCommandLineParser",
    "parser",
    "serviceDetailsDiscovered",
    "settingsWritten",
    "metadataRead",
    "DsoService::Metadata",
    "data",
    "outputSamples",
    "DsoService::Samples",
    "samples"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDsoCommandENDCLASS[] = {

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
       5,    0,   47,    2, 0x09,    3 /* Protected */,
       6,    0,   48,    2, 0x08,    4 /* Private */,
       7,    1,   49,    2, 0x08,    5 /* Private */,
      10,    1,   52,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::QStringList, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject DsoCommand::staticMetaObject = { {
    QMetaObject::SuperData::link<DeviceCommand::staticMetaObject>(),
    qt_meta_stringdata_CLASSDsoCommandENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDsoCommandENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDsoCommandENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DsoCommand, std::true_type>,
        // method 'processOptions'
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QCommandLineParser &, std::false_type>,
        // method 'serviceDetailsDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'settingsWritten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'metadataRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DsoService::Metadata &, std::false_type>,
        // method 'outputSamples'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DsoService::Samples &, std::false_type>
    >,
    nullptr
} };

void DsoCommand::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DsoCommand *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { QStringList _r = _t->processOptions((*reinterpret_cast< std::add_pointer_t<QCommandLineParser>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->serviceDetailsDiscovered(); break;
        case 2: _t->settingsWritten(); break;
        case 3: _t->metadataRead((*reinterpret_cast< std::add_pointer_t<DsoService::Metadata>>(_a[1]))); break;
        case 4: _t->outputSamples((*reinterpret_cast< std::add_pointer_t<DsoService::Samples>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DsoCommand::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DsoCommand::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDsoCommandENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return DeviceCommand::qt_metacast(_clname);
}

int DsoCommand::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = DeviceCommand::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
