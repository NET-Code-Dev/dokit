/****************************************************************************
** Meta object code from reading C++ file 'deviceinfoservice_p.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/lib/deviceinfoservice_p.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'deviceinfoservice_p.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS = QtMocHelpers::stringData(
    "DeviceInfoServicePrivate"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[25];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS_t qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24)   // "DeviceInfoServicePrivate"
    },
    "DeviceInfoServicePrivate"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDeviceInfoServicePrivateENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject DeviceInfoServicePrivate::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractPokitServicePrivate::staticMetaObject>(),
    qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDeviceInfoServicePrivateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceInfoServicePrivate, std::true_type>
    >,
    nullptr
} };

void DeviceInfoServicePrivate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *DeviceInfoServicePrivate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DeviceInfoServicePrivate::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDeviceInfoServicePrivateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractPokitServicePrivate::qt_metacast(_clname);
}

int DeviceInfoServicePrivate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractPokitServicePrivate::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
