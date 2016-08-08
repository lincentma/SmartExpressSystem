/****************************************************************************
** Meta object code from reading C++ file 'take.h'
**
** Created: Sun Jun 21 20:07:17 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "take.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'take.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_take[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      33,    5,    5,    5, 0x08,
      50,    5,    5,    5, 0x08,
      67,    5,    5,    5, 0x08,
      84,    5,    5,    5, 0x08,
     101,    5,    5,    5, 0x08,
     118,    5,    5,    5, 0x08,
     135,    5,    5,    5, 0x08,
     152,    5,    5,    5, 0x08,
     169,    5,    5,    5, 0x08,
     186,    5,    5,    5, 0x08,
     203,    5,    5,    5, 0x08,
     225,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_take[] = {
    "take\0\0on_pbReturn_take_clicked()\0"
    "on_pb0_clicked()\0on_pb1_clicked()\0"
    "on_pb2_clicked()\0on_pb3_clicked()\0"
    "on_pb4_clicked()\0on_pb5_clicked()\0"
    "on_pb6_clicked()\0on_pb7_clicked()\0"
    "on_pb8_clicked()\0on_pb9_clicked()\0"
    "on_pbDelete_clicked()\0on_pbOK_clicked()\0"
};

const QMetaObject take::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_take,
      qt_meta_data_take, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &take::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *take::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *take::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_take))
        return static_cast<void*>(const_cast< take*>(this));
    return QDialog::qt_metacast(_clname);
}

int take::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_pbReturn_take_clicked(); break;
        case 1: on_pb0_clicked(); break;
        case 2: on_pb1_clicked(); break;
        case 3: on_pb2_clicked(); break;
        case 4: on_pb3_clicked(); break;
        case 5: on_pb4_clicked(); break;
        case 6: on_pb5_clicked(); break;
        case 7: on_pb6_clicked(); break;
        case 8: on_pb7_clicked(); break;
        case 9: on_pb8_clicked(); break;
        case 10: on_pb9_clicked(); break;
        case 11: on_pbDelete_clicked(); break;
        case 12: on_pbOK_clicked(); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
