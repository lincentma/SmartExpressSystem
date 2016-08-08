/****************************************************************************
** Meta object code from reading C++ file 'setting.h'
**
** Created: Sun Jun 21 20:07:19 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "setting.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setting[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       9,    8,    8,    8, 0x08,
      32,    8,    8,    8, 0x08,
      55,    8,    8,    8, 0x08,
      72,    8,    8,    8, 0x08,
      89,    8,    8,    8, 0x08,
     106,    8,    8,    8, 0x08,
     123,    8,    8,    8, 0x08,
     140,    8,    8,    8, 0x08,
     157,    8,    8,    8, 0x08,
     174,    8,    8,    8, 0x08,
     191,    8,    8,    8, 0x08,
     208,    8,    8,    8, 0x08,
     225,    8,    8,    8, 0x08,
     247,    8,    8,    8, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_setting[] = {
    "setting\0\0on_pb_return_clicked()\0"
    "on_pb_create_clicked()\0on_pb1_clicked()\0"
    "on_pb2_clicked()\0on_pb3_clicked()\0"
    "on_pb4_clicked()\0on_pb5_clicked()\0"
    "on_pb6_clicked()\0on_pb7_clicked()\0"
    "on_pb8_clicked()\0on_pb9_clicked()\0"
    "on_pb0_clicked()\0on_pbDelete_clicked()\0"
    "on_pbpoint_clicked()\0"
};

const QMetaObject setting::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setting,
      qt_meta_data_setting, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setting::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setting::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setting))
        return static_cast<void*>(const_cast< setting*>(this));
    return QDialog::qt_metacast(_clname);
}

int setting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pb_return_clicked(); break;
        case 1: on_pb_create_clicked(); break;
        case 2: on_pb1_clicked(); break;
        case 3: on_pb2_clicked(); break;
        case 4: on_pb3_clicked(); break;
        case 5: on_pb4_clicked(); break;
        case 6: on_pb5_clicked(); break;
        case 7: on_pb6_clicked(); break;
        case 8: on_pb7_clicked(); break;
        case 9: on_pb8_clicked(); break;
        case 10: on_pb9_clicked(); break;
        case 11: on_pb0_clicked(); break;
        case 12: on_pbDelete_clicked(); break;
        case 13: on_pbpoint_clicked(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
