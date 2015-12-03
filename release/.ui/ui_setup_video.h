/********************************************************************************
** Form generated from reading UI file 'setup_video.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUP_VIDEO_H
#define UI_SETUP_VIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_setup_videoClass
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox_Video;
    QGridLayout *gridLayout_3;
    QLabel *l_9;
    QComboBox *comboBox_DeviceList;
    QLineEdit *lineEdit_VideoDevice;
    QLabel *label_Information;
    QLabel *l_7;
    QComboBox *comboBox_FPS;
    QCheckBox *checkBox_BW;
    QCheckBox *checkBox_UseCalibration;
    QLabel *l_8;
    QComboBox *comboBox_FrameSize;
    QCheckBox *checkBox_HalfOutFPS;
    QCheckBox *checkBox_AutoGain;
    QLabel *label_Gain;
    QSpinBox *spinBox_Gain;
    QLabel *label_Expo;
    QSpinBox *spinBox_Expo;
    QSlider *horizontalSlider_Gain;
    QLabel *label_ExtParams;
    QComboBox *comboBox_ExtParamList;
    QSpinBox *spinBox_ExtValue;
    QSlider *horizontalSlider_ExtValue;
    QSlider *horizontalSlider_Expo;
    QGroupBox *groupBox_CCD;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *spinBox_Focal;
    QLabel *l_3;
    QSpinBox *spinBox_CCD_Width;
    QLabel *l_4;
    QSpinBox *spinBox_CCD_Height;
    QLabel *l_5;
    QDoubleSpinBox *spinBox_PixelHeight;
    QDoubleSpinBox *spinBox_PixelWidth;
    QLabel *l_1;
    QDoubleSpinBox *spinBox_Aperture;
    QLabel *l_2;
    QLabel *l_6;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QLabel *ll_1;
    QLabel *l_FbyD;
    QLabel *ll_2;
    QLabel *l_Resolution;
    QLabel *ll_3;
    QLabel *l_PixResolution;
    QLabel *ll_4;
    QLabel *l_FOV;
    QCheckBox *checkBox_AutoSensorInfo;

    void setupUi(QDialog *setup_videoClass)
    {
        if (setup_videoClass->objectName().isEmpty())
            setup_videoClass->setObjectName(QString::fromUtf8("setup_videoClass"));
        setup_videoClass->resize(365, 432);
        setup_videoClass->setMinimumSize(QSize(0, 0));
        setup_videoClass->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(setup_videoClass);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_OK = new QPushButton(setup_videoClass);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        gridLayout->addWidget(pushButton_OK, 2, 1, 1, 1);

        pushButton_Cancel = new QPushButton(setup_videoClass);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        gridLayout->addWidget(pushButton_Cancel, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        groupBox_Video = new QGroupBox(setup_videoClass);
        groupBox_Video->setObjectName(QString::fromUtf8("groupBox_Video"));
        gridLayout_3 = new QGridLayout(groupBox_Video);
        gridLayout_3->setSpacing(4);
        gridLayout_3->setContentsMargins(4, 4, 4, 4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        l_9 = new QLabel(groupBox_Video);
        l_9->setObjectName(QString::fromUtf8("l_9"));

        gridLayout_3->addWidget(l_9, 0, 0, 1, 1);

        comboBox_DeviceList = new QComboBox(groupBox_Video);
        comboBox_DeviceList->setObjectName(QString::fromUtf8("comboBox_DeviceList"));

        gridLayout_3->addWidget(comboBox_DeviceList, 0, 1, 1, 1);

        lineEdit_VideoDevice = new QLineEdit(groupBox_Video);
        lineEdit_VideoDevice->setObjectName(QString::fromUtf8("lineEdit_VideoDevice"));
        lineEdit_VideoDevice->setMaxLength(63);

        gridLayout_3->addWidget(lineEdit_VideoDevice, 0, 2, 1, 2);

        label_Information = new QLabel(groupBox_Video);
        label_Information->setObjectName(QString::fromUtf8("label_Information"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Information->sizePolicy().hasHeightForWidth());
        label_Information->setSizePolicy(sizePolicy);
        label_Information->setFrameShape(QFrame::StyledPanel);
        label_Information->setFrameShadow(QFrame::Sunken);
        label_Information->setOpenExternalLinks(true);

        gridLayout_3->addWidget(label_Information, 1, 0, 1, 4);

        l_7 = new QLabel(groupBox_Video);
        l_7->setObjectName(QString::fromUtf8("l_7"));

        gridLayout_3->addWidget(l_7, 2, 0, 1, 1);

        comboBox_FPS = new QComboBox(groupBox_Video);
        comboBox_FPS->setObjectName(QString::fromUtf8("comboBox_FPS"));

        gridLayout_3->addWidget(comboBox_FPS, 2, 1, 1, 1);

        checkBox_BW = new QCheckBox(groupBox_Video);
        checkBox_BW->setObjectName(QString::fromUtf8("checkBox_BW"));

        gridLayout_3->addWidget(checkBox_BW, 2, 2, 1, 1);

        checkBox_UseCalibration = new QCheckBox(groupBox_Video);
        checkBox_UseCalibration->setObjectName(QString::fromUtf8("checkBox_UseCalibration"));

        gridLayout_3->addWidget(checkBox_UseCalibration, 2, 3, 1, 1);

        l_8 = new QLabel(groupBox_Video);
        l_8->setObjectName(QString::fromUtf8("l_8"));

        gridLayout_3->addWidget(l_8, 3, 0, 1, 1);

        comboBox_FrameSize = new QComboBox(groupBox_Video);
        comboBox_FrameSize->setObjectName(QString::fromUtf8("comboBox_FrameSize"));

        gridLayout_3->addWidget(comboBox_FrameSize, 3, 1, 1, 1);

        checkBox_HalfOutFPS = new QCheckBox(groupBox_Video);
        checkBox_HalfOutFPS->setObjectName(QString::fromUtf8("checkBox_HalfOutFPS"));

        gridLayout_3->addWidget(checkBox_HalfOutFPS, 3, 2, 1, 1);

        checkBox_AutoGain = new QCheckBox(groupBox_Video);
        checkBox_AutoGain->setObjectName(QString::fromUtf8("checkBox_AutoGain"));

        gridLayout_3->addWidget(checkBox_AutoGain, 3, 3, 1, 1);

        label_Gain = new QLabel(groupBox_Video);
        label_Gain->setObjectName(QString::fromUtf8("label_Gain"));

        gridLayout_3->addWidget(label_Gain, 4, 0, 1, 1);

        spinBox_Gain = new QSpinBox(groupBox_Video);
        spinBox_Gain->setObjectName(QString::fromUtf8("spinBox_Gain"));

        gridLayout_3->addWidget(spinBox_Gain, 4, 1, 1, 1);

        label_Expo = new QLabel(groupBox_Video);
        label_Expo->setObjectName(QString::fromUtf8("label_Expo"));

        gridLayout_3->addWidget(label_Expo, 4, 2, 1, 1);

        spinBox_Expo = new QSpinBox(groupBox_Video);
        spinBox_Expo->setObjectName(QString::fromUtf8("spinBox_Expo"));

        gridLayout_3->addWidget(spinBox_Expo, 4, 3, 1, 1);

        horizontalSlider_Gain = new QSlider(groupBox_Video);
        horizontalSlider_Gain->setObjectName(QString::fromUtf8("horizontalSlider_Gain"));
        horizontalSlider_Gain->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_Gain, 5, 0, 1, 2);

        label_ExtParams = new QLabel(groupBox_Video);
        label_ExtParams->setObjectName(QString::fromUtf8("label_ExtParams"));

        gridLayout_3->addWidget(label_ExtParams, 6, 0, 1, 1);

        comboBox_ExtParamList = new QComboBox(groupBox_Video);
        comboBox_ExtParamList->setObjectName(QString::fromUtf8("comboBox_ExtParamList"));

        gridLayout_3->addWidget(comboBox_ExtParamList, 6, 1, 1, 1);

        spinBox_ExtValue = new QSpinBox(groupBox_Video);
        spinBox_ExtValue->setObjectName(QString::fromUtf8("spinBox_ExtValue"));

        gridLayout_3->addWidget(spinBox_ExtValue, 6, 2, 1, 1);

        horizontalSlider_ExtValue = new QSlider(groupBox_Video);
        horizontalSlider_ExtValue->setObjectName(QString::fromUtf8("horizontalSlider_ExtValue"));
        horizontalSlider_ExtValue->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_ExtValue, 6, 3, 1, 1);

        horizontalSlider_Expo = new QSlider(groupBox_Video);
        horizontalSlider_Expo->setObjectName(QString::fromUtf8("horizontalSlider_Expo"));
        horizontalSlider_Expo->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(horizontalSlider_Expo, 5, 2, 1, 2);


        gridLayout->addWidget(groupBox_Video, 1, 0, 1, 3);

        groupBox_CCD = new QGroupBox(setup_videoClass);
        groupBox_CCD->setObjectName(QString::fromUtf8("groupBox_CCD"));
        groupBox_CCD->setAlignment(Qt::AlignLeading);
        gridLayout_2 = new QGridLayout(groupBox_CCD);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spinBox_Focal = new QDoubleSpinBox(groupBox_CCD);
        spinBox_Focal->setObjectName(QString::fromUtf8("spinBox_Focal"));
        spinBox_Focal->setDecimals(1);
        spinBox_Focal->setMinimum(2);
        spinBox_Focal->setMaximum(100000);

        gridLayout_2->addWidget(spinBox_Focal, 1, 1, 1, 1);

        l_3 = new QLabel(groupBox_CCD);
        l_3->setObjectName(QString::fromUtf8("l_3"));

        gridLayout_2->addWidget(l_3, 2, 0, 1, 1);

        spinBox_CCD_Width = new QSpinBox(groupBox_CCD);
        spinBox_CCD_Width->setObjectName(QString::fromUtf8("spinBox_CCD_Width"));
        spinBox_CCD_Width->setMinimum(10);
        spinBox_CCD_Width->setMaximum(2048);
        spinBox_CCD_Width->setSingleStep(1);

        gridLayout_2->addWidget(spinBox_CCD_Width, 2, 1, 1, 1);

        l_4 = new QLabel(groupBox_CCD);
        l_4->setObjectName(QString::fromUtf8("l_4"));

        gridLayout_2->addWidget(l_4, 3, 0, 1, 1);

        spinBox_CCD_Height = new QSpinBox(groupBox_CCD);
        spinBox_CCD_Height->setObjectName(QString::fromUtf8("spinBox_CCD_Height"));
        spinBox_CCD_Height->setMinimum(10);
        spinBox_CCD_Height->setMaximum(2048);

        gridLayout_2->addWidget(spinBox_CCD_Height, 3, 1, 1, 1);

        l_5 = new QLabel(groupBox_CCD);
        l_5->setObjectName(QString::fromUtf8("l_5"));

        gridLayout_2->addWidget(l_5, 4, 0, 1, 1);

        spinBox_PixelHeight = new QDoubleSpinBox(groupBox_CCD);
        spinBox_PixelHeight->setObjectName(QString::fromUtf8("spinBox_PixelHeight"));
        spinBox_PixelHeight->setDecimals(2);
        spinBox_PixelHeight->setMinimum(1);
        spinBox_PixelHeight->setSingleStep(0.05);

        gridLayout_2->addWidget(spinBox_PixelHeight, 5, 1, 1, 1);

        spinBox_PixelWidth = new QDoubleSpinBox(groupBox_CCD);
        spinBox_PixelWidth->setObjectName(QString::fromUtf8("spinBox_PixelWidth"));
        spinBox_PixelWidth->setDecimals(2);
        spinBox_PixelWidth->setMinimum(1);
        spinBox_PixelWidth->setMaximum(100);
        spinBox_PixelWidth->setSingleStep(0.05);

        gridLayout_2->addWidget(spinBox_PixelWidth, 4, 1, 1, 1);

        l_1 = new QLabel(groupBox_CCD);
        l_1->setObjectName(QString::fromUtf8("l_1"));

        gridLayout_2->addWidget(l_1, 0, 0, 1, 1);

        spinBox_Aperture = new QDoubleSpinBox(groupBox_CCD);
        spinBox_Aperture->setObjectName(QString::fromUtf8("spinBox_Aperture"));
        spinBox_Aperture->setDecimals(1);
        spinBox_Aperture->setMinimum(4);
        spinBox_Aperture->setMaximum(10000);

        gridLayout_2->addWidget(spinBox_Aperture, 0, 1, 1, 1);

        l_2 = new QLabel(groupBox_CCD);
        l_2->setObjectName(QString::fromUtf8("l_2"));

        gridLayout_2->addWidget(l_2, 1, 0, 1, 1);

        l_6 = new QLabel(groupBox_CCD);
        l_6->setObjectName(QString::fromUtf8("l_6"));

        gridLayout_2->addWidget(l_6, 5, 0, 1, 1);

        frame = new QFrame(groupBox_CCD);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setSpacing(4);
        gridLayout_4->setContentsMargins(4, 4, 4, 4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        ll_1 = new QLabel(frame);
        ll_1->setObjectName(QString::fromUtf8("ll_1"));

        gridLayout_4->addWidget(ll_1, 0, 0, 1, 1);

        l_FbyD = new QLabel(frame);
        l_FbyD->setObjectName(QString::fromUtf8("l_FbyD"));
        sizePolicy.setHeightForWidth(l_FbyD->sizePolicy().hasHeightForWidth());
        l_FbyD->setSizePolicy(sizePolicy);
        l_FbyD->setFrameShape(QFrame::StyledPanel);
        l_FbyD->setFrameShadow(QFrame::Sunken);
        l_FbyD->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_FbyD, 0, 1, 1, 1);

        ll_2 = new QLabel(frame);
        ll_2->setObjectName(QString::fromUtf8("ll_2"));

        gridLayout_4->addWidget(ll_2, 1, 0, 1, 1);

        l_Resolution = new QLabel(frame);
        l_Resolution->setObjectName(QString::fromUtf8("l_Resolution"));
        sizePolicy.setHeightForWidth(l_Resolution->sizePolicy().hasHeightForWidth());
        l_Resolution->setSizePolicy(sizePolicy);
        l_Resolution->setFrameShape(QFrame::StyledPanel);
        l_Resolution->setFrameShadow(QFrame::Sunken);
        l_Resolution->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_Resolution, 1, 1, 1, 1);

        ll_3 = new QLabel(frame);
        ll_3->setObjectName(QString::fromUtf8("ll_3"));

        gridLayout_4->addWidget(ll_3, 2, 0, 1, 1);

        l_PixResolution = new QLabel(frame);
        l_PixResolution->setObjectName(QString::fromUtf8("l_PixResolution"));
        sizePolicy.setHeightForWidth(l_PixResolution->sizePolicy().hasHeightForWidth());
        l_PixResolution->setSizePolicy(sizePolicy);
        l_PixResolution->setFrameShape(QFrame::StyledPanel);
        l_PixResolution->setFrameShadow(QFrame::Sunken);
        l_PixResolution->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_PixResolution, 2, 1, 1, 1);

        ll_4 = new QLabel(frame);
        ll_4->setObjectName(QString::fromUtf8("ll_4"));

        gridLayout_4->addWidget(ll_4, 3, 0, 1, 1);

        l_FOV = new QLabel(frame);
        l_FOV->setObjectName(QString::fromUtf8("l_FOV"));
        sizePolicy.setHeightForWidth(l_FOV->sizePolicy().hasHeightForWidth());
        l_FOV->setSizePolicy(sizePolicy);
        l_FOV->setFrameShape(QFrame::StyledPanel);
        l_FOV->setFrameShadow(QFrame::Sunken);
        l_FOV->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(l_FOV, 3, 1, 1, 1);


        gridLayout_2->addWidget(frame, 0, 2, 5, 2);

        checkBox_AutoSensorInfo = new QCheckBox(groupBox_CCD);
        checkBox_AutoSensorInfo->setObjectName(QString::fromUtf8("checkBox_AutoSensorInfo"));

        gridLayout_2->addWidget(checkBox_AutoSensorInfo, 5, 2, 1, 2);


        gridLayout->addWidget(groupBox_CCD, 0, 0, 1, 3);

        QWidget::setTabOrder(spinBox_Aperture, spinBox_Focal);
        QWidget::setTabOrder(spinBox_Focal, spinBox_CCD_Width);
        QWidget::setTabOrder(spinBox_CCD_Width, spinBox_CCD_Height);
        QWidget::setTabOrder(spinBox_CCD_Height, spinBox_PixelWidth);
        QWidget::setTabOrder(spinBox_PixelWidth, spinBox_PixelHeight);
        QWidget::setTabOrder(spinBox_PixelHeight, checkBox_AutoSensorInfo);
        QWidget::setTabOrder(checkBox_AutoSensorInfo, comboBox_DeviceList);
        QWidget::setTabOrder(comboBox_DeviceList, lineEdit_VideoDevice);
        QWidget::setTabOrder(lineEdit_VideoDevice, comboBox_FPS);
        QWidget::setTabOrder(comboBox_FPS, checkBox_BW);
        QWidget::setTabOrder(checkBox_BW, checkBox_UseCalibration);
        QWidget::setTabOrder(checkBox_UseCalibration, comboBox_FrameSize);
        QWidget::setTabOrder(comboBox_FrameSize, checkBox_HalfOutFPS);
        QWidget::setTabOrder(checkBox_HalfOutFPS, checkBox_AutoGain);
        QWidget::setTabOrder(checkBox_AutoGain, spinBox_Gain);
        QWidget::setTabOrder(spinBox_Gain, horizontalSlider_Gain);
        QWidget::setTabOrder(horizontalSlider_Gain, spinBox_Expo);
        QWidget::setTabOrder(spinBox_Expo, horizontalSlider_Expo);
        QWidget::setTabOrder(horizontalSlider_Expo, comboBox_ExtParamList);
        QWidget::setTabOrder(comboBox_ExtParamList, spinBox_ExtValue);
        QWidget::setTabOrder(spinBox_ExtValue, horizontalSlider_ExtValue);
        QWidget::setTabOrder(horizontalSlider_ExtValue, pushButton_OK);
        QWidget::setTabOrder(pushButton_OK, pushButton_Cancel);

        retranslateUi(setup_videoClass);

        QMetaObject::connectSlotsByName(setup_videoClass);
    } // setupUi

    void retranslateUi(QDialog *setup_videoClass)
    {
        setup_videoClass->setWindowTitle(QApplication::translate("setup_videoClass", "setup_video", 0, QApplication::UnicodeUTF8));
        pushButton_OK->setText(QApplication::translate("setup_videoClass", "OK", 0, QApplication::UnicodeUTF8));
        pushButton_Cancel->setText(QApplication::translate("setup_videoClass", "Cancel", 0, QApplication::UnicodeUTF8));
        groupBox_Video->setTitle(QApplication::translate("setup_videoClass", "Video", 0, QApplication::UnicodeUTF8));
        l_9->setText(QApplication::translate("setup_videoClass", "Device", 0, QApplication::UnicodeUTF8));
        l_7->setText(QApplication::translate("setup_videoClass", "Expo, sec", 0, QApplication::UnicodeUTF8));
        checkBox_BW->setText(QApplication::translate("setup_videoClass", "BW", 0, QApplication::UnicodeUTF8));
        checkBox_UseCalibration->setText(QApplication::translate("setup_videoClass", "Dark subtract", 0, QApplication::UnicodeUTF8));
        l_8->setText(QApplication::translate("setup_videoClass", "Frame", 0, QApplication::UnicodeUTF8));
        checkBox_HalfOutFPS->setText(QApplication::translate("setup_videoClass", "half fps", 0, QApplication::UnicodeUTF8));
        checkBox_AutoGain->setText(QApplication::translate("setup_videoClass", "Auto gain", 0, QApplication::UnicodeUTF8));
        label_Gain->setText(QApplication::translate("setup_videoClass", "Gain", 0, QApplication::UnicodeUTF8));
        label_Expo->setText(QApplication::translate("setup_videoClass", "White pt.", 0, QApplication::UnicodeUTF8));
        label_ExtParams->setText(QApplication::translate("setup_videoClass", "Ext.params", 0, QApplication::UnicodeUTF8));
        groupBox_CCD->setTitle(QApplication::translate("setup_videoClass", "Guider physical parameters", 0, QApplication::UnicodeUTF8));
        l_3->setText(QApplication::translate("setup_videoClass", "Matrix width, pix", 0, QApplication::UnicodeUTF8));
        l_4->setText(QApplication::translate("setup_videoClass", "Matrix height, pix", 0, QApplication::UnicodeUTF8));
        l_5->setText(QApplication::translate("setup_videoClass", "Pixel width, um", 0, QApplication::UnicodeUTF8));
        l_1->setText(QApplication::translate("setup_videoClass", "Aperture, mm", 0, QApplication::UnicodeUTF8));
        l_2->setText(QApplication::translate("setup_videoClass", "Focal length, mm", 0, QApplication::UnicodeUTF8));
        l_6->setText(QApplication::translate("setup_videoClass", "Pixel height, um", 0, QApplication::UnicodeUTF8));
        ll_1->setText(QApplication::translate("setup_videoClass", "F/D", 0, QApplication::UnicodeUTF8));
        l_FbyD->setText(QApplication::translate("setup_videoClass", "xxx", 0, QApplication::UnicodeUTF8));
        ll_2->setText(QApplication::translate("setup_videoClass", "Resolution, \"", 0, QApplication::UnicodeUTF8));
        l_Resolution->setText(QApplication::translate("setup_videoClass", "xxx", 0, QApplication::UnicodeUTF8));
        ll_3->setText(QApplication::translate("setup_videoClass", "Resolution,\"/pix", 0, QApplication::UnicodeUTF8));
        l_PixResolution->setText(QApplication::translate("setup_videoClass", "xxx", 0, QApplication::UnicodeUTF8));
        ll_4->setText(QApplication::translate("setup_videoClass", "FOV, '", 0, QApplication::UnicodeUTF8));
        l_FOV->setText(QApplication::translate("setup_videoClass", "YYxYY", 0, QApplication::UnicodeUTF8));
        checkBox_AutoSensorInfo->setText(QApplication::translate("setup_videoClass", "Auto sensor info", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class setup_videoClass: public Ui_setup_videoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUP_VIDEO_H
