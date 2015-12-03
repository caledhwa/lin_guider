/****************************************************************************
** Meta object code from reading C++ file 'guider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/guider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'guider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_guider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,   28,   30,   30, 0x09,
      31,   28,   30,   30, 0x09,
      52,   77,   30,   30, 0x09,
      83,   28,   30,   30, 0x09,
     107,  122,   30,   30, 0x09,
     128,  122,   30,   30, 0x09,
     149,  122,   30,   30, 0x09,
     164,   30,   30,   30, 0x09,
     184,   77,   30,   30, 0x09,
     213,  239,   30,   30, 0x09,
     243,  263,   30,   30, 0x09,
     266,  263,   30,   30, 0x09,
     287,  122,   30,   30, 0x09,
     310,  122,   30,   30, 0x09,
     334,  122,   30,   30, 0x09,
     358,  122,   30,   30, 0x09,
     383,   30,   30,   30, 0x09,
     405,   30,   30,   30, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_guider[] = {
    "guider\0onXscaleChanged(int)\0i\0\0"
    "onYscaleChanged(int)\0onSquareSizeChanged(int)\0"
    "index\0onThresholdChanged(int)\0"
    "onSwapDEC(int)\0state\0onNormalizeGain(int)\0"
    "onSaveLog(int)\0onFileNameChanged()\0"
    "onQualityControlChanged(int)\0"
    "onInfoRateChanged(double)\0val\0"
    "onEnableDirRA(bool)\0on\0onEnableDirDEC(bool)\0"
    "onEnableDirRAPlus(int)\0onEnableDirRAMinus(int)\0"
    "onEnableDirDECPlus(int)\0"
    "onEnableDirDECMinus(int)\0onInputParamChanged()\0"
    "onStartStopButtonClick()\0"
};

void guider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        guider *_t = static_cast<guider *>(_o);
        switch (_id) {
        case 0: _t->onXscaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onYscaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onSquareSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onThresholdChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onSwapDEC((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->onNormalizeGain((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->onSaveLog((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onFileNameChanged(); break;
        case 8: _t->onQualityControlChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onInfoRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->onEnableDirRA((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onEnableDirDEC((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onEnableDirRAPlus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onEnableDirRAMinus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onEnableDirDECPlus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onEnableDirDECMinus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onInputParamChanged(); break;
        case 17: _t->onStartStopButtonClick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData guider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject guider::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_guider,
      qt_meta_data_guider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &guider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *guider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *guider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_guider))
        return static_cast<void*>(const_cast< guider*>(this));
    return QDialog::qt_metacast(_clname);
}

int guider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
