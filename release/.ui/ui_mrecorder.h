/********************************************************************************
** Form generated from reading UI file 'mrecorder.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MRECORDER_H
#define UI_MRECORDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_mrecorderClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_Record;
    QGridLayout *gridLayout_2;
    QLabel *l_2;
    QPushButton *pushButton_Record;
    QLabel *l_1;
    QLineEdit *lineEdit_FileName;
    QPushButton *pushButton_Stop;
    QLabel *l_FrameCnt;

    void setupUi(QDialog *mrecorderClass)
    {
        if (mrecorderClass->objectName().isEmpty())
            mrecorderClass->setObjectName(QString::fromUtf8("mrecorderClass"));
        mrecorderClass->resize(355, 95);
        mrecorderClass->setMinimumSize(QSize(0, 0));
        mrecorderClass->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(mrecorderClass);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_Record = new QGroupBox(mrecorderClass);
        groupBox_Record->setObjectName(QString::fromUtf8("groupBox_Record"));
        gridLayout_2 = new QGridLayout(groupBox_Record);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        l_2 = new QLabel(groupBox_Record);
        l_2->setObjectName(QString::fromUtf8("l_2"));
        l_2->setFrameShape(QFrame::NoFrame);
        l_2->setFrameShadow(QFrame::Plain);

        gridLayout_2->addWidget(l_2, 2, 0, 1, 1);

        pushButton_Record = new QPushButton(groupBox_Record);
        pushButton_Record->setObjectName(QString::fromUtf8("pushButton_Record"));

        gridLayout_2->addWidget(pushButton_Record, 1, 1, 1, 1);

        l_1 = new QLabel(groupBox_Record);
        l_1->setObjectName(QString::fromUtf8("l_1"));

        gridLayout_2->addWidget(l_1, 0, 0, 1, 3);

        lineEdit_FileName = new QLineEdit(groupBox_Record);
        lineEdit_FileName->setObjectName(QString::fromUtf8("lineEdit_FileName"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_FileName->sizePolicy().hasHeightForWidth());
        lineEdit_FileName->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(lineEdit_FileName, 1, 0, 1, 1);

        pushButton_Stop = new QPushButton(groupBox_Record);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));

        gridLayout_2->addWidget(pushButton_Stop, 1, 2, 1, 1);

        l_FrameCnt = new QLabel(groupBox_Record);
        l_FrameCnt->setObjectName(QString::fromUtf8("l_FrameCnt"));

        gridLayout_2->addWidget(l_FrameCnt, 2, 2, 1, 1);


        gridLayout->addWidget(groupBox_Record, 0, 0, 1, 1);

        QWidget::setTabOrder(lineEdit_FileName, pushButton_Record);
        QWidget::setTabOrder(pushButton_Record, pushButton_Stop);

        retranslateUi(mrecorderClass);

        QMetaObject::connectSlotsByName(mrecorderClass);
    } // setupUi

    void retranslateUi(QDialog *mrecorderClass)
    {
        mrecorderClass->setWindowTitle(QApplication::translate("mrecorderClass", "mrecorder", 0, QApplication::UnicodeUTF8));
        groupBox_Record->setTitle(QApplication::translate("mrecorderClass", "Movie recorder", 0, QApplication::UnicodeUTF8));
        l_2->setText(QApplication::translate("mrecorderClass", "Frame number:", 0, QApplication::UnicodeUTF8));
        pushButton_Record->setText(QApplication::translate("mrecorderClass", "REC", 0, QApplication::UnicodeUTF8));
        l_1->setText(QApplication::translate("mrecorderClass", "File name (without path and extension)", 0, QApplication::UnicodeUTF8));
        pushButton_Stop->setText(QApplication::translate("mrecorderClass", "Stop", 0, QApplication::UnicodeUTF8));
        l_FrameCnt->setText(QApplication::translate("mrecorderClass", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mrecorderClass: public Ui_mrecorderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MRECORDER_H
