/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qchartview.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_datain;
    QAction *action_dataout;
    QWidget *centralwidget;
    QGroupBox *gBoxInput;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_1;
    QLineEdit *lineEdit57;
    QLineEdit *lineEdit76;
    QLineEdit *lineEdit47;
    QLineEdit *lineEdit54;
    QLineEdit *lineEdit55;
    QLineEdit *lineEdit61;
    QLineEdit *lineEdit51;
    QLabel *label_r3;
    QLineEdit *lineEdit17;
    QLineEdit *lineEdit65;
    QLineEdit *lineEdit42;
    QLineEdit *lineEdit33;
    QLineEdit *lineEdit62;
    QLineEdit *lineEdit25;
    QLineEdit *lineEdit63;
    QLineEdit *lineEdit44;
    QLineEdit *lineEdit24;
    QLineEdit *lineEdit83;
    QLineEdit *lineEdit67;
    QLineEdit *lineEdit21;
    QLineEdit *lineEdit31;
    QLineEdit *lineEdit81;
    QLabel *label_p1;
    QLineEdit *lineEdit26;
    QLineEdit *lineEdit22;
    QLineEdit *lineEdit53;
    QLineEdit *lineEdit87;
    QLineEdit *lineEdit74;
    QLabel *labelx;
    QLineEdit *lineEdit45;
    QLineEdit *lineEdit23;
    QLabel *label_r1;
    QLineEdit *lineEdit12;
    QLineEdit *lineEdit56;
    QLineEdit *lineEdit75;
    QLineEdit *lineEdit27;
    QLabel *label_p3;
    QLineEdit *lineEdit86;
    QLineEdit *lineEdit64;
    QLineEdit *lineEdit32;
    QLineEdit *lineEdit15;
    QLineEdit *lineEdit46;
    QLineEdit *lineEdit34;
    QLineEdit *lineEdit36;
    QLineEdit *lineEdit43;
    QLineEdit *lineEdit16;
    QLineEdit *lineEdit82;
    QLineEdit *lineEdit72;
    QLineEdit *lineEdit71;
    QLineEdit *lineEdit14;
    QLineEdit *lineEdit73;
    QLineEdit *lineEdit41;
    QLineEdit *lineEdit52;
    QLabel *label_3;
    QLineEdit *lineEdit11;
    QLineEdit *lineEdit84;
    QLineEdit *lineEdit85;
    QLabel *label_r2;
    QLineEdit *lineEdit66;
    QLineEdit *lineEdit35;
    QLineEdit *lineEdit77;
    QLineEdit *lineEdit13;
    QLabel *label_p2;
    QLineEdit *lineEdit37;
    QLineEdit *lineEdit91;
    QLineEdit *lineEdit92;
    QLineEdit *lineEdit93;
    QLineEdit *lineEdit94;
    QLineEdit *lineEdit95;
    QLineEdit *lineEdit96;
    QLineEdit *lineEdit97;
    QGroupBox *gBoxLsm;
    QGridLayout *gridLayout;
    QLineEdit *lineEditLsmB1;
    QLabel *LBleLsmX;
    QLineEdit *lineEditLsmB0;
    QLabel *LBleLsmFullScale;
    QLineEdit *lineEditLsmFS;
    QLabel *LBleLsmLinearity;
    QLineEdit *lineEditLsmLine;
    QLabel *label_4;
    QLabel *LBleLsmHysteria;
    QLineEdit *lineEditLsmHysteria;
    QLabel *label_5;
    QLabel *LBleLsmRepeat;
    QLineEdit *lineEditLsmRepeat;
    QLabel *label_6;
    QLabel *LBleLsmY;
    QLabel *LBleCnFac;
    QPushButton *pBtnUpdate;
    QLineEdit *lineEditK;
    QGroupBox *gBoxBiPoint;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEditBiPB1;
    QLabel *LBleBiPX;
    QLineEdit *lineEditBiPB0;
    QLabel *LBleBiPFullScale;
    QLineEdit *lineEditBiPFS;
    QLabel *LBleBiPLinearity;
    QLineEdit *lineEditBiPLine;
    QLabel *label_8;
    QLabel *LBleBiPHysteria;
    QLineEdit *lineEditBiPHysteria;
    QLabel *label_9;
    QLabel *LBleLsmRepeat_2;
    QLineEdit *lineEditBiPRepeat;
    QLabel *label_10;
    QLabel *LBleBiPY;
    QtCharts::QChartView *gViewOrigin;
    QLineEdit *lineEdit;
    QtCharts::QChartView *gViewLsmBip;
    QPushButton *pBtn1pVis;
    QPushButton *pBtn1rVis;
    QPushButton *pBtn2pVis;
    QPushButton *pBtn2rVis;
    QPushButton *pBtn3pVis;
    QPushButton *pBtn3rVis;
    QMenuBar *menubar;
    QMenu *menu1;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1192, 910);
        action_datain = new QAction(MainWindow);
        action_datain->setObjectName(QString::fromUtf8("action_datain"));
        action_dataout = new QAction(MainWindow);
        action_dataout->setObjectName(QString::fromUtf8("action_dataout"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gBoxInput = new QGroupBox(centralwidget);
        gBoxInput->setObjectName(QString::fromUtf8("gBoxInput"));
        gBoxInput->setGeometry(QRect(10, 10, 581, 371));
        gBoxInput->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(gBoxInput);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_2 = new QLabel(gBoxInput);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_2, 0, 3, 1, 2);

        label_1 = new QLabel(gBoxInput);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_1, 0, 1, 1, 2);

        lineEdit57 = new QLineEdit(gBoxInput);
        lineEdit57->setObjectName(QString::fromUtf8("lineEdit57"));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(10);
        font.setItalic(true);
        lineEdit57->setFont(font);
        lineEdit57->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit57, 6, 6, 1, 1);

        lineEdit76 = new QLineEdit(gBoxInput);
        lineEdit76->setObjectName(QString::fromUtf8("lineEdit76"));
        lineEdit76->setFont(font);
        lineEdit76->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit76, 8, 5, 1, 1);

        lineEdit47 = new QLineEdit(gBoxInput);
        lineEdit47->setObjectName(QString::fromUtf8("lineEdit47"));
        lineEdit47->setFont(font);
        lineEdit47->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit47, 5, 6, 1, 1);

        lineEdit54 = new QLineEdit(gBoxInput);
        lineEdit54->setObjectName(QString::fromUtf8("lineEdit54"));
        lineEdit54->setFont(font);
        lineEdit54->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit54, 6, 3, 1, 1);

        lineEdit55 = new QLineEdit(gBoxInput);
        lineEdit55->setObjectName(QString::fromUtf8("lineEdit55"));
        lineEdit55->setFont(font);
        lineEdit55->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit55, 6, 4, 1, 1);

        lineEdit61 = new QLineEdit(gBoxInput);
        lineEdit61->setObjectName(QString::fromUtf8("lineEdit61"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        lineEdit61->setFont(font1);
        lineEdit61->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit61, 7, 0, 1, 1);

        lineEdit51 = new QLineEdit(gBoxInput);
        lineEdit51->setObjectName(QString::fromUtf8("lineEdit51"));
        lineEdit51->setFont(font1);
        lineEdit51->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit51, 6, 0, 1, 1);

        label_r3 = new QLabel(gBoxInput);
        label_r3->setObjectName(QString::fromUtf8("label_r3"));
        label_r3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_r3, 1, 6, 1, 1);

        lineEdit17 = new QLineEdit(gBoxInput);
        lineEdit17->setObjectName(QString::fromUtf8("lineEdit17"));
        lineEdit17->setFont(font);
        lineEdit17->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit17, 2, 6, 1, 1);

        lineEdit65 = new QLineEdit(gBoxInput);
        lineEdit65->setObjectName(QString::fromUtf8("lineEdit65"));
        lineEdit65->setFont(font);
        lineEdit65->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit65, 7, 4, 1, 1);

        lineEdit42 = new QLineEdit(gBoxInput);
        lineEdit42->setObjectName(QString::fromUtf8("lineEdit42"));
        lineEdit42->setFont(font);
        lineEdit42->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit42, 5, 1, 1, 1);

        lineEdit33 = new QLineEdit(gBoxInput);
        lineEdit33->setObjectName(QString::fromUtf8("lineEdit33"));
        lineEdit33->setFont(font);
        lineEdit33->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit33, 4, 2, 1, 1);

        lineEdit62 = new QLineEdit(gBoxInput);
        lineEdit62->setObjectName(QString::fromUtf8("lineEdit62"));
        lineEdit62->setFont(font);
        lineEdit62->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit62, 7, 1, 1, 1);

        lineEdit25 = new QLineEdit(gBoxInput);
        lineEdit25->setObjectName(QString::fromUtf8("lineEdit25"));
        lineEdit25->setFont(font);
        lineEdit25->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit25, 3, 4, 1, 1);

        lineEdit63 = new QLineEdit(gBoxInput);
        lineEdit63->setObjectName(QString::fromUtf8("lineEdit63"));
        lineEdit63->setFont(font);
        lineEdit63->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit63, 7, 2, 1, 1);

        lineEdit44 = new QLineEdit(gBoxInput);
        lineEdit44->setObjectName(QString::fromUtf8("lineEdit44"));
        lineEdit44->setFont(font);
        lineEdit44->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit44, 5, 3, 1, 1);

        lineEdit24 = new QLineEdit(gBoxInput);
        lineEdit24->setObjectName(QString::fromUtf8("lineEdit24"));
        lineEdit24->setFont(font);
        lineEdit24->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit24, 3, 3, 1, 1);

        lineEdit83 = new QLineEdit(gBoxInput);
        lineEdit83->setObjectName(QString::fromUtf8("lineEdit83"));
        lineEdit83->setFont(font);
        lineEdit83->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit83, 9, 2, 1, 1);

        lineEdit67 = new QLineEdit(gBoxInput);
        lineEdit67->setObjectName(QString::fromUtf8("lineEdit67"));
        lineEdit67->setFont(font);
        lineEdit67->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit67, 7, 6, 1, 1);

        lineEdit21 = new QLineEdit(gBoxInput);
        lineEdit21->setObjectName(QString::fromUtf8("lineEdit21"));
        lineEdit21->setFont(font1);
        lineEdit21->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit21, 3, 0, 1, 1);

        lineEdit31 = new QLineEdit(gBoxInput);
        lineEdit31->setObjectName(QString::fromUtf8("lineEdit31"));
        lineEdit31->setFont(font1);
        lineEdit31->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit31, 4, 0, 1, 1);

        lineEdit81 = new QLineEdit(gBoxInput);
        lineEdit81->setObjectName(QString::fromUtf8("lineEdit81"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\226\271\346\255\243\347\262\227\351\273\221\345\256\213\347\256\200\344\275\223"));
        font2.setPointSize(9);
        font2.setItalic(false);
        lineEdit81->setFont(font2);
        lineEdit81->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit81, 9, 0, 1, 1);

        label_p1 = new QLabel(gBoxInput);
        label_p1->setObjectName(QString::fromUtf8("label_p1"));
        label_p1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_p1, 1, 1, 1, 1);

        lineEdit26 = new QLineEdit(gBoxInput);
        lineEdit26->setObjectName(QString::fromUtf8("lineEdit26"));
        lineEdit26->setFont(font);
        lineEdit26->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit26, 3, 5, 1, 1);

        lineEdit22 = new QLineEdit(gBoxInput);
        lineEdit22->setObjectName(QString::fromUtf8("lineEdit22"));
        lineEdit22->setFont(font);
        lineEdit22->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit22, 3, 1, 1, 1);

        lineEdit53 = new QLineEdit(gBoxInput);
        lineEdit53->setObjectName(QString::fromUtf8("lineEdit53"));
        lineEdit53->setFont(font);
        lineEdit53->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit53, 6, 2, 1, 1);

        lineEdit87 = new QLineEdit(gBoxInput);
        lineEdit87->setObjectName(QString::fromUtf8("lineEdit87"));
        lineEdit87->setFont(font);
        lineEdit87->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit87, 9, 6, 1, 1);

        lineEdit74 = new QLineEdit(gBoxInput);
        lineEdit74->setObjectName(QString::fromUtf8("lineEdit74"));
        lineEdit74->setFont(font);
        lineEdit74->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit74, 8, 3, 1, 1);

        labelx = new QLabel(gBoxInput);
        labelx->setObjectName(QString::fromUtf8("labelx"));
        labelx->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(labelx, 1, 0, 1, 1);

        lineEdit45 = new QLineEdit(gBoxInput);
        lineEdit45->setObjectName(QString::fromUtf8("lineEdit45"));
        lineEdit45->setFont(font);
        lineEdit45->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit45, 5, 4, 1, 1);

        lineEdit23 = new QLineEdit(gBoxInput);
        lineEdit23->setObjectName(QString::fromUtf8("lineEdit23"));
        lineEdit23->setFont(font);
        lineEdit23->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit23, 3, 2, 1, 1);

        label_r1 = new QLabel(gBoxInput);
        label_r1->setObjectName(QString::fromUtf8("label_r1"));
        label_r1->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_r1, 1, 2, 1, 1);

        lineEdit12 = new QLineEdit(gBoxInput);
        lineEdit12->setObjectName(QString::fromUtf8("lineEdit12"));
        lineEdit12->setFont(font);
        lineEdit12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit12, 2, 1, 1, 1);

        lineEdit56 = new QLineEdit(gBoxInput);
        lineEdit56->setObjectName(QString::fromUtf8("lineEdit56"));
        lineEdit56->setFont(font);
        lineEdit56->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit56, 6, 5, 1, 1);

        lineEdit75 = new QLineEdit(gBoxInput);
        lineEdit75->setObjectName(QString::fromUtf8("lineEdit75"));
        lineEdit75->setFont(font);
        lineEdit75->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit75, 8, 4, 1, 1);

        lineEdit27 = new QLineEdit(gBoxInput);
        lineEdit27->setObjectName(QString::fromUtf8("lineEdit27"));
        lineEdit27->setFont(font);
        lineEdit27->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit27, 3, 6, 1, 1);

        label_p3 = new QLabel(gBoxInput);
        label_p3->setObjectName(QString::fromUtf8("label_p3"));
        label_p3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_p3, 1, 5, 1, 1);

        lineEdit86 = new QLineEdit(gBoxInput);
        lineEdit86->setObjectName(QString::fromUtf8("lineEdit86"));
        lineEdit86->setFont(font);
        lineEdit86->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit86, 9, 5, 1, 1);

        lineEdit64 = new QLineEdit(gBoxInput);
        lineEdit64->setObjectName(QString::fromUtf8("lineEdit64"));
        lineEdit64->setFont(font);
        lineEdit64->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit64, 7, 3, 1, 1);

        lineEdit32 = new QLineEdit(gBoxInput);
        lineEdit32->setObjectName(QString::fromUtf8("lineEdit32"));
        lineEdit32->setFont(font);
        lineEdit32->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit32, 4, 1, 1, 1);

        lineEdit15 = new QLineEdit(gBoxInput);
        lineEdit15->setObjectName(QString::fromUtf8("lineEdit15"));
        lineEdit15->setFont(font);
        lineEdit15->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit15, 2, 4, 1, 1);

        lineEdit46 = new QLineEdit(gBoxInput);
        lineEdit46->setObjectName(QString::fromUtf8("lineEdit46"));
        lineEdit46->setFont(font);
        lineEdit46->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit46, 5, 5, 1, 1);

        lineEdit34 = new QLineEdit(gBoxInput);
        lineEdit34->setObjectName(QString::fromUtf8("lineEdit34"));
        lineEdit34->setFont(font);
        lineEdit34->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit34, 4, 3, 1, 1);

        lineEdit36 = new QLineEdit(gBoxInput);
        lineEdit36->setObjectName(QString::fromUtf8("lineEdit36"));
        lineEdit36->setFont(font);
        lineEdit36->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit36, 4, 5, 1, 1);

        lineEdit43 = new QLineEdit(gBoxInput);
        lineEdit43->setObjectName(QString::fromUtf8("lineEdit43"));
        lineEdit43->setFont(font);
        lineEdit43->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit43, 5, 2, 1, 1);

        lineEdit16 = new QLineEdit(gBoxInput);
        lineEdit16->setObjectName(QString::fromUtf8("lineEdit16"));
        lineEdit16->setFont(font);
        lineEdit16->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit16, 2, 5, 1, 1);

        lineEdit82 = new QLineEdit(gBoxInput);
        lineEdit82->setObjectName(QString::fromUtf8("lineEdit82"));
        lineEdit82->setFont(font);
        lineEdit82->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit82, 9, 1, 1, 1);

        lineEdit72 = new QLineEdit(gBoxInput);
        lineEdit72->setObjectName(QString::fromUtf8("lineEdit72"));
        lineEdit72->setFont(font);
        lineEdit72->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit72, 8, 1, 1, 1);

        lineEdit71 = new QLineEdit(gBoxInput);
        lineEdit71->setObjectName(QString::fromUtf8("lineEdit71"));
        lineEdit71->setFont(font1);
        lineEdit71->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit71, 8, 0, 1, 1);

        lineEdit14 = new QLineEdit(gBoxInput);
        lineEdit14->setObjectName(QString::fromUtf8("lineEdit14"));
        lineEdit14->setFont(font);
        lineEdit14->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit14, 2, 3, 1, 1);

        lineEdit73 = new QLineEdit(gBoxInput);
        lineEdit73->setObjectName(QString::fromUtf8("lineEdit73"));
        lineEdit73->setFont(font);
        lineEdit73->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit73, 8, 2, 1, 1);

        lineEdit41 = new QLineEdit(gBoxInput);
        lineEdit41->setObjectName(QString::fromUtf8("lineEdit41"));
        lineEdit41->setFont(font1);
        lineEdit41->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit41, 5, 0, 1, 1);

        lineEdit52 = new QLineEdit(gBoxInput);
        lineEdit52->setObjectName(QString::fromUtf8("lineEdit52"));
        lineEdit52->setFont(font);
        lineEdit52->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit52, 6, 1, 1, 1);

        label_3 = new QLabel(gBoxInput);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_3, 0, 5, 1, 2);

        lineEdit11 = new QLineEdit(gBoxInput);
        lineEdit11->setObjectName(QString::fromUtf8("lineEdit11"));
        lineEdit11->setFont(font1);
        lineEdit11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit11, 2, 0, 1, 1);

        lineEdit84 = new QLineEdit(gBoxInput);
        lineEdit84->setObjectName(QString::fromUtf8("lineEdit84"));
        lineEdit84->setFont(font);
        lineEdit84->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit84, 9, 3, 1, 1);

        lineEdit85 = new QLineEdit(gBoxInput);
        lineEdit85->setObjectName(QString::fromUtf8("lineEdit85"));
        lineEdit85->setFont(font);
        lineEdit85->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit85, 9, 4, 1, 1);

        label_r2 = new QLabel(gBoxInput);
        label_r2->setObjectName(QString::fromUtf8("label_r2"));
        label_r2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_r2, 1, 4, 1, 1);

        lineEdit66 = new QLineEdit(gBoxInput);
        lineEdit66->setObjectName(QString::fromUtf8("lineEdit66"));
        lineEdit66->setFont(font);
        lineEdit66->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit66, 7, 5, 1, 1);

        lineEdit35 = new QLineEdit(gBoxInput);
        lineEdit35->setObjectName(QString::fromUtf8("lineEdit35"));
        lineEdit35->setFont(font);
        lineEdit35->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit35, 4, 4, 1, 1);

        lineEdit77 = new QLineEdit(gBoxInput);
        lineEdit77->setObjectName(QString::fromUtf8("lineEdit77"));
        lineEdit77->setFont(font);
        lineEdit77->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit77, 8, 6, 1, 1);

        lineEdit13 = new QLineEdit(gBoxInput);
        lineEdit13->setObjectName(QString::fromUtf8("lineEdit13"));
        lineEdit13->setFont(font);
        lineEdit13->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit13, 2, 2, 1, 1);

        label_p2 = new QLabel(gBoxInput);
        label_p2->setObjectName(QString::fromUtf8("label_p2"));
        label_p2->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_p2, 1, 3, 1, 1);

        lineEdit37 = new QLineEdit(gBoxInput);
        lineEdit37->setObjectName(QString::fromUtf8("lineEdit37"));
        lineEdit37->setFont(font);
        lineEdit37->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit37, 4, 6, 1, 1);

        lineEdit91 = new QLineEdit(gBoxInput);
        lineEdit91->setObjectName(QString::fromUtf8("lineEdit91"));
        lineEdit91->setFont(font2);
        lineEdit91->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit91, 10, 0, 1, 1);

        lineEdit92 = new QLineEdit(gBoxInput);
        lineEdit92->setObjectName(QString::fromUtf8("lineEdit92"));
        lineEdit92->setFont(font);
        lineEdit92->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit92, 10, 1, 1, 1);

        lineEdit93 = new QLineEdit(gBoxInput);
        lineEdit93->setObjectName(QString::fromUtf8("lineEdit93"));
        lineEdit93->setFont(font);
        lineEdit93->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit93, 10, 2, 1, 1);

        lineEdit94 = new QLineEdit(gBoxInput);
        lineEdit94->setObjectName(QString::fromUtf8("lineEdit94"));
        lineEdit94->setFont(font);
        lineEdit94->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit94, 10, 3, 1, 1);

        lineEdit95 = new QLineEdit(gBoxInput);
        lineEdit95->setObjectName(QString::fromUtf8("lineEdit95"));
        lineEdit95->setFont(font);
        lineEdit95->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit95, 10, 4, 1, 1);

        lineEdit96 = new QLineEdit(gBoxInput);
        lineEdit96->setObjectName(QString::fromUtf8("lineEdit96"));
        lineEdit96->setFont(font);
        lineEdit96->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit96, 10, 5, 1, 1);

        lineEdit97 = new QLineEdit(gBoxInput);
        lineEdit97->setObjectName(QString::fromUtf8("lineEdit97"));
        lineEdit97->setFont(font);
        lineEdit97->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(lineEdit97, 10, 6, 1, 1);

        gBoxLsm = new QGroupBox(centralwidget);
        gBoxLsm->setObjectName(QString::fromUtf8("gBoxLsm"));
        gBoxLsm->setGeometry(QRect(600, 10, 561, 221));
        gBoxLsm->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(gBoxLsm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lineEditLsmB1 = new QLineEdit(gBoxLsm);
        lineEditLsmB1->setObjectName(QString::fromUtf8("lineEditLsmB1"));
        lineEditLsmB1->setAlignment(Qt::AlignCenter);
        lineEditLsmB1->setReadOnly(true);

        gridLayout->addWidget(lineEditLsmB1, 0, 2, 1, 1);

        LBleLsmX = new QLabel(gBoxLsm);
        LBleLsmX->setObjectName(QString::fromUtf8("LBleLsmX"));
        LBleLsmX->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBleLsmX, 0, 3, 1, 1);

        lineEditLsmB0 = new QLineEdit(gBoxLsm);
        lineEditLsmB0->setObjectName(QString::fromUtf8("lineEditLsmB0"));
        lineEditLsmB0->setAlignment(Qt::AlignCenter);
        lineEditLsmB0->setReadOnly(true);

        gridLayout->addWidget(lineEditLsmB0, 0, 4, 1, 1);

        LBleLsmFullScale = new QLabel(gBoxLsm);
        LBleLsmFullScale->setObjectName(QString::fromUtf8("LBleLsmFullScale"));
        LBleLsmFullScale->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBleLsmFullScale, 1, 0, 1, 2);

        lineEditLsmFS = new QLineEdit(gBoxLsm);
        lineEditLsmFS->setObjectName(QString::fromUtf8("lineEditLsmFS"));
        lineEditLsmFS->setAlignment(Qt::AlignCenter);
        lineEditLsmFS->setReadOnly(true);

        gridLayout->addWidget(lineEditLsmFS, 1, 2, 1, 3);

        LBleLsmLinearity = new QLabel(gBoxLsm);
        LBleLsmLinearity->setObjectName(QString::fromUtf8("LBleLsmLinearity"));
        LBleLsmLinearity->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBleLsmLinearity, 2, 0, 1, 2);

        lineEditLsmLine = new QLineEdit(gBoxLsm);
        lineEditLsmLine->setObjectName(QString::fromUtf8("lineEditLsmLine"));
        lineEditLsmLine->setAlignment(Qt::AlignCenter);
        lineEditLsmLine->setReadOnly(true);

        gridLayout->addWidget(lineEditLsmLine, 2, 2, 1, 3);

        label_4 = new QLabel(gBoxLsm);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 2, 5, 1, 1);

        LBleLsmHysteria = new QLabel(gBoxLsm);
        LBleLsmHysteria->setObjectName(QString::fromUtf8("LBleLsmHysteria"));
        LBleLsmHysteria->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBleLsmHysteria, 3, 0, 1, 2);

        lineEditLsmHysteria = new QLineEdit(gBoxLsm);
        lineEditLsmHysteria->setObjectName(QString::fromUtf8("lineEditLsmHysteria"));
        lineEditLsmHysteria->setAlignment(Qt::AlignCenter);
        lineEditLsmHysteria->setReadOnly(true);

        gridLayout->addWidget(lineEditLsmHysteria, 3, 2, 1, 3);

        label_5 = new QLabel(gBoxLsm);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 3, 5, 1, 1);

        LBleLsmRepeat = new QLabel(gBoxLsm);
        LBleLsmRepeat->setObjectName(QString::fromUtf8("LBleLsmRepeat"));
        LBleLsmRepeat->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBleLsmRepeat, 4, 0, 1, 2);

        lineEditLsmRepeat = new QLineEdit(gBoxLsm);
        lineEditLsmRepeat->setObjectName(QString::fromUtf8("lineEditLsmRepeat"));
        lineEditLsmRepeat->setAlignment(Qt::AlignCenter);
        lineEditLsmRepeat->setReadOnly(true);

        gridLayout->addWidget(lineEditLsmRepeat, 4, 2, 1, 3);

        label_6 = new QLabel(gBoxLsm);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 4, 5, 1, 1);

        LBleLsmY = new QLabel(gBoxLsm);
        LBleLsmY->setObjectName(QString::fromUtf8("LBleLsmY"));
        LBleLsmY->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(LBleLsmY, 0, 0, 1, 2);

        LBleCnFac = new QLabel(centralwidget);
        LBleCnFac->setObjectName(QString::fromUtf8("LBleCnFac"));
        LBleCnFac->setGeometry(QRect(30, 420, 81, 29));
        pBtnUpdate = new QPushButton(centralwidget);
        pBtnUpdate->setObjectName(QString::fromUtf8("pBtnUpdate"));
        pBtnUpdate->setGeometry(QRect(490, 420, 99, 29));
        lineEditK = new QLineEdit(centralwidget);
        lineEditK->setObjectName(QString::fromUtf8("lineEditK"));
        lineEditK->setGeometry(QRect(120, 420, 221, 25));
        lineEditK->setAlignment(Qt::AlignCenter);
        gBoxBiPoint = new QGroupBox(centralwidget);
        gBoxBiPoint->setObjectName(QString::fromUtf8("gBoxBiPoint"));
        gBoxBiPoint->setGeometry(QRect(600, 230, 561, 221));
        gBoxBiPoint->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(gBoxBiPoint);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lineEditBiPB1 = new QLineEdit(gBoxBiPoint);
        lineEditBiPB1->setObjectName(QString::fromUtf8("lineEditBiPB1"));
        lineEditBiPB1->setAlignment(Qt::AlignCenter);
        lineEditBiPB1->setReadOnly(true);

        gridLayout_3->addWidget(lineEditBiPB1, 0, 2, 1, 1);

        LBleBiPX = new QLabel(gBoxBiPoint);
        LBleBiPX->setObjectName(QString::fromUtf8("LBleBiPX"));
        LBleBiPX->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LBleBiPX, 0, 3, 1, 1);

        lineEditBiPB0 = new QLineEdit(gBoxBiPoint);
        lineEditBiPB0->setObjectName(QString::fromUtf8("lineEditBiPB0"));
        lineEditBiPB0->setAlignment(Qt::AlignCenter);
        lineEditBiPB0->setReadOnly(true);

        gridLayout_3->addWidget(lineEditBiPB0, 0, 4, 1, 1);

        LBleBiPFullScale = new QLabel(gBoxBiPoint);
        LBleBiPFullScale->setObjectName(QString::fromUtf8("LBleBiPFullScale"));
        LBleBiPFullScale->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LBleBiPFullScale, 1, 0, 1, 2);

        lineEditBiPFS = new QLineEdit(gBoxBiPoint);
        lineEditBiPFS->setObjectName(QString::fromUtf8("lineEditBiPFS"));
        lineEditBiPFS->setAlignment(Qt::AlignCenter);
        lineEditBiPFS->setReadOnly(true);

        gridLayout_3->addWidget(lineEditBiPFS, 1, 2, 1, 3);

        LBleBiPLinearity = new QLabel(gBoxBiPoint);
        LBleBiPLinearity->setObjectName(QString::fromUtf8("LBleBiPLinearity"));
        LBleBiPLinearity->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LBleBiPLinearity, 2, 0, 1, 2);

        lineEditBiPLine = new QLineEdit(gBoxBiPoint);
        lineEditBiPLine->setObjectName(QString::fromUtf8("lineEditBiPLine"));
        lineEditBiPLine->setAlignment(Qt::AlignCenter);
        lineEditBiPLine->setReadOnly(true);

        gridLayout_3->addWidget(lineEditBiPLine, 2, 2, 1, 3);

        label_8 = new QLabel(gBoxBiPoint);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_8, 2, 5, 1, 1);

        LBleBiPHysteria = new QLabel(gBoxBiPoint);
        LBleBiPHysteria->setObjectName(QString::fromUtf8("LBleBiPHysteria"));
        LBleBiPHysteria->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LBleBiPHysteria, 3, 0, 1, 2);

        lineEditBiPHysteria = new QLineEdit(gBoxBiPoint);
        lineEditBiPHysteria->setObjectName(QString::fromUtf8("lineEditBiPHysteria"));
        lineEditBiPHysteria->setAlignment(Qt::AlignCenter);
        lineEditBiPHysteria->setReadOnly(true);

        gridLayout_3->addWidget(lineEditBiPHysteria, 3, 2, 1, 3);

        label_9 = new QLabel(gBoxBiPoint);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_9, 3, 5, 1, 1);

        LBleLsmRepeat_2 = new QLabel(gBoxBiPoint);
        LBleLsmRepeat_2->setObjectName(QString::fromUtf8("LBleLsmRepeat_2"));
        LBleLsmRepeat_2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LBleLsmRepeat_2, 4, 0, 1, 2);

        lineEditBiPRepeat = new QLineEdit(gBoxBiPoint);
        lineEditBiPRepeat->setObjectName(QString::fromUtf8("lineEditBiPRepeat"));
        lineEditBiPRepeat->setAlignment(Qt::AlignCenter);
        lineEditBiPRepeat->setReadOnly(true);

        gridLayout_3->addWidget(lineEditBiPRepeat, 4, 2, 1, 3);

        label_10 = new QLabel(gBoxBiPoint);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_10, 4, 5, 1, 1);

        LBleBiPY = new QLabel(gBoxBiPoint);
        LBleBiPY->setObjectName(QString::fromUtf8("LBleBiPY"));
        LBleBiPY->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(LBleBiPY, 0, 0, 1, 2);

        gViewOrigin = new QtCharts::QChartView(centralwidget);
        gViewOrigin->setObjectName(QString::fromUtf8("gViewOrigin"));
        gViewOrigin->setGeometry(QRect(20, 460, 571, 351));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(210, 820, 771, 25));
        lineEdit->setInputMask(QString::fromUtf8(""));
        lineEdit->setText(QString::fromUtf8("\344\273\243\347\240\201\350\247\201\346\234\254\344\272\272\351\241\271\347\233\256\345\234\260\345\235\200    https://github.com/Sdyeepi/SensorStaticCalibration"));
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        gViewLsmBip = new QtCharts::QChartView(centralwidget);
        gViewLsmBip->setObjectName(QString::fromUtf8("gViewLsmBip"));
        gViewLsmBip->setGeometry(QRect(600, 460, 571, 351));
        pBtn1pVis = new QPushButton(centralwidget);
        pBtn1pVis->setObjectName(QString::fromUtf8("pBtn1pVis"));
        pBtn1pVis->setGeometry(QRect(20, 380, 71, 29));
        pBtn1rVis = new QPushButton(centralwidget);
        pBtn1rVis->setObjectName(QString::fromUtf8("pBtn1rVis"));
        pBtn1rVis->setGeometry(QRect(120, 380, 71, 29));
        pBtn2pVis = new QPushButton(centralwidget);
        pBtn2pVis->setObjectName(QString::fromUtf8("pBtn2pVis"));
        pBtn2pVis->setGeometry(QRect(220, 380, 71, 29));
        pBtn2rVis = new QPushButton(centralwidget);
        pBtn2rVis->setObjectName(QString::fromUtf8("pBtn2rVis"));
        pBtn2rVis->setGeometry(QRect(320, 380, 71, 29));
        pBtn3pVis = new QPushButton(centralwidget);
        pBtn3pVis->setObjectName(QString::fromUtf8("pBtn3pVis"));
        pBtn3pVis->setGeometry(QRect(420, 380, 71, 29));
        pBtn3rVis = new QPushButton(centralwidget);
        pBtn3rVis->setObjectName(QString::fromUtf8("pBtn3rVis"));
        pBtn3rVis->setGeometry(QRect(520, 380, 71, 29));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1192, 26));
        menu1 = new QMenu(menubar);
        menu1->setObjectName(QString::fromUtf8("menu1"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
#if QT_CONFIG(shortcut)
        LBleCnFac->setBuddy(lineEditK);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(lineEdit11, lineEdit21);
        QWidget::setTabOrder(lineEdit21, lineEdit31);
        QWidget::setTabOrder(lineEdit31, lineEdit41);
        QWidget::setTabOrder(lineEdit41, lineEdit51);
        QWidget::setTabOrder(lineEdit51, lineEdit61);
        QWidget::setTabOrder(lineEdit61, lineEdit71);
        QWidget::setTabOrder(lineEdit71, lineEdit81);
        QWidget::setTabOrder(lineEdit81, lineEdit91);
        QWidget::setTabOrder(lineEdit91, lineEdit12);
        QWidget::setTabOrder(lineEdit12, lineEdit22);
        QWidget::setTabOrder(lineEdit22, lineEdit32);
        QWidget::setTabOrder(lineEdit32, lineEdit42);
        QWidget::setTabOrder(lineEdit42, lineEdit52);
        QWidget::setTabOrder(lineEdit52, lineEdit62);
        QWidget::setTabOrder(lineEdit62, lineEdit72);
        QWidget::setTabOrder(lineEdit72, lineEdit82);
        QWidget::setTabOrder(lineEdit82, lineEdit92);
        QWidget::setTabOrder(lineEdit92, lineEdit13);
        QWidget::setTabOrder(lineEdit13, lineEdit23);
        QWidget::setTabOrder(lineEdit23, lineEdit33);
        QWidget::setTabOrder(lineEdit33, lineEdit43);
        QWidget::setTabOrder(lineEdit43, lineEdit53);
        QWidget::setTabOrder(lineEdit53, lineEdit63);
        QWidget::setTabOrder(lineEdit63, lineEdit73);
        QWidget::setTabOrder(lineEdit73, lineEdit83);
        QWidget::setTabOrder(lineEdit83, lineEdit93);
        QWidget::setTabOrder(lineEdit93, lineEdit14);
        QWidget::setTabOrder(lineEdit14, lineEdit24);
        QWidget::setTabOrder(lineEdit24, lineEdit34);
        QWidget::setTabOrder(lineEdit34, lineEdit44);
        QWidget::setTabOrder(lineEdit44, lineEdit54);
        QWidget::setTabOrder(lineEdit54, lineEdit64);
        QWidget::setTabOrder(lineEdit64, lineEdit74);
        QWidget::setTabOrder(lineEdit74, lineEdit84);
        QWidget::setTabOrder(lineEdit84, lineEdit94);
        QWidget::setTabOrder(lineEdit94, lineEdit15);
        QWidget::setTabOrder(lineEdit15, lineEdit25);
        QWidget::setTabOrder(lineEdit25, lineEdit35);
        QWidget::setTabOrder(lineEdit35, lineEdit45);
        QWidget::setTabOrder(lineEdit45, lineEdit55);
        QWidget::setTabOrder(lineEdit55, lineEdit65);
        QWidget::setTabOrder(lineEdit65, lineEdit75);
        QWidget::setTabOrder(lineEdit75, lineEdit85);
        QWidget::setTabOrder(lineEdit85, lineEdit95);
        QWidget::setTabOrder(lineEdit95, lineEdit16);
        QWidget::setTabOrder(lineEdit16, lineEdit26);
        QWidget::setTabOrder(lineEdit26, lineEdit36);
        QWidget::setTabOrder(lineEdit36, lineEdit46);
        QWidget::setTabOrder(lineEdit46, lineEdit56);
        QWidget::setTabOrder(lineEdit56, lineEdit66);
        QWidget::setTabOrder(lineEdit66, lineEdit76);
        QWidget::setTabOrder(lineEdit76, lineEdit86);
        QWidget::setTabOrder(lineEdit86, lineEdit96);
        QWidget::setTabOrder(lineEdit96, lineEdit17);
        QWidget::setTabOrder(lineEdit17, lineEdit27);
        QWidget::setTabOrder(lineEdit27, lineEdit37);
        QWidget::setTabOrder(lineEdit37, lineEdit47);
        QWidget::setTabOrder(lineEdit47, lineEdit57);
        QWidget::setTabOrder(lineEdit57, lineEdit67);
        QWidget::setTabOrder(lineEdit67, lineEdit77);
        QWidget::setTabOrder(lineEdit77, lineEdit87);
        QWidget::setTabOrder(lineEdit87, lineEdit97);
        QWidget::setTabOrder(lineEdit97, lineEditK);
        QWidget::setTabOrder(lineEditK, pBtnUpdate);
        QWidget::setTabOrder(pBtnUpdate, pBtn1pVis);
        QWidget::setTabOrder(pBtn1pVis, pBtn1rVis);
        QWidget::setTabOrder(pBtn1rVis, pBtn2pVis);
        QWidget::setTabOrder(pBtn2pVis, pBtn2rVis);
        QWidget::setTabOrder(pBtn2rVis, pBtn3pVis);
        QWidget::setTabOrder(pBtn3pVis, pBtn3rVis);
        QWidget::setTabOrder(pBtn3rVis, lineEditLsmB1);
        QWidget::setTabOrder(lineEditLsmB1, lineEditLsmB0);
        QWidget::setTabOrder(lineEditLsmB0, lineEditLsmFS);
        QWidget::setTabOrder(lineEditLsmFS, lineEditLsmLine);
        QWidget::setTabOrder(lineEditLsmLine, lineEditLsmHysteria);
        QWidget::setTabOrder(lineEditLsmHysteria, lineEditLsmRepeat);
        QWidget::setTabOrder(lineEditLsmRepeat, lineEditBiPB1);
        QWidget::setTabOrder(lineEditBiPB1, lineEditBiPB0);
        QWidget::setTabOrder(lineEditBiPB0, lineEditBiPFS);
        QWidget::setTabOrder(lineEditBiPFS, lineEditBiPLine);
        QWidget::setTabOrder(lineEditBiPLine, lineEditBiPHysteria);
        QWidget::setTabOrder(lineEditBiPHysteria, lineEditBiPRepeat);
        QWidget::setTabOrder(lineEditBiPRepeat, gViewOrigin);
        QWidget::setTabOrder(gViewOrigin, gViewLsmBip);
        QWidget::setTabOrder(gViewLsmBip, lineEdit);

        menubar->addAction(menu1->menuAction());
        menu1->addAction(action_datain);
        menu1->addAction(action_dataout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SensorStaticCalibration", nullptr));
        action_datain->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\205\245\346\225\260\346\215\256", nullptr));
        action_dataout->setText(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
#if QT_CONFIG(tooltip)
        action_dataout->setToolTip(QCoreApplication::translate("MainWindow", "\345\257\274\345\207\272\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
        gBoxInput->setTitle(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245\346\225\260\346\215\256\357\274\210\350\257\267\345\210\207\346\215\242\350\213\261\346\226\207\350\276\223\345\205\245\346\263\225\357\274\214\344\270\224\345\217\252\350\276\223\345\205\245\346\225\260\345\255\227\344\270\216\345\260\217\346\225\260\347\202\271\357\274\211", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\272\214\346\254\241", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\200\346\254\241", nullptr));
        label_r3->setText(QCoreApplication::translate("MainWindow", "\345\233\236\347\250\213/mV", nullptr));
        label_p1->setText(QCoreApplication::translate("MainWindow", "\346\255\243\347\250\213/mV", nullptr));
        labelx->setText(QCoreApplication::translate("MainWindow", "\350\276\223\345\205\245/MPa", nullptr));
        label_r1->setText(QCoreApplication::translate("MainWindow", "\345\233\236\347\250\213/mV", nullptr));
        label_p3->setText(QCoreApplication::translate("MainWindow", "\346\255\243\347\250\213/mV", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\211\346\254\241", nullptr));
        label_r2->setText(QCoreApplication::translate("MainWindow", "\345\233\236\347\250\213/mV", nullptr));
        label_p2->setText(QCoreApplication::translate("MainWindow", "\346\255\243\347\250\213/mV", nullptr));
        gBoxLsm->setTitle(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\344\272\214\344\271\230\346\263\225", nullptr));
        LBleLsmX->setText(QCoreApplication::translate("MainWindow", "x   +", nullptr));
        LBleLsmFullScale->setText(QCoreApplication::translate("MainWindow", "\346\273\241\351\207\217\347\250\213\350\276\223\345\207\272\357\274\232    YFS =", nullptr));
        LBleLsmLinearity->setText(QCoreApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\357\274\232        \316\264L =", nullptr));
#if QT_CONFIG(tooltip)
        lineEditLsmLine->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        lineEditLsmLine->setPlaceholderText(QString());
        label_4->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        LBleLsmHysteria->setText(QCoreApplication::translate("MainWindow", "\350\277\237\346\273\236\346\200\247\357\274\232        \316\264H =", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        LBleLsmRepeat->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\244\215\346\200\247\357\274\232        \316\264R =", nullptr));
#if QT_CONFIG(tooltip)
        lineEditLsmRepeat->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\223\344\270\2721\347\273\204\346\255\243\345\217\215\350\241\214\347\250\213\346\210\226\346\262\241\346\234\211\346\227\266\357\274\214\347\224\261\344\272\216\350\264\235\345\241\236\345\260\224\345\205\254\345\274\217\344\274\232\346\230\276\347\244\272non", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditLsmRepeat->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\202\254\346\265\256\344\272\216\346\255\244\350\216\267\345\276\227\350\257\245\351\241\271\350\257\264\346\230\216", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        LBleLsmY->setText(QCoreApplication::translate("MainWindow", "\346\234\200\345\260\217\344\272\214\344\271\230\347\233\264\347\272\277\357\274\232  y   =", nullptr));
        LBleCnFac->setText(QCoreApplication::translate("MainWindow", "\347\275\256\344\277\241\345\233\240\345\255\220&K\357\274\232", nullptr));
#if QT_CONFIG(tooltip)
        pBtnUpdate->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\344\273\245\350\256\241\347\256\227\346\210\226\350\200\205\346\233\264\346\226\260\346\225\260\346\215\256", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtnUpdate->setText(QCoreApplication::translate("MainWindow", "\350\256\241\347\256\227\357\274\210\346\233\264\346\226\260\357\274\211", nullptr));
        lineEditK->setPlaceholderText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\2443\357\274\214\345\217\257\350\256\276\347\275\256\357\274\210\345\277\253\346\215\267\351\224\256Alt+K)", nullptr));
        gBoxBiPoint->setTitle(QCoreApplication::translate("MainWindow", "\344\270\244\347\253\257\347\202\271\346\263\225", nullptr));
        LBleBiPX->setText(QCoreApplication::translate("MainWindow", "x   +", nullptr));
        LBleBiPFullScale->setText(QCoreApplication::translate("MainWindow", "\346\273\241\351\207\217\347\250\213\350\276\223\345\207\272\357\274\232    YFS =", nullptr));
        LBleBiPLinearity->setText(QCoreApplication::translate("MainWindow", "\351\235\236\347\272\277\346\200\247\357\274\232        \316\264L =", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        LBleBiPHysteria->setText(QCoreApplication::translate("MainWindow", "\350\277\237\346\273\236\346\200\247\357\274\232        \316\264H =", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        LBleLsmRepeat_2->setText(QCoreApplication::translate("MainWindow", "\351\207\215\345\244\215\346\200\247\357\274\232        \316\264R =", nullptr));
#if QT_CONFIG(tooltip)
        lineEditBiPRepeat->setToolTip(QCoreApplication::translate("MainWindow", "\345\275\223\344\270\2721\347\273\204\346\255\243\345\217\215\350\241\214\347\250\213\346\210\226\346\262\241\346\234\211\346\227\266\357\274\214\347\224\261\344\272\216\350\264\235\345\241\236\345\260\224\345\205\254\345\274\217\344\274\232\346\230\276\347\244\272non", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditBiPRepeat->setPlaceholderText(QCoreApplication::translate("MainWindow", "\346\202\254\346\265\256\344\272\216\346\255\244\350\216\267\345\276\227\350\257\245\351\241\271\350\257\264\346\230\216", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        LBleBiPY->setText(QCoreApplication::translate("MainWindow", "\344\270\244\347\253\257\347\202\271\346\263\225\347\233\264\347\272\277\357\274\232  y   =", nullptr));
#if QT_CONFIG(tooltip)
        gViewOrigin->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\351\224\256\346\241\206\351\200\211\346\224\276\345\244\247\345\233\276\345\203\217\357\274\214\345\217\263\351\224\256\345\215\225\345\207\273\347\274\251\345\260\217\345\233\276\345\203\217\357\274\214\345\217\257\351\207\215\346\226\260\347\202\271\345\207\273\350\256\241\347\256\227\357\274\210\346\233\264\346\226\260\357\274\211\346\201\242\345\244\215\345\216\237\345\203\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEdit->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        gViewLsmBip->setToolTip(QCoreApplication::translate("MainWindow", "\345\267\246\351\224\256\346\241\206\351\200\211\346\224\276\345\244\247\345\233\276\345\203\217\357\274\214\345\217\263\351\224\256\345\215\225\345\207\273\347\274\251\345\260\217\345\233\276\345\203\217\357\274\214\345\217\257\351\207\215\346\226\260\347\202\271\345\207\273\350\256\241\347\256\227\357\274\210\346\233\264\346\226\260\357\274\211\346\201\242\345\244\215\345\216\237\345\203\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        pBtn1pVis->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\345\217\257\351\200\211\346\213\251\345\234\250\344\270\213\345\233\276\344\270\255\345\216\237\345\247\213\346\225\260\346\215\256\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtn1pVis->setText(QCoreApplication::translate("MainWindow", "1\346\255\243\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        pBtn1rVis->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\345\217\257\351\200\211\346\213\251\345\234\250\344\270\213\345\233\276\344\270\255\345\216\237\345\247\213\346\225\260\346\215\256\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtn1rVis->setText(QCoreApplication::translate("MainWindow", "1\345\217\215\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        pBtn2pVis->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\345\217\257\351\200\211\346\213\251\345\234\250\344\270\213\345\233\276\344\270\255\345\216\237\345\247\213\346\225\260\346\215\256\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtn2pVis->setText(QCoreApplication::translate("MainWindow", "2\346\255\243\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        pBtn2rVis->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\345\217\257\351\200\211\346\213\251\345\234\250\344\270\213\345\233\276\344\270\255\345\216\237\345\247\213\346\225\260\346\215\256\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtn2rVis->setText(QCoreApplication::translate("MainWindow", "2\345\217\215\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        pBtn3pVis->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\345\217\257\351\200\211\346\213\251\345\234\250\344\270\213\345\233\276\344\270\255\345\216\237\345\247\213\346\225\260\346\215\256\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtn3pVis->setText(QCoreApplication::translate("MainWindow", "3\346\255\243\345\217\257\350\247\206", nullptr));
#if QT_CONFIG(tooltip)
        pBtn3rVis->setToolTip(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\345\217\257\351\200\211\346\213\251\345\234\250\344\270\213\345\233\276\344\270\255\345\216\237\345\247\213\346\225\260\346\215\256\346\230\257\345\220\246\345\217\257\350\247\201", nullptr));
#endif // QT_CONFIG(tooltip)
        pBtn3rVis->setText(QCoreApplication::translate("MainWindow", "3\345\217\215\345\217\257\350\247\206", nullptr));
        menu1->setTitle(QCoreApplication::translate("MainWindow", "\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
