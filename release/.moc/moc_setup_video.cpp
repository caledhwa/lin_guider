/****************************************************************************
** Meta object code from reading C++ file 'setup_video.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/setup_video.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'setup_video.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_setup_video[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   38,   42,   42, 0x09,
      43,   38,   42,   42, 0x09,
      66,   38,   42,   42, 0x09,
      92,   38,   42,   42, 0x09,
     119,   38,   42,   42, 0x09,
     146,   38,   42,   42, 0x09,
     174,  197,   42,   42, 0x09,
     203,  228,   42,   42, 0x09,
     234,  228,   42,   42, 0x09,
     252,  228,   42,   42, 0x09,
     276,  197,   42,   42, 0x09,
     293,  197,   42,   42, 0x09,
     315,  197,   42,   42, 0x09,
     344,  197,   42,   42, 0x09,
     367,  390,   42,   42, 0x09,
     396,  390,   42,   42, 0x09,
     421,  390,   42,   42, 0x09,
     444,  390,   42,   42, 0x09,
     469,  228,   42,   42, 0x09,
     492,  390,   42,   42, 0x09,
     519,  390,   42,   42, 0x09,
     548,   42,   42,   42, 0x09,
     566,   42,   42,   42, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_setup_video[] = {
    "setup_video\0onApertureChanged(double)\0"
    "val\0\0onFocalChanged(double)\0"
    "onMatrixWidthChanged(int)\0"
    "onMatrixHeightChanged(int)\0"
    "onPixeWidthChanged(double)\0"
    "onPixeHeightChanged(double)\0"
    "onAutoInfoChecked(int)\0state\0"
    "onDeviceListChanged(int)\0index\0"
    "onFPSChanged(int)\0onFrameSizeChanged(int)\0"
    "onBWChecked(int)\0onHalfFPSChecked(int)\0"
    "onUseCalibrationChecked(int)\0"
    "onAutogainChanged(int)\0onSpinGainChanged(int)\0"
    "value\0onSliderGainChanged(int)\0"
    "onSpinExpoChanged(int)\0onSliderExpoChanged(int)\0"
    "onExtParamChanged(int)\0"
    "onSpinExtParamChanged(int)\0"
    "onSliderExtParamChanged(int)\0"
    "onOkButtonClick()\0onCancelButtonClick()\0"
};

void setup_video::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        setup_video *_t = static_cast<setup_video *>(_o);
        switch (_id) {
        case 0: _t->onApertureChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->onFocalChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->onMatrixWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onMatrixHeightChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onPixeWidthChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->onPixeHeightChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->onAutoInfoChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->onDeviceListChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onFPSChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->onFrameSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->onBWChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->onHalfFPSChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->onUseCalibrationChecked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->onAutogainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->onSpinGainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->onSliderGainChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->onSpinExpoChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->onSliderExpoChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->onExtParamChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->onSpinExtParamChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->onSliderExtParamChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->onOkButtonClick(); break;
        case 22: _t->onCancelButtonClick(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData setup_video::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject setup_video::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_setup_video,
      qt_meta_data_setup_video, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &setup_video::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *setup_video::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *setup_video::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_setup_video))
        return static_cast<void*>(const_cast< setup_video*>(this));
    return QDialog::qt_metacast(_clname);
}

int setup_video::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
