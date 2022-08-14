/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QScreen>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    const uint offsetsAndSize[98];
    char stringdata0[1382];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 10), // "MainWindow"
QT_MOC_LITERAL(11, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(34, 0), // ""
QT_MOC_LITERAL(35, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(59, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(83, 26), // "on_actionSave_As_triggered"
QT_MOC_LITERAL(110, 30), // "on_actionSpell_Check_triggered"
QT_MOC_LITERAL(141, 15), // "mousePressEvent"
QT_MOC_LITERAL(157, 12), // "QMouseEvent*"
QT_MOC_LITERAL(170, 2), // "ev"
QT_MOC_LITERAL(173, 13), // "menuSelection"
QT_MOC_LITERAL(187, 8), // "QAction*"
QT_MOC_LITERAL(196, 6), // "action"
QT_MOC_LITERAL(203, 33), // "on_actionLoad_Next_Page_trigg..."
QT_MOC_LITERAL(237, 33), // "on_actionLoad_Prev_Page_trigg..."
QT_MOC_LITERAL(271, 31), // "on_actionLoadGDocPage_triggered"
QT_MOC_LITERAL(303, 31), // "on_actionToDevanagari_triggered"
QT_MOC_LITERAL(335, 27), // "on_actionLoadData_triggered"
QT_MOC_LITERAL(363, 27), // "on_actionLoadDict_triggered"
QT_MOC_LITERAL(391, 31), // "on_actionLoadOCRWords_triggered"
QT_MOC_LITERAL(423, 29), // "on_actionLoadDomain_triggered"
QT_MOC_LITERAL(453, 28), // "on_actionLoadSubPS_triggered"
QT_MOC_LITERAL(482, 33), // "on_actionLoadConfusions_trigg..."
QT_MOC_LITERAL(516, 23), // "on_actionSugg_triggered"
QT_MOC_LITERAL(540, 33), // "on_actionCreateBest2OCR_trigg..."
QT_MOC_LITERAL(574, 25), // "on_actionToSlp1_triggered"
QT_MOC_LITERAL(600, 38), // "on_actionCreateSuggestionLog_..."
QT_MOC_LITERAL(639, 53), // "on_actionCreateSuggestionLogN..."
QT_MOC_LITERAL(693, 36), // "on_actionErrorDetectionRep_tr..."
QT_MOC_LITERAL(730, 47), // "on_actionErrorDetectWithoutAd..."
QT_MOC_LITERAL(778, 24), // "on_actionCPair_triggered"
QT_MOC_LITERAL(803, 27), // "on_actionToSlp1_2_triggered"
QT_MOC_LITERAL(831, 24), // "on_actionToDev_triggered"
QT_MOC_LITERAL(856, 29), // "on_actionExtractDev_triggered"
QT_MOC_LITERAL(886, 36), // "on_actionPrimarySecOCRPair_tr..."
QT_MOC_LITERAL(923, 39), // "on_actionCPairIEROcrVsCorrect..."
QT_MOC_LITERAL(963, 30), // "on_actionEditDistRep_triggered"
QT_MOC_LITERAL(994, 36), // "on_actionConfusionFreqHist_tr..."
QT_MOC_LITERAL(1031, 39), // "on_actionCPairGEROcrVsCorrect..."
QT_MOC_LITERAL(1071, 44), // "on_actionFilterOutGT50EditDis..."
QT_MOC_LITERAL(1116, 34), // "on_actionPrepareFeatures_trig..."
QT_MOC_LITERAL(1151, 40), // "on_actionErrorDetectionRepUni..."
QT_MOC_LITERAL(1192, 27), // "on_actionSanskrit_triggered"
QT_MOC_LITERAL(1220, 24), // "on_actionHindi_triggered"
QT_MOC_LITERAL(1245, 26), // "on_actionEnglish_triggered"
QT_MOC_LITERAL(1272, 23), // "on_actionBold_triggered"
QT_MOC_LITERAL(1296, 25), // "on_actionUnBold_triggered"
QT_MOC_LITERAL(1322, 30), // "on_actionSuperScript_triggered"
QT_MOC_LITERAL(1353, 28) // "on_actionSubscript_triggered"

    },
    "MainWindow\0on_actionNew_triggered\0\0"
    "on_actionOpen_triggered\0on_actionSave_triggered\0"
    "on_actionSave_As_triggered\0"
    "on_actionSpell_Check_triggered\0"
    "mousePressEvent\0QMouseEvent*\0ev\0"
    "menuSelection\0QAction*\0action\0"
    "on_actionLoad_Next_Page_triggered\0"
    "on_actionLoad_Prev_Page_triggered\0"
    "on_actionLoadGDocPage_triggered\0"
    "on_actionToDevanagari_triggered\0"
    "on_actionLoadData_triggered\0"
    "on_actionLoadDict_triggered\0"
    "on_actionLoadOCRWords_triggered\0"
    "on_actionLoadDomain_triggered\0"
    "on_actionLoadSubPS_triggered\0"
    "on_actionLoadConfusions_triggered\0"
    "on_actionSugg_triggered\0"
    "on_actionCreateBest2OCR_triggered\0"
    "on_actionToSlp1_triggered\0"
    "on_actionCreateSuggestionLog_triggered\0"
    "on_actionCreateSuggestionLogNearestPriority_triggered\0"
    "on_actionErrorDetectionRep_triggered\0"
    "on_actionErrorDetectWithoutAdaptation_triggered\0"
    "on_actionCPair_triggered\0"
    "on_actionToSlp1_2_triggered\0"
    "on_actionToDev_triggered\0"
    "on_actionExtractDev_triggered\0"
    "on_actionPrimarySecOCRPair_triggered\0"
    "on_actionCPairIEROcrVsCorrect_triggered\0"
    "on_actionEditDistRep_triggered\0"
    "on_actionConfusionFreqHist_triggered\0"
    "on_actionCPairGEROcrVsCorrect_triggered\0"
    "on_actionFilterOutGT50EditDisPairs_triggered\0"
    "on_actionPrepareFeatures_triggered\0"
    "on_actionErrorDetectionRepUniq_triggered\0"
    "on_actionSanskrit_triggered\0"
    "on_actionHindi_triggered\0"
    "on_actionEnglish_triggered\0"
    "on_actionBold_triggered\0"
    "on_actionUnBold_triggered\0"
    "on_actionSuperScript_triggered\0"
    "on_actionSubscript_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  272,    2, 0x08,    1 /* Private */,
       3,    0,  273,    2, 0x08,    2 /* Private */,
       4,    0,  274,    2, 0x08,    3 /* Private */,
       5,    0,  275,    2, 0x08,    4 /* Private */,
       6,    0,  276,    2, 0x08,    5 /* Private */,
       7,    1,  277,    2, 0x08,    6 /* Private */,
      10,    1,  280,    2, 0x08,    8 /* Private */,
      13,    0,  283,    2, 0x08,   10 /* Private */,
      14,    0,  284,    2, 0x08,   11 /* Private */,
      15,    0,  285,    2, 0x08,   12 /* Private */,
      16,    0,  286,    2, 0x08,   13 /* Private */,
      17,    0,  287,    2, 0x08,   14 /* Private */,
      18,    0,  288,    2, 0x08,   15 /* Private */,
      19,    0,  289,    2, 0x08,   16 /* Private */,
      20,    0,  290,    2, 0x08,   17 /* Private */,
      21,    0,  291,    2, 0x08,   18 /* Private */,
      22,    0,  292,    2, 0x08,   19 /* Private */,
      23,    0,  293,    2, 0x08,   20 /* Private */,
      24,    0,  294,    2, 0x08,   21 /* Private */,
      25,    0,  295,    2, 0x08,   22 /* Private */,
      26,    0,  296,    2, 0x08,   23 /* Private */,
      27,    0,  297,    2, 0x08,   24 /* Private */,
      28,    0,  298,    2, 0x08,   25 /* Private */,
      29,    0,  299,    2, 0x08,   26 /* Private */,
      30,    0,  300,    2, 0x08,   27 /* Private */,
      31,    0,  301,    2, 0x08,   28 /* Private */,
      32,    0,  302,    2, 0x08,   29 /* Private */,
      33,    0,  303,    2, 0x08,   30 /* Private */,
      34,    0,  304,    2, 0x08,   31 /* Private */,
      35,    0,  305,    2, 0x08,   32 /* Private */,
      36,    0,  306,    2, 0x08,   33 /* Private */,
      37,    0,  307,    2, 0x08,   34 /* Private */,
      38,    0,  308,    2, 0x08,   35 /* Private */,
      39,    0,  309,    2, 0x08,   36 /* Private */,
      40,    0,  310,    2, 0x08,   37 /* Private */,
      41,    0,  311,    2, 0x08,   38 /* Private */,
      42,    0,  312,    2, 0x08,   39 /* Private */,
      43,    0,  313,    2, 0x08,   40 /* Private */,
      44,    0,  314,    2, 0x08,   41 /* Private */,
      45,    0,  315,    2, 0x08,   42 /* Private */,
      46,    0,  316,    2, 0x08,   43 /* Private */,
      47,    0,  317,    2, 0x08,   44 /* Private */,
      48,    0,  318,    2, 0x08,   45 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionNew_triggered(); break;
        case 1: _t->on_actionOpen_triggered(); break;
        case 2: _t->on_actionSave_triggered(); break;
        case 3: _t->on_actionSave_As_triggered(); break;
        case 4: _t->on_actionSpell_Check_triggered(); break;
        case 5: _t->mousePressEvent((*reinterpret_cast< std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 6: _t->menuSelection((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 7: _t->on_actionLoad_Next_Page_triggered(); break;
        case 8: _t->on_actionLoad_Prev_Page_triggered(); break;
        case 9: _t->on_actionLoadGDocPage_triggered(); break;
        case 10: _t->on_actionToDevanagari_triggered(); break;
        case 11: _t->on_actionLoadData_triggered(); break;
        case 12: _t->on_actionLoadDict_triggered(); break;
        case 13: _t->on_actionLoadOCRWords_triggered(); break;
        case 14: _t->on_actionLoadDomain_triggered(); break;
        case 15: _t->on_actionLoadSubPS_triggered(); break;
        case 16: _t->on_actionLoadConfusions_triggered(); break;
        case 17: _t->on_actionSugg_triggered(); break;
        case 18: _t->on_actionCreateBest2OCR_triggered(); break;
        case 19: _t->on_actionToSlp1_triggered(); break;
        case 20: _t->on_actionCreateSuggestionLog_triggered(); break;
        case 21: _t->on_actionCreateSuggestionLogNearestPriority_triggered(); break;
        case 22: _t->on_actionErrorDetectionRep_triggered(); break;
        case 23: _t->on_actionErrorDetectWithoutAdaptation_triggered(); break;
        case 24: _t->on_actionCPair_triggered(); break;
        case 25: _t->on_actionToSlp1_2_triggered(); break;
        case 26: _t->on_actionToDev_triggered(); break;
        case 27: _t->on_actionExtractDev_triggered(); break;
        case 28: _t->on_actionPrimarySecOCRPair_triggered(); break;
        case 29: _t->on_actionCPairIEROcrVsCorrect_triggered(); break;
        case 30: _t->on_actionEditDistRep_triggered(); break;
        case 31: _t->on_actionConfusionFreqHist_triggered(); break;
        case 32: _t->on_actionCPairGEROcrVsCorrect_triggered(); break;
        case 33: _t->on_actionFilterOutGT50EditDisPairs_triggered(); break;
        case 34: _t->on_actionPrepareFeatures_triggered(); break;
        case 35: _t->on_actionErrorDetectionRepUniq_triggered(); break;
        case 36: _t->on_actionSanskrit_triggered(); break;
        case 37: _t->on_actionHindi_triggered(); break;
        case 38: _t->on_actionEnglish_triggered(); break;
        case 39: _t->on_actionBold_triggered(); break;
        case 40: _t->on_actionUnBold_triggered(); break;
        case 41: _t->on_actionSuperScript_triggered(); break;
        case 42: _t->on_actionSubscript_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSize,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t
, QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QMouseEvent *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QAction *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
