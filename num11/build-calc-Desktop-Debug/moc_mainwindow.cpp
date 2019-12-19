/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calc/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      34,   11,   11,   11, 0x08,
      55,   11,   11,   11, 0x08,
      76,   11,   11,   11, 0x08,
      99,   11,   11,   11, 0x08,
     121,   11,   11,   11, 0x08,
     143,   11,   11,   11, 0x08,
     164,   11,   11,   11, 0x08,
     187,   11,   11,   11, 0x08,
     210,   11,   11,   11, 0x08,
     232,   11,   11,   11, 0x08,
     254,   11,   11,   11, 0x08,
     275,   11,   11,   11, 0x08,
     297,   11,   11,   11, 0x08,
     319,   11,   11,   11, 0x08,
     342,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_zero_btn_clicked()\0"
    "on_one_btn_clicked()\0on_two_btn_clicked()\0"
    "on_three_btn_clicked()\0on_four_btn_clicked()\0"
    "on_five_btn_clicked()\0on_six_btn_clicked()\0"
    "on_seven_btn_clicked()\0on_eight_btn_clicked()\0"
    "on_nine_btn_clicked()\0on_plus_btn_clicked()\0"
    "on_min_btn_clicked()\0on_mult_btn_clicked()\0"
    "on_divi_btn_clicked()\0on_equal_btn_clicked()\0"
    "on_AC_btn_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_zero_btn_clicked(); break;
        case 1: _t->on_one_btn_clicked(); break;
        case 2: _t->on_two_btn_clicked(); break;
        case 3: _t->on_three_btn_clicked(); break;
        case 4: _t->on_four_btn_clicked(); break;
        case 5: _t->on_five_btn_clicked(); break;
        case 6: _t->on_six_btn_clicked(); break;
        case 7: _t->on_seven_btn_clicked(); break;
        case 8: _t->on_eight_btn_clicked(); break;
        case 9: _t->on_nine_btn_clicked(); break;
        case 10: _t->on_plus_btn_clicked(); break;
        case 11: _t->on_min_btn_clicked(); break;
        case 12: _t->on_mult_btn_clicked(); break;
        case 13: _t->on_divi_btn_clicked(); break;
        case 14: _t->on_equal_btn_clicked(); break;
        case 15: _t->on_AC_btn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
