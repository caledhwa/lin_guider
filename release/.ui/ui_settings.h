/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_settingsClass
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QGroupBox *groupBox_UDPNotifications;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_ImageQuality;
    QLineEdit *lineEdit_Port;
    QLabel *l_1;
    QCheckBox *checkBox_DriftData;
    QCheckBox *checkBox_GuidingStability;
    QCheckBox *checkBox_StartStop;
    QLabel *l_2;
    QLineEdit *lineEdit_IP;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_Server;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_lsocket;
    QCheckBox *checkBox_useTCP;
    QLabel *l_lsocket;
    QLabel *l_lport;
    QLineEdit *lineEdit_TCPPort;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_Misc;
    QGridLayout *gridLayout_2;
    QCheckBox *checkBox_DBGVerbosity;
    QComboBox *comboBox_DriftGraph_nx;
    QSpinBox *spinBox_DitherRange;
    QLabel *label_2;
    QLabel *label_1;
    QSpinBox *spinBox_DitherRestTout;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QComboBox *comboBox_DriftGraph_ny;
    QCheckBox *checkBox_ShowHelperTB;
    QCheckBox *checkBox_HFD_on;

    void setupUi(QDialog *settingsClass)
    {
        if (settingsClass->objectName().isEmpty())
            settingsClass->setObjectName(QString::fromUtf8("settingsClass"));
        settingsClass->resize(654, 337);
        settingsClass->setMinimumSize(QSize(0, 0));
        settingsClass->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(settingsClass);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(221, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_OK = new QPushButton(settingsClass);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        horizontalLayout_2->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(settingsClass);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        horizontalLayout_2->addWidget(pushButton_Cancel);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 3);

        groupBox_UDPNotifications = new QGroupBox(settingsClass);
        groupBox_UDPNotifications->setObjectName(QString::fromUtf8("groupBox_UDPNotifications"));
        groupBox_UDPNotifications->setCheckable(false);
        groupBox_UDPNotifications->setChecked(false);
        gridLayout_3 = new QGridLayout(groupBox_UDPNotifications);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBox_ImageQuality = new QCheckBox(groupBox_UDPNotifications);
        checkBox_ImageQuality->setObjectName(QString::fromUtf8("checkBox_ImageQuality"));

        gridLayout_3->addWidget(checkBox_ImageQuality, 4, 0, 1, 2);

        lineEdit_Port = new QLineEdit(groupBox_UDPNotifications);
        lineEdit_Port->setObjectName(QString::fromUtf8("lineEdit_Port"));

        gridLayout_3->addWidget(lineEdit_Port, 0, 3, 1, 1);

        l_1 = new QLabel(groupBox_UDPNotifications);
        l_1->setObjectName(QString::fromUtf8("l_1"));

        gridLayout_3->addWidget(l_1, 0, 0, 1, 1);

        checkBox_DriftData = new QCheckBox(groupBox_UDPNotifications);
        checkBox_DriftData->setObjectName(QString::fromUtf8("checkBox_DriftData"));

        gridLayout_3->addWidget(checkBox_DriftData, 4, 2, 1, 2);

        checkBox_GuidingStability = new QCheckBox(groupBox_UDPNotifications);
        checkBox_GuidingStability->setObjectName(QString::fromUtf8("checkBox_GuidingStability"));

        gridLayout_3->addWidget(checkBox_GuidingStability, 2, 2, 1, 2);

        checkBox_StartStop = new QCheckBox(groupBox_UDPNotifications);
        checkBox_StartStop->setObjectName(QString::fromUtf8("checkBox_StartStop"));

        gridLayout_3->addWidget(checkBox_StartStop, 2, 0, 1, 2);

        l_2 = new QLabel(groupBox_UDPNotifications);
        l_2->setObjectName(QString::fromUtf8("l_2"));

        gridLayout_3->addWidget(l_2, 0, 2, 1, 1);

        lineEdit_IP = new QLineEdit(groupBox_UDPNotifications);
        lineEdit_IP->setObjectName(QString::fromUtf8("lineEdit_IP"));

        gridLayout_3->addWidget(lineEdit_IP, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_3->addItem(verticalSpacer, 5, 0, 1, 3);


        gridLayout->addWidget(groupBox_UDPNotifications, 0, 0, 1, 2);

        groupBox_Server = new QGroupBox(settingsClass);
        groupBox_Server->setObjectName(QString::fromUtf8("groupBox_Server"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_Server->sizePolicy().hasHeightForWidth());
        groupBox_Server->setSizePolicy(sizePolicy);
        groupBox_Server->setCheckable(false);
        groupBox_Server->setChecked(false);
        gridLayout_5 = new QGridLayout(groupBox_Server);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lineEdit_lsocket = new QLineEdit(groupBox_Server);
        lineEdit_lsocket->setObjectName(QString::fromUtf8("lineEdit_lsocket"));
        lineEdit_lsocket->setMaxLength(255);

        gridLayout_5->addWidget(lineEdit_lsocket, 0, 3, 1, 2);

        checkBox_useTCP = new QCheckBox(groupBox_Server);
        checkBox_useTCP->setObjectName(QString::fromUtf8("checkBox_useTCP"));

        gridLayout_5->addWidget(checkBox_useTCP, 4, 0, 1, 1);

        l_lsocket = new QLabel(groupBox_Server);
        l_lsocket->setObjectName(QString::fromUtf8("l_lsocket"));

        gridLayout_5->addWidget(l_lsocket, 0, 0, 1, 1);

        l_lport = new QLabel(groupBox_Server);
        l_lport->setObjectName(QString::fromUtf8("l_lport"));

        gridLayout_5->addWidget(l_lport, 4, 3, 1, 1);

        lineEdit_TCPPort = new QLineEdit(groupBox_Server);
        lineEdit_TCPPort->setObjectName(QString::fromUtf8("lineEdit_TCPPort"));

        gridLayout_5->addWidget(lineEdit_TCPPort, 4, 4, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(verticalSpacer_2, 12, 0, 1, 1);


        gridLayout->addWidget(groupBox_Server, 0, 2, 1, 1);

        groupBox_Misc = new QGroupBox(settingsClass);
        groupBox_Misc->setObjectName(QString::fromUtf8("groupBox_Misc"));
        gridLayout_2 = new QGridLayout(groupBox_Misc);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        checkBox_DBGVerbosity = new QCheckBox(groupBox_Misc);
        checkBox_DBGVerbosity->setObjectName(QString::fromUtf8("checkBox_DBGVerbosity"));

        gridLayout_2->addWidget(checkBox_DBGVerbosity, 7, 3, 1, 1);

        comboBox_DriftGraph_nx = new QComboBox(groupBox_Misc);
        comboBox_DriftGraph_nx->setObjectName(QString::fromUtf8("comboBox_DriftGraph_nx"));

        gridLayout_2->addWidget(comboBox_DriftGraph_nx, 7, 0, 1, 1);

        spinBox_DitherRange = new QSpinBox(groupBox_Misc);
        spinBox_DitherRange->setObjectName(QString::fromUtf8("spinBox_DitherRange"));
        spinBox_DitherRange->setMinimum(3);
        spinBox_DitherRange->setMaximum(16);
        spinBox_DitherRange->setValue(5);

        gridLayout_2->addWidget(spinBox_DitherRange, 5, 0, 1, 1);

        label_2 = new QLabel(groupBox_Misc);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        label_1 = new QLabel(groupBox_Misc);
        label_1->setObjectName(QString::fromUtf8("label_1"));

        gridLayout_2->addWidget(label_1, 1, 0, 1, 1);

        spinBox_DitherRestTout = new QSpinBox(groupBox_Misc);
        spinBox_DitherRestTout->setObjectName(QString::fromUtf8("spinBox_DitherRestTout"));
        spinBox_DitherRestTout->setMaximum(10);
        spinBox_DitherRestTout->setValue(3);

        gridLayout_2->addWidget(spinBox_DitherRestTout, 5, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_3, 10, 0, 1, 1);

        label_3 = new QLabel(groupBox_Misc);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 5, 2, 1, 1);

        label_4 = new QLabel(groupBox_Misc);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 6, 1, 1, 1);

        comboBox_DriftGraph_ny = new QComboBox(groupBox_Misc);
        comboBox_DriftGraph_ny->setObjectName(QString::fromUtf8("comboBox_DriftGraph_ny"));

        gridLayout_2->addWidget(comboBox_DriftGraph_ny, 7, 1, 1, 1);

        checkBox_ShowHelperTB = new QCheckBox(groupBox_Misc);
        checkBox_ShowHelperTB->setObjectName(QString::fromUtf8("checkBox_ShowHelperTB"));

        gridLayout_2->addWidget(checkBox_ShowHelperTB, 6, 3, 1, 1);

        checkBox_HFD_on = new QCheckBox(groupBox_Misc);
        checkBox_HFD_on->setObjectName(QString::fromUtf8("checkBox_HFD_on"));

        gridLayout_2->addWidget(checkBox_HFD_on, 5, 3, 1, 1);


        gridLayout->addWidget(groupBox_Misc, 2, 0, 1, 3);

        QWidget::setTabOrder(lineEdit_IP, lineEdit_Port);
        QWidget::setTabOrder(lineEdit_Port, checkBox_StartStop);
        QWidget::setTabOrder(checkBox_StartStop, checkBox_GuidingStability);
        QWidget::setTabOrder(checkBox_GuidingStability, checkBox_ImageQuality);
        QWidget::setTabOrder(checkBox_ImageQuality, checkBox_DriftData);
        QWidget::setTabOrder(checkBox_DriftData, lineEdit_lsocket);
        QWidget::setTabOrder(lineEdit_lsocket, checkBox_useTCP);
        QWidget::setTabOrder(checkBox_useTCP, lineEdit_TCPPort);
        QWidget::setTabOrder(lineEdit_TCPPort, spinBox_DitherRange);
        QWidget::setTabOrder(spinBox_DitherRange, spinBox_DitherRestTout);
        QWidget::setTabOrder(spinBox_DitherRestTout, comboBox_DriftGraph_nx);
        QWidget::setTabOrder(comboBox_DriftGraph_nx, comboBox_DriftGraph_ny);
        QWidget::setTabOrder(comboBox_DriftGraph_ny, checkBox_HFD_on);
        QWidget::setTabOrder(checkBox_HFD_on, checkBox_ShowHelperTB);
        QWidget::setTabOrder(checkBox_ShowHelperTB, checkBox_DBGVerbosity);
        QWidget::setTabOrder(checkBox_DBGVerbosity, pushButton_OK);
        QWidget::setTabOrder(pushButton_OK, pushButton_Cancel);

        retranslateUi(settingsClass);
        QObject::connect(checkBox_useTCP, SIGNAL(toggled(bool)), lineEdit_TCPPort, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_useTCP, SIGNAL(toggled(bool)), lineEdit_lsocket, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(settingsClass);
    } // setupUi

    void retranslateUi(QDialog *settingsClass)
    {
        settingsClass->setWindowTitle(QApplication::translate("settingsClass", "settings", 0, QApplication::UnicodeUTF8));
        pushButton_OK->setText(QApplication::translate("settingsClass", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("settingsClass", "Cancel", 0, QApplication::UnicodeUTF8));
        groupBox_UDPNotifications->setTitle(QApplication::translate("settingsClass", "UDP notifications", 0, QApplication::UnicodeUTF8));
        checkBox_ImageQuality->setText(QApplication::translate("settingsClass", "image quality", 0, QApplication::UnicodeUTF8));
        lineEdit_Port->setInputMask(QApplication::translate("settingsClass", "00000; ", 0, QApplication::UnicodeUTF8));
        l_1->setText(QApplication::translate("settingsClass", "IP", 0, QApplication::UnicodeUTF8));
        checkBox_DriftData->setText(QApplication::translate("settingsClass", "drift data", 0, QApplication::UnicodeUTF8));
        checkBox_GuidingStability->setText(QApplication::translate("settingsClass", "guiding stability", 0, QApplication::UnicodeUTF8));
        checkBox_StartStop->setText(QApplication::translate("settingsClass", "start/stop", 0, QApplication::UnicodeUTF8));
        l_2->setText(QApplication::translate("settingsClass", "Port", 0, QApplication::UnicodeUTF8));
        lineEdit_IP->setInputMask(QApplication::translate("settingsClass", "000.000.000.000;_", 0, QApplication::UnicodeUTF8));
        groupBox_Server->setTitle(QApplication::translate("settingsClass", "Command Server", 0, QApplication::UnicodeUTF8));
        lineEdit_lsocket->setInputMask(QString());
        checkBox_useTCP->setText(QApplication::translate("settingsClass", "use  TCP", 0, QApplication::UnicodeUTF8));
        l_lsocket->setText(QApplication::translate("settingsClass", "Unix Socket", 0, QApplication::UnicodeUTF8));
        l_lport->setText(QApplication::translate("settingsClass", "Listen Port", 0, QApplication::UnicodeUTF8));
        lineEdit_TCPPort->setInputMask(QApplication::translate("settingsClass", "00000; ", 0, QApplication::UnicodeUTF8));
        groupBox_Misc->setTitle(QApplication::translate("settingsClass", "Miscellaneous", 0, QApplication::UnicodeUTF8));
        checkBox_DBGVerbosity->setText(QApplication::translate("settingsClass", "debug verbosity", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("settingsClass", "Dithering timeout, sec", 0, QApplication::UnicodeUTF8));
        label_1->setText(QApplication::translate("settingsClass", "Dithering range, pix", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("settingsClass", "Drift graph X cells", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("settingsClass", "Drift graph Y cells", 0, QApplication::UnicodeUTF8));
        checkBox_ShowHelperTB->setText(QApplication::translate("settingsClass", "show Helper toolbar", 0, QApplication::UnicodeUTF8));
        checkBox_HFD_on->setText(QApplication::translate("settingsClass", "calculate HFD", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class settingsClass: public Ui_settingsClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
