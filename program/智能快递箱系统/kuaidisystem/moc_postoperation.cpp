/****************************************************************************
** Meta object code from reading C++ file 'postoperation.h'
**
** Created: Sun Jun 21 20:07:15 2015
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "postoperation.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'postoperation.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_postoperation[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      22,   14,   14,   14, 0x08,
      38,   14,   14,   14, 0x08,
      81,   14,   14,   14, 0x08,
     110,   14,   14,   14, 0x08,
     132,   14,   14,   14, 0x08,
     152,   14,   14,   14, 0x08,
     174,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_postoperation[] = {
    "postoperation\0\0send()\0startTransfer()\0"
    "displayError(QAbstractSocket::SocketError)\0"
    "updateClientProgress(qint64)\0"
    "on_pbReturn_clicked()\0on_pbPost_clicked()\0"
    "on_pbSearch_clicked()\0on_pbsendfile_clicked()\0"
};

const QMetaObject postoperation::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_postoperation,
      qt_meta_data_postoperation, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &postoperation::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *postoperation::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *postoperation::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_postoperation))
        return static_cast<void*>(const_cast< postoperation*>(this));
    return QDialog::qt_metacast(_clname);
}

int postoperation::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: send(); break;
        case 1: startTransfer(); break;
        case 2: displayError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        case 3: updateClientProgress((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 4: on_pbReturn_clicked(); break;
        case 5: on_pbPost_clicked(); break;
        case 6: on_pbSearch_clicked(); break;
        case 7: on_pbsendfile_clicked(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
