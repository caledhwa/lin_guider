/****************************************************************************
** Meta object code from reading C++ file 'video.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/video.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'video.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_video_drv__cvideo_base[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      23,   52,   60,   60, 0x05,
      61,   60,   60,   60, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_video_drv__cvideo_base[] = {
    "video_drv::cvideo_base\0"
    "renderImage(const void*,int)\0ptr,len\0"
    "\0calibrationFinished()\0"
};

void video_drv::cvideo_base::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        cvideo_base *_t = static_cast<cvideo_base *>(_o);
        switch (_id) {
        case 0: _t->renderImage((*reinterpret_cast< const void*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->calibrationFinished(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData video_drv::cvideo_base::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject video_drv::cvideo_base::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_video_drv__cvideo_base,
      qt_meta_data_video_drv__cvideo_base, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &video_drv::cvideo_base::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *video_drv::cvideo_base::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *video_drv::cvideo_base::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_video_drv__cvideo_base))
        return static_cast<void*>(const_cast< cvideo_base*>(this));
    return QObject::qt_metacast(_clname);
}

int video_drv::cvideo_base::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void video_drv::cvideo_base::renderImage(const void * _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void video_drv::cvideo_base::calibrationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
