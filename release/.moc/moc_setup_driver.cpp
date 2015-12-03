/****************************************************************************
** Meta object code from reading C++ file 'setup_driver.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/setup_driver.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_driver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setup_driver[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      13,   32,   32,   32, 0x09,
      33,   55,   32,   32, 0x09,
      61,   86,   32,   32, 0x09,
      92,   32,   32,   32, 0x09,
     117,   32,   32,   32, 0x09,
     142,   32,   32,   32, 0x09,
     168,   32,   32,   32, 0x09,
     194,   32,   32,   32, 0x09,
     220,   32,   32,   32, 0x09,
     238,   32,   32,   32, 0x09,
     260,   55,   32,   32, 0x09,
     280,   32,   32,   32, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_setup_driver[] = {
    "setup_driver\0onBitSelected(int)\0\0"
    "onInverseChanged(int)\0state\0"
    "onDeviceListChanged(int)\0index\0"
    "onRA_INC_ButtonPressed()\0"
    "onRA_DEC_ButtonPressed()\0"
    "onDEC_INC_ButtonPressed()\0"
    "onDEC_DEC_ButtonPressed()\0"
    "onRA_DEC_ButtonReleased()\0onOkButtonClick()\0"
    "onCancelButtonClick()\0onUseDTChanged(int)\0"
    "onTestButtonClick()\0"
};

void setup_driver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        setup_driver *_t = static_cast<setup_driver *>(_o);
        switch (_id) {
        case 0: _t->onBitSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onInverseChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onDeviceListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onRA_INC_ButtonPressed(); break;
        case 4: _t->onRA_DEC_ButtonPressed(); break;
        case 5: _t->onDEC_INC_ButtonPressed(); break;
        case 6: _t->onDEC_DEC_ButtonPressed(); break;
        case 7: _t->onRA_DEC_ButtonReleased(); break;
        case 8: _t->onOkButtonClick(); break;
        case 9: _t->onCancelButtonClick(); break;
        case 10: _t->onUseDTChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onTestButtonClick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData setup_driver::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject setup_driver::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setup_driver,
      qt_meta_data_setup_driver, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setup_driver::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setup_driver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setup_driver::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setup_driver))
        return static_cast<void*>(const_cast< setup_driver*>(this));
    return QDialog::qt_metacast(_clname);
}

int setup_driver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
