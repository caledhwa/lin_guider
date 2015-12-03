/********************************************************************************
** Form generated from reading UI file 'setup_driver.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_DRIVER_H
#define UI_SETUP_DRIVER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_setup_driverClass
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QSpinBox *spinBox_DT;
    QLabel *label_10;
    QPushButton *testButton;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QGridLayout *gridLayout_3;
    QPushButton *RA_DEC_Button;
    QPushButton *RA_INC_Button;
    QPushButton *DEC_INC_Button;
    QPushButton *DEC_DEC_Button;
    QLabel *label_9;
    QComboBox *comboBox_DeviceList;
    QLineEdit *lineEdit_IoDevice;
    QLabel *l_Info;
    QLabel *label_Information;
    QCheckBox *inverseBits;
    QCheckBox *checkBox_UseDT;
    QGroupBox *bitGroupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *bitBox0;
    QComboBox *bitBox1;
    QComboBox *bitBox2;
    QComboBox *bitBox3;
    QComboBox *bitBox4;
    QComboBox *bitBox5;
    QComboBox *bitBox6;
    QComboBox *bitBox7;

    void setupUi(QDialog *setup_driverClass)
    {
        if (setup_driverClass->objectName().isEmpty())
            setup_driverClass->setObjectName(QString::fromUtf8("setup_driverClass"));
        setup_driverClass->resize(636, 221);
        setup_driverClass->setMinimumSize(QSize(0, 0));
        setup_driverClass->setMaximumSize(QSize(16777215, 16777215));
        setup_driverClass->setModal(true);
        gridLayout = new QGridLayout(setup_driverClass);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        spinBox_DT = new QSpinBox(setup_driverClass);
        spinBox_DT->setObjectName(QString::fromUtf8("spinBox_DT"));
        spinBox_DT->setMinimum(20);
        spinBox_DT->setMaximum(1000);
        spinBox_DT->setValue(150);

        gridLayout->addWidget(spinBox_DT, 4, 5, 1, 2);

        label_10 = new QLabel(setup_driverClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 4, 7, 1, 1);

        testButton = new QPushButton(setup_driverClass);
        testButton->setObjectName(QString::fromUtf8("testButton"));

        gridLayout->addWidget(testButton, 5, 0, 1, 1);

        okButton = new QPushButton(setup_driverClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        gridLayout->addWidget(okButton, 5, 4, 1, 2);

        cancelButton = new QPushButton(setup_driverClass);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        gridLayout->addWidget(cancelButton, 5, 6, 1, 2);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        RA_DEC_Button = new QPushButton(setup_driverClass);
        RA_DEC_Button->setObjectName(QString::fromUtf8("RA_DEC_Button"));
        RA_DEC_Button->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(RA_DEC_Button, 1, 0, 1, 1);

        RA_INC_Button = new QPushButton(setup_driverClass);
        RA_INC_Button->setObjectName(QString::fromUtf8("RA_INC_Button"));
        RA_INC_Button->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(RA_INC_Button, 1, 2, 1, 1);

        DEC_INC_Button = new QPushButton(setup_driverClass);
        DEC_INC_Button->setObjectName(QString::fromUtf8("DEC_INC_Button"));
        DEC_INC_Button->setFocusPolicy(Qt::NoFocus);
        DEC_INC_Button->setFlat(false);

        gridLayout_3->addWidget(DEC_INC_Button, 0, 1, 1, 1);

        DEC_DEC_Button = new QPushButton(setup_driverClass);
        DEC_DEC_Button->setObjectName(QString::fromUtf8("DEC_DEC_Button"));
        DEC_DEC_Button->setFocusPolicy(Qt::NoFocus);

        gridLayout_3->addWidget(DEC_DEC_Button, 2, 1, 1, 1);


        gridLayout->addLayout(gridLayout_3, 1, 0, 3, 1);

        label_9 = new QLabel(setup_driverClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 1, 2, 1, 1);

        comboBox_DeviceList = new QComboBox(setup_driverClass);
        comboBox_DeviceList->setObjectName(QString::fromUtf8("comboBox_DeviceList"));

        gridLayout->addWidget(comboBox_DeviceList, 1, 3, 1, 1);

        lineEdit_IoDevice = new QLineEdit(setup_driverClass);
        lineEdit_IoDevice->setObjectName(QString::fromUtf8("lineEdit_IoDevice"));
        lineEdit_IoDevice->setMaxLength(63);

        gridLayout->addWidget(lineEdit_IoDevice, 1, 4, 1, 4);

        l_Info = new QLabel(setup_driverClass);
        l_Info->setObjectName(QString::fromUtf8("l_Info"));

        gridLayout->addWidget(l_Info, 2, 2, 1, 1);

        label_Information = new QLabel(setup_driverClass);
        label_Information->setObjectName(QString::fromUtf8("label_Information"));
        label_Information->setFrameShape(QFrame::StyledPanel);
        label_Information->setFrameShadow(QFrame::Sunken);
        label_Information->setOpenExternalLinks(true);

        gridLayout->addWidget(label_Information, 2, 3, 2, 5);

        inverseBits = new QCheckBox(setup_driverClass);
        inverseBits->setObjectName(QString::fromUtf8("inverseBits"));

        gridLayout->addWidget(inverseBits, 4, 3, 1, 1);

        checkBox_UseDT = new QCheckBox(setup_driverClass);
        checkBox_UseDT->setObjectName(QString::fromUtf8("checkBox_UseDT"));

        gridLayout->addWidget(checkBox_UseDT, 4, 4, 1, 1);

        bitGroupBox = new QGroupBox(setup_driverClass);
        bitGroupBox->setObjectName(QString::fromUtf8("bitGroupBox"));
        gridLayout_2 = new QGridLayout(bitGroupBox);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(bitGroupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(bitGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(bitGroupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 0, 2, 1, 1);

        label_4 = new QLabel(bitGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        label_5 = new QLabel(bitGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 4, 1, 1);

        label_6 = new QLabel(bitGroupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 5, 1, 1);

        label_7 = new QLabel(bitGroupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 6, 1, 1);

        label_8 = new QLabel(bitGroupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 0, 7, 1, 1);

        bitBox0 = new QComboBox(bitGroupBox);
        bitBox0->setObjectName(QString::fromUtf8("bitBox0"));

        gridLayout_2->addWidget(bitBox0, 1, 0, 1, 1);

        bitBox1 = new QComboBox(bitGroupBox);
        bitBox1->setObjectName(QString::fromUtf8("bitBox1"));

        gridLayout_2->addWidget(bitBox1, 1, 1, 1, 1);

        bitBox2 = new QComboBox(bitGroupBox);
        bitBox2->setObjectName(QString::fromUtf8("bitBox2"));

        gridLayout_2->addWidget(bitBox2, 1, 2, 1, 1);

        bitBox3 = new QComboBox(bitGroupBox);
        bitBox3->setObjectName(QString::fromUtf8("bitBox3"));

        gridLayout_2->addWidget(bitBox3, 1, 3, 1, 1);

        bitBox4 = new QComboBox(bitGroupBox);
        bitBox4->setObjectName(QString::fromUtf8("bitBox4"));

        gridLayout_2->addWidget(bitBox4, 1, 4, 1, 1);

        bitBox5 = new QComboBox(bitGroupBox);
        bitBox5->setObjectName(QString::fromUtf8("bitBox5"));

        gridLayout_2->addWidget(bitBox5, 1, 5, 1, 1);

        bitBox6 = new QComboBox(bitGroupBox);
        bitBox6->setObjectName(QString::fromUtf8("bitBox6"));

        gridLayout_2->addWidget(bitBox6, 1, 6, 1, 1);

        bitBox7 = new QComboBox(bitGroupBox);
        bitBox7->setObjectName(QString::fromUtf8("bitBox7"));

        gridLayout_2->addWidget(bitBox7, 1, 7, 1, 1);


        gridLayout->addWidget(bitGroupBox, 0, 0, 1, 8);

        QWidget::setTabOrder(bitBox0, bitBox1);
        QWidget::setTabOrder(bitBox1, bitBox2);
        QWidget::setTabOrder(bitBox2, bitBox3);
        QWidget::setTabOrder(bitBox3, bitBox4);
        QWidget::setTabOrder(bitBox4, bitBox5);
        QWidget::setTabOrder(bitBox5, bitBox6);
        QWidget::setTabOrder(bitBox6, bitBox7);
        QWidget::setTabOrder(bitBox7, comboBox_DeviceList);
        QWidget::setTabOrder(comboBox_DeviceList, lineEdit_IoDevice);
        QWidget::setTabOrder(lineEdit_IoDevice, inverseBits);
        QWidget::setTabOrder(inverseBits, checkBox_UseDT);
        QWidget::setTabOrder(checkBox_UseDT, spinBox_DT);
        QWidget::setTabOrder(spinBox_DT, okButton);
        QWidget::setTabOrder(okButton, cancelButton);
        QWidget::setTabOrder(cancelButton, testButton);

        retranslateUi(setup_driverClass);

        QMetaObject::connectSlotsByName(setup_driverClass);
    } // setupUi

    void retranslateUi(QDialog *setup_driverClass)
    {
        setup_driverClass->setWindowTitle(QApplication::translate("setup_driverClass", "setup_driver", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("setup_driverClass", "ms", 0, QApplication::UnicodeUTF8));
        testButton->setText(QApplication::translate("setup_driverClass", "Test Btn", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("setup_driverClass", "OK", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("setup_driverClass", "Cancel", 0, QApplication::UnicodeUTF8));
        RA_DEC_Button->setText(QApplication::translate("setup_driverClass", "RA-", 0, QApplication::UnicodeUTF8));
        RA_INC_Button->setText(QApplication::translate("setup_driverClass", "RA+", 0, QApplication::UnicodeUTF8));
        DEC_INC_Button->setText(QApplication::translate("setup_driverClass", "DEC+", 0, QApplication::UnicodeUTF8));
        DEC_DEC_Button->setText(QApplication::translate("setup_driverClass", "DEC-", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("setup_driverClass", "Device", 0, QApplication::UnicodeUTF8));
        l_Info->setText(QApplication::translate("setup_driverClass", "Info", 0, QApplication::UnicodeUTF8));
        inverseBits->setText(QApplication::translate("setup_driverClass", "inverse bits", 0, QApplication::UnicodeUTF8));
        checkBox_UseDT->setText(QApplication::translate("setup_driverClass", "use DT", 0, QApplication::UnicodeUTF8));
        bitGroupBox->setTitle(QApplication::translate("setup_driverClass", "Bit mapping", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("setup_driverClass", "bit 0", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("setup_driverClass", "bit 1", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("setup_driverClass", "bit 2", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("setup_driverClass", "bit 3", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("setup_driverClass", "bit 4", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("setup_driverClass", "bit 5", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("setup_driverClass", "bit 6", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("setup_driverClass", "bit 7", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setup_driverClass: public Ui_setup_driverClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_DRIVER_H
