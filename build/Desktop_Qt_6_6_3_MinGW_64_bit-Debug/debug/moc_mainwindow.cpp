/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "do_stateChanged",
    "",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "on_btnAdd_clicked",
    "on_btnPlay_clicked",
    "on_btnPause_clicked",
    "on_btnStop_clicked",
    "on_sliderVolumn_valueChanged",
    "value",
    "on_btnSound_clicked",
    "on_sliderPosition_valueChanged",
    "on_pushButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[11];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[6];
    char stringdata5[19];
    char stringdata6[9];
    char stringdata7[19];
    char stringdata8[9];
    char stringdata9[18];
    char stringdata10[19];
    char stringdata11[20];
    char stringdata12[19];
    char stringdata13[29];
    char stringdata14[6];
    char stringdata15[20];
    char stringdata16[31];
    char stringdata17[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 15),  // "do_stateChanged"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 27),  // "QMediaPlayer::PlaybackState"
        QT_MOC_LITERAL(56, 5),  // "state"
        QT_MOC_LITERAL(62, 18),  // "do_durationChanged"
        QT_MOC_LITERAL(81, 8),  // "duration"
        QT_MOC_LITERAL(90, 18),  // "do_positionChanged"
        QT_MOC_LITERAL(109, 8),  // "position"
        QT_MOC_LITERAL(118, 17),  // "on_btnAdd_clicked"
        QT_MOC_LITERAL(136, 18),  // "on_btnPlay_clicked"
        QT_MOC_LITERAL(155, 19),  // "on_btnPause_clicked"
        QT_MOC_LITERAL(175, 18),  // "on_btnStop_clicked"
        QT_MOC_LITERAL(194, 28),  // "on_sliderVolumn_valueChanged"
        QT_MOC_LITERAL(223, 5),  // "value"
        QT_MOC_LITERAL(229, 19),  // "on_btnSound_clicked"
        QT_MOC_LITERAL(249, 30),  // "on_sliderPosition_valueChanged"
        QT_MOC_LITERAL(280, 21)   // "on_pushButton_clicked"
    },
    "MainWindow",
    "do_stateChanged",
    "",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "on_btnAdd_clicked",
    "on_btnPlay_clicked",
    "on_btnPause_clicked",
    "on_btnStop_clicked",
    "on_sliderVolumn_valueChanged",
    "value",
    "on_btnSound_clicked",
    "on_sliderPosition_valueChanged",
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x08,    1 /* Private */,
       5,    1,   83,    2, 0x08,    3 /* Private */,
       7,    1,   86,    2, 0x08,    5 /* Private */,
       9,    0,   89,    2, 0x08,    7 /* Private */,
      10,    0,   90,    2, 0x08,    8 /* Private */,
      11,    0,   91,    2, 0x08,    9 /* Private */,
      12,    0,   92,    2, 0x08,   10 /* Private */,
      13,    1,   93,    2, 0x08,   11 /* Private */,
      15,    0,   96,    2, 0x08,   13 /* Private */,
      16,    1,   97,    2, 0x08,   14 /* Private */,
      17,    0,  100,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::LongLong,    6,
    QMetaType::Void, QMetaType::LongLong,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'do_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::PlaybackState, std::false_type>,
        // method 'do_durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_btnAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnStop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sliderVolumn_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnSound_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sliderPosition_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->do_stateChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 1: _t->do_durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 2: _t->do_positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 3: _t->on_btnAdd_clicked(); break;
        case 4: _t->on_btnPlay_clicked(); break;
        case 5: _t->on_btnPause_clicked(); break;
        case 6: _t->on_btnStop_clicked(); break;
        case 7: _t->on_sliderVolumn_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_btnSound_clicked(); break;
        case 9: _t->on_sliderPosition_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
