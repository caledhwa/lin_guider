/********************************************************************************
** Form generated from reading UI file 'rcalibration.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RCALIBRATION_H
#define UI_RCALIBRATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_rcalibrationClass
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_ReticleCalibration;
    QGridLayout *gridLayout_2;
    QLabel *l_1;
    QComboBox *comboBox_SquareSize;
    QCheckBox *checkBox_TwoAxis;
    QPushButton *pushButton_FindStar;
    QCheckBox *checkBox_AutoMode;
    QSpinBox *spinBox_DriftTime;
    QProgressBar *progressBar;
    QLabel *l_2;
    QLabel *l_3;
    QLabel *l_4;
    QLabel *l_RStatus;
    QDoubleSpinBox *spinBox_ReticleX;
    QDoubleSpinBox *spinBox_ReticleY;
    QDoubleSpinBox *spinBox_ReticleAngle;
    QPushButton *pushButton_StartCalibration;
    QGroupBox *groupBox_VideoCalibration;
    QGridLayout *gridLayout_3;
    QLabel *l_5;
    QLabel *l_VStatus;
    QSpinBox *spinBox_FrameCount;
    QPushButton *pushButton_StartVideoCalibration;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *rcalibrationClass)
    {
        if (rcalibrationClass->objectName().isEmpty())
            rcalibrationClass->setObjectName(QString::fromUtf8("rcalibrationClass"));
        rcalibrationClass->resize(400, 209);
        rcalibrationClass->setMinimumSize(QSize(0, 0));
        rcalibrationClass->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(rcalibrationClass);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_ReticleCalibration = new QGroupBox(rcalibrationClass);
        groupBox_ReticleCalibration->setObjectName(QString::fromUtf8("groupBox_ReticleCalibration"));
        gridLayout_2 = new QGridLayout(groupBox_ReticleCalibration);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        l_1 = new QLabel(groupBox_ReticleCalibration);
        l_1->setObjectName(QString::fromUtf8("l_1"));

        gridLayout_2->addWidget(l_1, 0, 0, 1, 1);

        comboBox_SquareSize = new QComboBox(groupBox_ReticleCalibration);
        comboBox_SquareSize->setObjectName(QString::fromUtf8("comboBox_SquareSize"));

        gridLayout_2->addWidget(comboBox_SquareSize, 0, 1, 1, 1);

        checkBox_TwoAxis = new QCheckBox(groupBox_ReticleCalibration);
        checkBox_TwoAxis->setObjectName(QString::fromUtf8("checkBox_TwoAxis"));

        gridLayout_2->addWidget(checkBox_TwoAxis, 0, 2, 1, 2);

        pushButton_FindStar = new QPushButton(groupBox_ReticleCalibration);
        pushButton_FindStar->setObjectName(QString::fromUtf8("pushButton_FindStar"));

        gridLayout_2->addWidget(pushButton_FindStar, 0, 4, 1, 1);

        checkBox_AutoMode = new QCheckBox(groupBox_ReticleCalibration);
        checkBox_AutoMode->setObjectName(QString::fromUtf8("checkBox_AutoMode"));

        gridLayout_2->addWidget(checkBox_AutoMode, 1, 0, 1, 1);

        spinBox_DriftTime = new QSpinBox(groupBox_ReticleCalibration);
        spinBox_DriftTime->setObjectName(QString::fromUtf8("spinBox_DriftTime"));
        spinBox_DriftTime->setMinimum(1);
        spinBox_DriftTime->setValue(25);

        gridLayout_2->addWidget(spinBox_DriftTime, 1, 1, 1, 1);

        progressBar = new QProgressBar(groupBox_ReticleCalibration);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 1, 2, 1, 3);

        l_2 = new QLabel(groupBox_ReticleCalibration);
        l_2->setObjectName(QString::fromUtf8("l_2"));

        gridLayout_2->addWidget(l_2, 2, 0, 1, 1);

        l_3 = new QLabel(groupBox_ReticleCalibration);
        l_3->setObjectName(QString::fromUtf8("l_3"));

        gridLayout_2->addWidget(l_3, 2, 1, 1, 1);

        l_4 = new QLabel(groupBox_ReticleCalibration);
        l_4->setObjectName(QString::fromUtf8("l_4"));

        gridLayout_2->addWidget(l_4, 2, 2, 1, 1);

        l_RStatus = new QLabel(groupBox_ReticleCalibration);
        l_RStatus->setObjectName(QString::fromUtf8("l_RStatus"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(l_RStatus->sizePolicy().hasHeightForWidth());
        l_RStatus->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(l_RStatus, 2, 3, 1, 2);

        spinBox_ReticleX = new QDoubleSpinBox(groupBox_ReticleCalibration);
        spinBox_ReticleX->setObjectName(QString::fromUtf8("spinBox_ReticleX"));

        gridLayout_2->addWidget(spinBox_ReticleX, 3, 0, 1, 1);

        spinBox_ReticleY = new QDoubleSpinBox(groupBox_ReticleCalibration);
        spinBox_ReticleY->setObjectName(QString::fromUtf8("spinBox_ReticleY"));

        gridLayout_2->addWidget(spinBox_ReticleY, 3, 1, 1, 1);

        spinBox_ReticleAngle = new QDoubleSpinBox(groupBox_ReticleCalibration);
        spinBox_ReticleAngle->setObjectName(QString::fromUtf8("spinBox_ReticleAngle"));
        spinBox_ReticleAngle->setMaximum(100);

        gridLayout_2->addWidget(spinBox_ReticleAngle, 3, 2, 1, 1);

        pushButton_StartCalibration = new QPushButton(groupBox_ReticleCalibration);
        pushButton_StartCalibration->setObjectName(QString::fromUtf8("pushButton_StartCalibration"));

        gridLayout_2->addWidget(pushButton_StartCalibration, 3, 4, 1, 1);


        gridLayout->addWidget(groupBox_ReticleCalibration, 0, 0, 1, 1);

        groupBox_VideoCalibration = new QGroupBox(rcalibrationClass);
        groupBox_VideoCalibration->setObjectName(QString::fromUtf8("groupBox_VideoCalibration"));
        gridLayout_3 = new QGridLayout(groupBox_VideoCalibration);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        l_5 = new QLabel(groupBox_VideoCalibration);
        l_5->setObjectName(QString::fromUtf8("l_5"));

        gridLayout_3->addWidget(l_5, 0, 0, 1, 1);

        l_VStatus = new QLabel(groupBox_VideoCalibration);
        l_VStatus->setObjectName(QString::fromUtf8("l_VStatus"));

        gridLayout_3->addWidget(l_VStatus, 0, 2, 1, 1);

        spinBox_FrameCount = new QSpinBox(groupBox_VideoCalibration);
        spinBox_FrameCount->setObjectName(QString::fromUtf8("spinBox_FrameCount"));
        spinBox_FrameCount->setMinimum(1);
        spinBox_FrameCount->setMaximum(100);

        gridLayout_3->addWidget(spinBox_FrameCount, 1, 0, 1, 1);

        pushButton_StartVideoCalibration = new QPushButton(groupBox_VideoCalibration);
        pushButton_StartVideoCalibration->setObjectName(QString::fromUtf8("pushButton_StartVideoCalibration"));

        gridLayout_3->addWidget(pushButton_StartVideoCalibration, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout->addWidget(groupBox_VideoCalibration, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBox_SquareSize, checkBox_TwoAxis);
        QWidget::setTabOrder(checkBox_TwoAxis, pushButton_FindStar);
        QWidget::setTabOrder(pushButton_FindStar, checkBox_AutoMode);
        QWidget::setTabOrder(checkBox_AutoMode, spinBox_DriftTime);
        QWidget::setTabOrder(spinBox_DriftTime, spinBox_ReticleX);
        QWidget::setTabOrder(spinBox_ReticleX, spinBox_ReticleY);
        QWidget::setTabOrder(spinBox_ReticleY, spinBox_ReticleAngle);
        QWidget::setTabOrder(spinBox_ReticleAngle, pushButton_StartCalibration);
        QWidget::setTabOrder(pushButton_StartCalibration, spinBox_FrameCount);
        QWidget::setTabOrder(spinBox_FrameCount, pushButton_StartVideoCalibration);

        retranslateUi(rcalibrationClass);

        QMetaObject::connectSlotsByName(rcalibrationClass);
    } // setupUi

    void retranslateUi(QDialog *rcalibrationClass)
    {
        rcalibrationClass->setWindowTitle(QApplication::translate("rcalibrationClass", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox_ReticleCalibration->setTitle(QApplication::translate("rcalibrationClass", "Reticle calibraion (you can drag reticle by its center)", 0, QApplication::UnicodeUTF8));
        l_1->setText(QApplication::translate("rcalibrationClass", "Square size", 0, QApplication::UnicodeUTF8));
        checkBox_TwoAxis->setText(QApplication::translate("rcalibrationClass", "two axis", 0, QApplication::UnicodeUTF8));
        pushButton_FindStar->setText(QApplication::translate("rcalibrationClass", "Find star", 0, QApplication::UnicodeUTF8));
        checkBox_AutoMode->setText(QApplication::translate("rcalibrationClass", "auto mode", 0, QApplication::UnicodeUTF8));
        l_2->setText(QApplication::translate("rcalibrationClass", "recticle-X", 0, QApplication::UnicodeUTF8));
        l_3->setText(QApplication::translate("rcalibrationClass", "reticle-Y", 0, QApplication::UnicodeUTF8));
        l_4->setText(QApplication::translate("rcalibrationClass", "recticle-Angle", 0, QApplication::UnicodeUTF8));
        l_RStatus->setText(QApplication::translate("rcalibrationClass", "State:", 0, QApplication::UnicodeUTF8));
        pushButton_StartCalibration->setText(QApplication::translate("rcalibrationClass", "Start", 0, QApplication::UnicodeUTF8));
        groupBox_VideoCalibration->setTitle(QApplication::translate("rcalibrationClass", "Accumulate dark frames", 0, QApplication::UnicodeUTF8));
        l_5->setText(QApplication::translate("rcalibrationClass", "Frame count", 0, QApplication::UnicodeUTF8));
        l_VStatus->setText(QApplication::translate("rcalibrationClass", "State:", 0, QApplication::UnicodeUTF8));
        pushButton_StartVideoCalibration->setText(QApplication::translate("rcalibrationClass", "Start", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class rcalibrationClass: public Ui_rcalibrationClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RCALIBRATION_H
