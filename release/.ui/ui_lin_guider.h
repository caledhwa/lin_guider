/********************************************************************************
** Form generated from reading UI file 'lin_guider.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIN_GUIDER_H
#define UI_LIN_GUIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lin_guiderClass
{
public:
    QAction *actionSetupDriver;
    QAction *actionSetupGuider;
    QAction *actionCalibration;
    QAction *actionGuiding;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionRecord;
    QAction *actionSettings;
    QAction *action_Toggle_Calibration_Guider;
    QAction *actionAdjust2fitCamera;
    QWidget *centralwidget;
    QFrame *videoFrame;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuSetup;
    QMenu *menuProcessing;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar_Main;
    QToolBar *toolBar_Helper;

    void setupUi(QMainWindow *lin_guiderClass)
    {
        if (lin_guiderClass->objectName().isEmpty())
            lin_guiderClass->setObjectName(QString::fromUtf8("lin_guiderClass"));
        lin_guiderClass->resize(645, 500);
        lin_guiderClass->setMinimumSize(QSize(360, 260));
        actionSetupDriver = new QAction(lin_guiderClass);
        actionSetupDriver->setObjectName(QString::fromUtf8("actionSetupDriver"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/driver.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetupDriver->setIcon(icon);
        actionSetupDriver->setIconVisibleInMenu(true);
        actionSetupGuider = new QAction(lin_guiderClass);
        actionSetupGuider->setObjectName(QString::fromUtf8("actionSetupGuider"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/video.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSetupGuider->setIcon(icon1);
        actionSetupGuider->setIconVisibleInMenu(true);
        actionCalibration = new QAction(lin_guiderClass);
        actionCalibration->setObjectName(QString::fromUtf8("actionCalibration"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/calibration.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalibration->setIcon(icon2);
        actionCalibration->setIconVisibleInMenu(true);
        actionGuiding = new QAction(lin_guiderClass);
        actionGuiding->setObjectName(QString::fromUtf8("actionGuiding"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/prefix1/guiding.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionGuiding->setIcon(icon3);
        actionGuiding->setIconVisibleInMenu(true);
        actionExit = new QAction(lin_guiderClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setEnabled(true);
        actionExit->setIconVisibleInMenu(true);
        actionAbout = new QAction(lin_guiderClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon4);
        actionAbout->setIconVisibleInMenu(true);
        actionRecord = new QAction(lin_guiderClass);
        actionRecord->setObjectName(QString::fromUtf8("actionRecord"));
        actionRecord->setEnabled(true);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/record.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRecord->setIcon(icon5);
        actionRecord->setIconVisibleInMenu(true);
        actionSettings = new QAction(lin_guiderClass);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionSettings->setEnabled(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon6);
        actionSettings->setIconVisibleInMenu(true);
        action_Toggle_Calibration_Guider = new QAction(lin_guiderClass);
        action_Toggle_Calibration_Guider->setObjectName(QString::fromUtf8("action_Toggle_Calibration_Guider"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/prefix1/calibr2guider.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_Toggle_Calibration_Guider->setIcon(icon7);
        actionAdjust2fitCamera = new QAction(lin_guiderClass);
        actionAdjust2fitCamera->setObjectName(QString::fromUtf8("actionAdjust2fitCamera"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/prefix1/adjust2fit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdjust2fitCamera->setIcon(icon8);
        centralwidget = new QWidget(lin_guiderClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        videoFrame = new QFrame(centralwidget);
        videoFrame->setObjectName(QString::fromUtf8("videoFrame"));
        videoFrame->setGeometry(QRect(9, 9, 161, 121));
        videoFrame->setFrameShape(QFrame::StyledPanel);
        videoFrame->setFrameShadow(QFrame::Raised);
        lin_guiderClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lin_guiderClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 645, 23));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuSetup = new QMenu(menubar);
        menuSetup->setObjectName(QString::fromUtf8("menuSetup"));
        menuProcessing = new QMenu(menubar);
        menuProcessing->setObjectName(QString::fromUtf8("menuProcessing"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        lin_guiderClass->setMenuBar(menubar);
        statusbar = new QStatusBar(lin_guiderClass);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        lin_guiderClass->setStatusBar(statusbar);
        toolBar_Main = new QToolBar(lin_guiderClass);
        toolBar_Main->setObjectName(QString::fromUtf8("toolBar_Main"));
        toolBar_Main->setEnabled(true);
        toolBar_Main->setIconSize(QSize(24, 24));
        lin_guiderClass->addToolBar(Qt::TopToolBarArea, toolBar_Main);
        toolBar_Helper = new QToolBar(lin_guiderClass);
        toolBar_Helper->setObjectName(QString::fromUtf8("toolBar_Helper"));
        lin_guiderClass->addToolBar(Qt::TopToolBarArea, toolBar_Helper);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuSetup->menuAction());
        menubar->addAction(menuProcessing->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionExit);
        menuSetup->addAction(actionSetupGuider);
        menuSetup->addAction(actionSetupDriver);
        menuSetup->addAction(actionSettings);
        menuProcessing->addAction(actionRecord);
        menuProcessing->addSeparator();
        menuProcessing->addAction(actionCalibration);
        menuProcessing->addAction(actionGuiding);
        menuHelp->addAction(actionAbout);
        toolBar_Main->addAction(actionSetupGuider);
        toolBar_Main->addAction(actionSetupDriver);
        toolBar_Main->addAction(actionSettings);
        toolBar_Main->addSeparator();
        toolBar_Main->addAction(actionRecord);
        toolBar_Main->addSeparator();
        toolBar_Main->addAction(actionCalibration);
        toolBar_Main->addAction(actionGuiding);
        toolBar_Main->addSeparator();
        toolBar_Main->addAction(actionAbout);
        toolBar_Helper->addAction(action_Toggle_Calibration_Guider);
        toolBar_Helper->addAction(actionAdjust2fitCamera);

        retranslateUi(lin_guiderClass);

        QMetaObject::connectSlotsByName(lin_guiderClass);
    } // setupUi

    void retranslateUi(QMainWindow *lin_guiderClass)
    {
        lin_guiderClass->setWindowTitle(QApplication::translate("lin_guiderClass", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionSetupDriver->setText(QApplication::translate("lin_guiderClass", "Pulse Dev&ice Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetupDriver->setToolTip(QApplication::translate("lin_guiderClass", "Pulse Device Settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSetupGuider->setText(QApplication::translate("lin_guiderClass", "&Video Settings", 0, QApplication::UnicodeUTF8));
        actionSetupGuider->setIconText(QApplication::translate("lin_guiderClass", "Video Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSetupGuider->setToolTip(QApplication::translate("lin_guiderClass", "Video Settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionCalibration->setText(QApplication::translate("lin_guiderClass", "&Calibration", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionCalibration->setToolTip(QApplication::translate("lin_guiderClass", "Calibration", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionGuiding->setText(QApplication::translate("lin_guiderClass", "&Guiding", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionGuiding->setToolTip(QApplication::translate("lin_guiderClass", "Guiding", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionExit->setText(QApplication::translate("lin_guiderClass", "E&xit", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("lin_guiderClass", "&About Lin-guider", 0, QApplication::UnicodeUTF8));
        actionAbout->setIconText(QApplication::translate("lin_guiderClass", "About Lin-guider", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("lin_guiderClass", "About Lin-guider", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionRecord->setText(QApplication::translate("lin_guiderClass", "Movie &Record", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("lin_guiderClass", "General &Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSettings->setToolTip(QApplication::translate("lin_guiderClass", "General Settings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        action_Toggle_Calibration_Guider->setText(QApplication::translate("lin_guiderClass", "&Toggle Calibration<->Guider", 0, QApplication::UnicodeUTF8));
        actionAdjust2fitCamera->setText(QApplication::translate("lin_guiderClass", "Ad&just to fit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionAdjust2fitCamera->setToolTip(QApplication::translate("lin_guiderClass", "Adjust to fit camera view", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        menuFile->setTitle(QApplication::translate("lin_guiderClass", "&File", 0, QApplication::UnicodeUTF8));
        menuSetup->setTitle(QApplication::translate("lin_guiderClass", "&Setup", 0, QApplication::UnicodeUTF8));
        menuProcessing->setTitle(QApplication::translate("lin_guiderClass", "&Processing", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("lin_guiderClass", "&Help", 0, QApplication::UnicodeUTF8));
        toolBar_Main->setWindowTitle(QApplication::translate("lin_guiderClass", "toolBar", 0, QApplication::UnicodeUTF8));
        toolBar_Helper->setWindowTitle(QApplication::translate("lin_guiderClass", "toolBar_2", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class lin_guiderClass: public Ui_lin_guiderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIN_GUIDER_H
