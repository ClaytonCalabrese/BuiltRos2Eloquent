/****************************************************************************
** Meta object code from reading C++ file 'plugin_bridge.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../src/ros-visualization/qt_gui_core/qt_gui_cpp/include/qt_gui_cpp/plugin_bridge.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plugin_bridge.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qt_gui_cpp__PluginBridge_t {
    QByteArrayData data[7];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qt_gui_cpp__PluginBridge_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qt_gui_cpp__PluginBridge_t qt_meta_stringdata_qt_gui_cpp__PluginBridge = {
    {
QT_MOC_LITERAL(0, 0, 24), // "qt_gui_cpp::PluginBridge"
QT_MOC_LITERAL(1, 25, 15), // "shutdown_plugin"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "save_settings"
QT_MOC_LITERAL(4, 56, 15), // "plugin_settings"
QT_MOC_LITERAL(5, 72, 17), // "instance_settings"
QT_MOC_LITERAL(6, 90, 16) // "restore_settings"

    },
    "qt_gui_cpp::PluginBridge\0shutdown_plugin\0"
    "\0save_settings\0plugin_settings\0"
    "instance_settings\0restore_settings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qt_gui_cpp__PluginBridge[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    2,   30,    2, 0x0a /* Public */,
       6,    2,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QObjectStar,    4,    5,
    QMetaType::Void, QMetaType::QObjectStar, QMetaType::QObjectStar,    4,    5,

       0        // eod
};

void qt_gui_cpp::PluginBridge::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PluginBridge *_t = static_cast<PluginBridge *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shutdown_plugin(); break;
        case 1: _t->save_settings((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        case 2: _t->restore_settings((*reinterpret_cast< QObject*(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject qt_gui_cpp::PluginBridge::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_qt_gui_cpp__PluginBridge.data,
      qt_meta_data_qt_gui_cpp__PluginBridge,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *qt_gui_cpp::PluginBridge::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qt_gui_cpp::PluginBridge::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qt_gui_cpp__PluginBridge.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qt_gui_cpp::PluginBridge::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
