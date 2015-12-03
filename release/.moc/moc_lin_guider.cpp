/****************************************************************************
** Meta object code from reading C++ file 'lin_guider.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/lin_guider.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lin_guider.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_lin_guider[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   31,   31,   31, 0x09,
      32,   31,   31,   31, 0x09,
      52,   31,   31,   31, 0x09,
      63,   31,   31,   31, 0x09,
      83,   31,   31,   31, 0x09,
      99,   31,   31,   31, 0x09,
     116,   31,   31,   31, 0x09,
     130,   31,   31,   31, 0x09,
     145,   31,   31,   31, 0x09,
     173,   31,   31,   31, 0x09,
     194,  222,   31,   31, 0x09,
     224,   31,   31,   31, 0x09,
     238,   31,   31,   31, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_lin_guider[] = {
    "lin_guider\0onShowSetupGuider()\0\0"
    "onShowSetupDriver()\0onRecord()\0"
    "onShowCalibration()\0onShowGuiding()\0"
    "onShowSettings()\0onShowAbout()\0"
    "onActionExit()\0onToggleCalibrationGuider()\0"
    "onAdjust2fitCamera()\0onGetVideo(const void*,int)\0"
    ",\0onRemoteCmd()\0onCmdTimer()\0"
};

void lin_guider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        lin_guider *_t = static_cast<lin_guider *>(_o);
        switch (_id) {
        case 0: _t->onShowSetupGuider(); break;
        case 1: _t->onShowSetupDriver(); break;
        case 2: _t->onRecord(); break;
        case 3: _t->onShowCalibration(); break;
        case 4: _t->onShowGuiding(); break;
        case 5: _t->onShowSettings(); break;
        case 6: _t->onShowAbout(); break;
        case 7: _t->onActionExit(); break;
        case 8: _t->onToggleCalibrationGuider(); break;
        case 9: _t->onAdjust2fitCamera(); break;
        case 10: _t->onGetVideo((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 11: _t->onRemoteCmd(); break;
        case 12: _t->onCmdTimer(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData lin_guider::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject lin_guider::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_lin_guider,
      qt_meta_data_lin_guider, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &lin_guider::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *lin_guider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *lin_guider::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_lin_guider))
        return static_cast<void*>(const_cast< lin_guider*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int lin_guider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
