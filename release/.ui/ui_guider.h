/********************************************************************************
** Form generated from reading UI file 'guider.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIDER_H
#define UI_GUIDER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guiderClass
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_Drift;
    QGridLayout *gridLayout_8;
    QSpinBox *spinBox_YScale;
    QLabel *l_7;
    QSpinBox *spinBox_XScale;
    QLabel *l_8;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_Graph;
    QGroupBox *groupBox_Configuration;
    QGridLayout *gridLayout_9;
    QLabel *l_27;
    QComboBox *comboBox_SquareSize;
    QLabel *l_28;
    QLabel *l_29;
    QComboBox *comboBox_QualityControl;
    QComboBox *comboBox_ThresholdAlg;
    QDoubleSpinBox *doubleSpinBox_QualityThreshold2;
    QCheckBox *checkBox_SwapDec;
    QDoubleSpinBox *doubleSpinBox_QualityThreshold1;
    QCheckBox *checkBox_SaveLog;
    QLineEdit *lineEdit_DriftFileName;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_Info;
    QGridLayout *gridLayout_10;
    QLabel *l_9;
    QLabel *l_FOV;
    QLabel *l_FbyD;
    QLabel *l_Focal;
    QLabel *l_10;
    QDoubleSpinBox *spinBox_GuideRate;
    QLabel *l_RecommendedGain;
    QLabel *l_12;
    QLabel *l_11;
    QLabel *l_Aperture;
    QLabel *l_13;
    QCheckBox *checkBox_normalizeGain;
    QGroupBox *groupBox_Control;
    QGridLayout *gridLayout_11;
    QLabel *l_34;
    QSpinBox *spinBox_AccFramesRA;
    QLabel *l_15;
    QLabel *l_30;
    QLabel *l_17;
    QSpinBox *spinBox_MaxPulseDEC;
    QLabel *l_ErrDEC;
    QDoubleSpinBox *spinBox_DerGainDEC;
    QLabel *l_33;
    QLabel *l_DeltaDEC;
    QSpinBox *spinBox_MinPulseRA;
    QDoubleSpinBox *spinBox_DerGainRA;
    QLabel *l_32;
    QLabel *l_14;
    QDoubleSpinBox *spinBox_PropGainDEC;
    QLabel *l_16;
    QDoubleSpinBox *spinBox_PropGainRA;
    QLabel *l_36;
    QGroupBox *groupBox_DirDEC;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *checkBox_DirDECPlus;
    QCheckBox *checkBox_DirDECMinus;
    QLabel *l_Quality;
    QGroupBox *groupBox_DirRA;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_DirRAPlus;
    QCheckBox *checkBox_DirRAMinus;
    QDoubleSpinBox *spinBox_IntGainRA;
    QLabel *l_31;
    QLabel *l_ErrRA;
    QSpinBox *spinBox_MaxPulseRA;
    QSpinBox *spinBox_MinPulseDEC;
    QLabel *l_PulseRA;
    QPushButton *pushButton_StartStop;
    QDoubleSpinBox *spinBox_IntGainDEC;
    QCheckBox *checkBox_AverageFrames;
    QLabel *l_PulseDEC;
    QLabel *l_DeltaRA;
    QSpinBox *spinBox_AccFramesDEC;
    QFrame *line_2;
    QFrame *line;
    QLabel *l_35;

    void setupUi(QWidget *guiderClass)
    {
        if (guiderClass->objectName().isEmpty())
            guiderClass->setObjectName(QString::fromUtf8("guiderClass"));
        guiderClass->resize(621, 472);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(guiderClass->sizePolicy().hasHeightForWidth());
        guiderClass->setSizePolicy(sizePolicy);
        guiderClass->setMinimumSize(QSize(0, 0));
        guiderClass->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(guiderClass);
        gridLayout->setSpacing(4);
        gridLayout->setContentsMargins(4, 4, 4, 4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 0, -1);
        groupBox_Drift = new QGroupBox(guiderClass);
        groupBox_Drift->setObjectName(QString::fromUtf8("groupBox_Drift"));
        gridLayout_8 = new QGridLayout(groupBox_Drift);
        gridLayout_8->setSpacing(4);
        gridLayout_8->setContentsMargins(4, 4, 4, 4);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        spinBox_YScale = new QSpinBox(groupBox_Drift);
        spinBox_YScale->setObjectName(QString::fromUtf8("spinBox_YScale"));
        spinBox_YScale->setMinimum(5);
        spinBox_YScale->setMaximum(30);
        spinBox_YScale->setSingleStep(5);
        spinBox_YScale->setValue(5);

        gridLayout_8->addWidget(spinBox_YScale, 1, 3, 1, 1);

        l_7 = new QLabel(groupBox_Drift);
        l_7->setObjectName(QString::fromUtf8("l_7"));
        l_7->setMargin(0);

        gridLayout_8->addWidget(l_7, 1, 0, 1, 1);

        spinBox_XScale = new QSpinBox(groupBox_Drift);
        spinBox_XScale->setObjectName(QString::fromUtf8("spinBox_XScale"));
        spinBox_XScale->setMinimum(10);
        spinBox_XScale->setMaximum(100);

        gridLayout_8->addWidget(spinBox_XScale, 1, 1, 1, 1);

        l_8 = new QLabel(groupBox_Drift);
        l_8->setObjectName(QString::fromUtf8("l_8"));

        gridLayout_8->addWidget(l_8, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame_Graph = new QFrame(groupBox_Drift);
        frame_Graph->setObjectName(QString::fromUtf8("frame_Graph"));
        frame_Graph->setMinimumSize(QSize(300, 300));
        frame_Graph->setMaximumSize(QSize(300, 300));
        frame_Graph->setFrameShape(QFrame::StyledPanel);
        frame_Graph->setFrameShadow(QFrame::Raised);

        horizontalLayout->addWidget(frame_Graph);


        gridLayout_8->addLayout(horizontalLayout, 0, 0, 1, 4);


        verticalLayout->addWidget(groupBox_Drift);

        groupBox_Configuration = new QGroupBox(guiderClass);
        groupBox_Configuration->setObjectName(QString::fromUtf8("groupBox_Configuration"));
        gridLayout_9 = new QGridLayout(groupBox_Configuration);
        gridLayout_9->setSpacing(4);
        gridLayout_9->setContentsMargins(4, 4, 4, 4);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        l_27 = new QLabel(groupBox_Configuration);
        l_27->setObjectName(QString::fromUtf8("l_27"));

        gridLayout_9->addWidget(l_27, 0, 0, 1, 1);

        comboBox_SquareSize = new QComboBox(groupBox_Configuration);
        comboBox_SquareSize->setObjectName(QString::fromUtf8("comboBox_SquareSize"));

        gridLayout_9->addWidget(comboBox_SquareSize, 0, 1, 1, 1);

        l_28 = new QLabel(groupBox_Configuration);
        l_28->setObjectName(QString::fromUtf8("l_28"));

        gridLayout_9->addWidget(l_28, 0, 2, 1, 2);

        l_29 = new QLabel(groupBox_Configuration);
        l_29->setObjectName(QString::fromUtf8("l_29"));

        gridLayout_9->addWidget(l_29, 1, 0, 1, 1);

        comboBox_QualityControl = new QComboBox(groupBox_Configuration);
        comboBox_QualityControl->setObjectName(QString::fromUtf8("comboBox_QualityControl"));

        gridLayout_9->addWidget(comboBox_QualityControl, 1, 1, 1, 1);

        comboBox_ThresholdAlg = new QComboBox(groupBox_Configuration);
        comboBox_ThresholdAlg->setObjectName(QString::fromUtf8("comboBox_ThresholdAlg"));

        gridLayout_9->addWidget(comboBox_ThresholdAlg, 0, 4, 1, 1);

        doubleSpinBox_QualityThreshold2 = new QDoubleSpinBox(groupBox_Configuration);
        doubleSpinBox_QualityThreshold2->setObjectName(QString::fromUtf8("doubleSpinBox_QualityThreshold2"));
        doubleSpinBox_QualityThreshold2->setMinimum(3);
        doubleSpinBox_QualityThreshold2->setMaximum(95);
        doubleSpinBox_QualityThreshold2->setValue(15);

        gridLayout_9->addWidget(doubleSpinBox_QualityThreshold2, 1, 4, 1, 1);

        checkBox_SwapDec = new QCheckBox(groupBox_Configuration);
        checkBox_SwapDec->setObjectName(QString::fromUtf8("checkBox_SwapDec"));

        gridLayout_9->addWidget(checkBox_SwapDec, 2, 0, 1, 1);

        doubleSpinBox_QualityThreshold1 = new QDoubleSpinBox(groupBox_Configuration);
        doubleSpinBox_QualityThreshold1->setObjectName(QString::fromUtf8("doubleSpinBox_QualityThreshold1"));
        doubleSpinBox_QualityThreshold1->setMinimum(3);
        doubleSpinBox_QualityThreshold1->setMaximum(95);
        doubleSpinBox_QualityThreshold1->setValue(50);

        gridLayout_9->addWidget(doubleSpinBox_QualityThreshold1, 1, 2, 1, 2);

        checkBox_SaveLog = new QCheckBox(groupBox_Configuration);
        checkBox_SaveLog->setObjectName(QString::fromUtf8("checkBox_SaveLog"));

        gridLayout_9->addWidget(checkBox_SaveLog, 2, 1, 1, 1);

        lineEdit_DriftFileName = new QLineEdit(groupBox_Configuration);
        lineEdit_DriftFileName->setObjectName(QString::fromUtf8("lineEdit_DriftFileName"));
        lineEdit_DriftFileName->setMaxLength(32);

        gridLayout_9->addWidget(lineEdit_DriftFileName, 2, 2, 1, 3);


        verticalLayout->addWidget(groupBox_Configuration);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_Info = new QGroupBox(guiderClass);
        groupBox_Info->setObjectName(QString::fromUtf8("groupBox_Info"));
        gridLayout_10 = new QGridLayout(groupBox_Info);
        gridLayout_10->setSpacing(4);
        gridLayout_10->setContentsMargins(4, 4, 4, 4);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        l_9 = new QLabel(groupBox_Info);
        l_9->setObjectName(QString::fromUtf8("l_9"));

        gridLayout_10->addWidget(l_9, 2, 2, 1, 1);

        l_FOV = new QLabel(groupBox_Info);
        l_FOV->setObjectName(QString::fromUtf8("l_FOV"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(l_FOV->sizePolicy().hasHeightForWidth());
        l_FOV->setSizePolicy(sizePolicy1);
        l_FOV->setFrameShape(QFrame::StyledPanel);
        l_FOV->setFrameShadow(QFrame::Sunken);
        l_FOV->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_10->addWidget(l_FOV, 2, 3, 1, 1);

        l_FbyD = new QLabel(groupBox_Info);
        l_FbyD->setObjectName(QString::fromUtf8("l_FbyD"));
        sizePolicy1.setHeightForWidth(l_FbyD->sizePolicy().hasHeightForWidth());
        l_FbyD->setSizePolicy(sizePolicy1);
        l_FbyD->setFrameShape(QFrame::StyledPanel);
        l_FbyD->setFrameShadow(QFrame::Sunken);
        l_FbyD->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_10->addWidget(l_FbyD, 2, 1, 1, 1);

        l_Focal = new QLabel(groupBox_Info);
        l_Focal->setObjectName(QString::fromUtf8("l_Focal"));
        sizePolicy1.setHeightForWidth(l_Focal->sizePolicy().hasHeightForWidth());
        l_Focal->setSizePolicy(sizePolicy1);
        l_Focal->setFrameShape(QFrame::StyledPanel);
        l_Focal->setFrameShadow(QFrame::Sunken);
        l_Focal->setScaledContents(false);
        l_Focal->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_10->addWidget(l_Focal, 1, 1, 1, 1);

        l_10 = new QLabel(groupBox_Info);
        l_10->setObjectName(QString::fromUtf8("l_10"));

        gridLayout_10->addWidget(l_10, 0, 0, 1, 2);

        spinBox_GuideRate = new QDoubleSpinBox(groupBox_Info);
        spinBox_GuideRate->setObjectName(QString::fromUtf8("spinBox_GuideRate"));
        spinBox_GuideRate->setDecimals(3);
        spinBox_GuideRate->setMinimum(0.01);
        spinBox_GuideRate->setMaximum(2);
        spinBox_GuideRate->setSingleStep(0.05);

        gridLayout_10->addWidget(spinBox_GuideRate, 0, 2, 1, 1);

        l_RecommendedGain = new QLabel(groupBox_Info);
        l_RecommendedGain->setObjectName(QString::fromUtf8("l_RecommendedGain"));

        gridLayout_10->addWidget(l_RecommendedGain, 0, 3, 1, 1);

        l_12 = new QLabel(groupBox_Info);
        l_12->setObjectName(QString::fromUtf8("l_12"));

        gridLayout_10->addWidget(l_12, 2, 0, 1, 1);

        l_11 = new QLabel(groupBox_Info);
        l_11->setObjectName(QString::fromUtf8("l_11"));

        gridLayout_10->addWidget(l_11, 1, 0, 1, 1);

        l_Aperture = new QLabel(groupBox_Info);
        l_Aperture->setObjectName(QString::fromUtf8("l_Aperture"));
        sizePolicy1.setHeightForWidth(l_Aperture->sizePolicy().hasHeightForWidth());
        l_Aperture->setSizePolicy(sizePolicy1);
        l_Aperture->setFrameShape(QFrame::StyledPanel);
        l_Aperture->setFrameShadow(QFrame::Sunken);
        l_Aperture->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_10->addWidget(l_Aperture, 1, 3, 1, 1);

        l_13 = new QLabel(groupBox_Info);
        l_13->setObjectName(QString::fromUtf8("l_13"));

        gridLayout_10->addWidget(l_13, 1, 2, 1, 1);

        checkBox_normalizeGain = new QCheckBox(groupBox_Info);
        checkBox_normalizeGain->setObjectName(QString::fromUtf8("checkBox_normalizeGain"));

        gridLayout_10->addWidget(checkBox_normalizeGain, 3, 0, 1, 4);


        verticalLayout_2->addWidget(groupBox_Info);

        groupBox_Control = new QGroupBox(guiderClass);
        groupBox_Control->setObjectName(QString::fromUtf8("groupBox_Control"));
        gridLayout_11 = new QGridLayout(groupBox_Control);
        gridLayout_11->setSpacing(4);
        gridLayout_11->setContentsMargins(4, 4, 4, 4);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        l_34 = new QLabel(groupBox_Control);
        l_34->setObjectName(QString::fromUtf8("l_34"));

        gridLayout_11->addWidget(l_34, 14, 0, 1, 1);

        spinBox_AccFramesRA = new QSpinBox(groupBox_Control);
        spinBox_AccFramesRA->setObjectName(QString::fromUtf8("spinBox_AccFramesRA"));
        spinBox_AccFramesRA->setMinimum(1);

        gridLayout_11->addWidget(spinBox_AccFramesRA, 2, 2, 1, 1);

        l_15 = new QLabel(groupBox_Control);
        l_15->setObjectName(QString::fromUtf8("l_15"));

        gridLayout_11->addWidget(l_15, 2, 0, 1, 2);

        l_30 = new QLabel(groupBox_Control);
        l_30->setObjectName(QString::fromUtf8("l_30"));

        gridLayout_11->addWidget(l_30, 8, 0, 1, 2);

        l_17 = new QLabel(groupBox_Control);
        l_17->setObjectName(QString::fromUtf8("l_17"));

        gridLayout_11->addWidget(l_17, 7, 0, 1, 2);

        spinBox_MaxPulseDEC = new QSpinBox(groupBox_Control);
        spinBox_MaxPulseDEC->setObjectName(QString::fromUtf8("spinBox_MaxPulseDEC"));
        spinBox_MaxPulseDEC->setMaximum(9999);

        gridLayout_11->addWidget(spinBox_MaxPulseDEC, 9, 3, 1, 1);

        l_ErrDEC = new QLabel(groupBox_Control);
        l_ErrDEC->setObjectName(QString::fromUtf8("l_ErrDEC"));
        sizePolicy1.setHeightForWidth(l_ErrDEC->sizePolicy().hasHeightForWidth());
        l_ErrDEC->setSizePolicy(sizePolicy1);
        l_ErrDEC->setFrameShape(QFrame::StyledPanel);
        l_ErrDEC->setFrameShadow(QFrame::Sunken);
        l_ErrDEC->setScaledContents(false);
        l_ErrDEC->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_ErrDEC, 14, 3, 1, 1);

        spinBox_DerGainDEC = new QDoubleSpinBox(groupBox_Control);
        spinBox_DerGainDEC->setObjectName(QString::fromUtf8("spinBox_DerGainDEC"));
        spinBox_DerGainDEC->setDecimals(2);
        spinBox_DerGainDEC->setMaximum(1000);

        gridLayout_11->addWidget(spinBox_DerGainDEC, 8, 3, 1, 1);

        l_33 = new QLabel(groupBox_Control);
        l_33->setObjectName(QString::fromUtf8("l_33"));

        gridLayout_11->addWidget(l_33, 13, 0, 1, 2);

        l_DeltaDEC = new QLabel(groupBox_Control);
        l_DeltaDEC->setObjectName(QString::fromUtf8("l_DeltaDEC"));
        sizePolicy1.setHeightForWidth(l_DeltaDEC->sizePolicy().hasHeightForWidth());
        l_DeltaDEC->setSizePolicy(sizePolicy1);
        l_DeltaDEC->setFrameShape(QFrame::StyledPanel);
        l_DeltaDEC->setFrameShadow(QFrame::Sunken);
        l_DeltaDEC->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_DeltaDEC, 12, 3, 1, 1);

        spinBox_MinPulseRA = new QSpinBox(groupBox_Control);
        spinBox_MinPulseRA->setObjectName(QString::fromUtf8("spinBox_MinPulseRA"));
        spinBox_MinPulseRA->setMaximum(9999);

        gridLayout_11->addWidget(spinBox_MinPulseRA, 10, 2, 1, 1);

        spinBox_DerGainRA = new QDoubleSpinBox(groupBox_Control);
        spinBox_DerGainRA->setObjectName(QString::fromUtf8("spinBox_DerGainRA"));
        spinBox_DerGainRA->setDecimals(2);
        spinBox_DerGainRA->setMaximum(1000);

        gridLayout_11->addWidget(spinBox_DerGainRA, 8, 2, 1, 1);

        l_32 = new QLabel(groupBox_Control);
        l_32->setObjectName(QString::fromUtf8("l_32"));

        gridLayout_11->addWidget(l_32, 10, 0, 1, 2);

        l_14 = new QLabel(groupBox_Control);
        l_14->setObjectName(QString::fromUtf8("l_14"));

        gridLayout_11->addWidget(l_14, 1, 0, 1, 2);

        spinBox_PropGainDEC = new QDoubleSpinBox(groupBox_Control);
        spinBox_PropGainDEC->setObjectName(QString::fromUtf8("spinBox_PropGainDEC"));
        spinBox_PropGainDEC->setDecimals(2);
        spinBox_PropGainDEC->setMaximum(1000);

        gridLayout_11->addWidget(spinBox_PropGainDEC, 6, 3, 1, 1);

        l_16 = new QLabel(groupBox_Control);
        l_16->setObjectName(QString::fromUtf8("l_16"));

        gridLayout_11->addWidget(l_16, 6, 0, 1, 2);

        spinBox_PropGainRA = new QDoubleSpinBox(groupBox_Control);
        spinBox_PropGainRA->setObjectName(QString::fromUtf8("spinBox_PropGainRA"));
        spinBox_PropGainRA->setDecimals(2);
        spinBox_PropGainRA->setMaximum(1000);

        gridLayout_11->addWidget(spinBox_PropGainRA, 6, 2, 1, 1);

        l_36 = new QLabel(groupBox_Control);
        l_36->setObjectName(QString::fromUtf8("l_36"));

        gridLayout_11->addWidget(l_36, 12, 0, 1, 1);

        groupBox_DirDEC = new QGroupBox(groupBox_Control);
        groupBox_DirDEC->setObjectName(QString::fromUtf8("groupBox_DirDEC"));
        groupBox_DirDEC->setFlat(true);
        groupBox_DirDEC->setCheckable(true);
        groupBox_DirDEC->setChecked(false);
        horizontalLayout_4 = new QHBoxLayout(groupBox_DirDEC);
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        checkBox_DirDECPlus = new QCheckBox(groupBox_DirDEC);
        checkBox_DirDECPlus->setObjectName(QString::fromUtf8("checkBox_DirDECPlus"));

        horizontalLayout_4->addWidget(checkBox_DirDECPlus);

        checkBox_DirDECMinus = new QCheckBox(groupBox_DirDEC);
        checkBox_DirDECMinus->setObjectName(QString::fromUtf8("checkBox_DirDECMinus"));

        horizontalLayout_4->addWidget(checkBox_DirDECMinus);


        gridLayout_11->addWidget(groupBox_DirDEC, 1, 3, 1, 1);

        l_Quality = new QLabel(groupBox_Control);
        l_Quality->setObjectName(QString::fromUtf8("l_Quality"));
        l_Quality->setFrameShape(QFrame::StyledPanel);
        l_Quality->setFrameShadow(QFrame::Sunken);
        l_Quality->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_Quality, 15, 1, 1, 1);

        groupBox_DirRA = new QGroupBox(groupBox_Control);
        groupBox_DirRA->setObjectName(QString::fromUtf8("groupBox_DirRA"));
        groupBox_DirRA->setFlat(true);
        groupBox_DirRA->setCheckable(true);
        groupBox_DirRA->setChecked(false);
        horizontalLayout_3 = new QHBoxLayout(groupBox_DirRA);
        horizontalLayout_3->setSpacing(4);
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_DirRAPlus = new QCheckBox(groupBox_DirRA);
        checkBox_DirRAPlus->setObjectName(QString::fromUtf8("checkBox_DirRAPlus"));

        horizontalLayout_3->addWidget(checkBox_DirRAPlus);

        checkBox_DirRAMinus = new QCheckBox(groupBox_DirRA);
        checkBox_DirRAMinus->setObjectName(QString::fromUtf8("checkBox_DirRAMinus"));

        horizontalLayout_3->addWidget(checkBox_DirRAMinus);


        gridLayout_11->addWidget(groupBox_DirRA, 1, 2, 1, 1);

        spinBox_IntGainRA = new QDoubleSpinBox(groupBox_Control);
        spinBox_IntGainRA->setObjectName(QString::fromUtf8("spinBox_IntGainRA"));
        spinBox_IntGainRA->setDecimals(2);
        spinBox_IntGainRA->setMaximum(1000);

        gridLayout_11->addWidget(spinBox_IntGainRA, 7, 2, 1, 1);

        l_31 = new QLabel(groupBox_Control);
        l_31->setObjectName(QString::fromUtf8("l_31"));

        gridLayout_11->addWidget(l_31, 9, 0, 1, 2);

        l_ErrRA = new QLabel(groupBox_Control);
        l_ErrRA->setObjectName(QString::fromUtf8("l_ErrRA"));
        sizePolicy1.setHeightForWidth(l_ErrRA->sizePolicy().hasHeightForWidth());
        l_ErrRA->setSizePolicy(sizePolicy1);
        l_ErrRA->setFrameShape(QFrame::StyledPanel);
        l_ErrRA->setFrameShadow(QFrame::Sunken);
        l_ErrRA->setScaledContents(false);
        l_ErrRA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_ErrRA, 14, 2, 1, 1);

        spinBox_MaxPulseRA = new QSpinBox(groupBox_Control);
        spinBox_MaxPulseRA->setObjectName(QString::fromUtf8("spinBox_MaxPulseRA"));
        spinBox_MaxPulseRA->setMaximum(9999);

        gridLayout_11->addWidget(spinBox_MaxPulseRA, 9, 2, 1, 1);

        spinBox_MinPulseDEC = new QSpinBox(groupBox_Control);
        spinBox_MinPulseDEC->setObjectName(QString::fromUtf8("spinBox_MinPulseDEC"));
        spinBox_MinPulseDEC->setMaximum(9999);

        gridLayout_11->addWidget(spinBox_MinPulseDEC, 10, 3, 1, 1);

        l_PulseRA = new QLabel(groupBox_Control);
        l_PulseRA->setObjectName(QString::fromUtf8("l_PulseRA"));
        sizePolicy1.setHeightForWidth(l_PulseRA->sizePolicy().hasHeightForWidth());
        l_PulseRA->setSizePolicy(sizePolicy1);
        l_PulseRA->setFrameShape(QFrame::StyledPanel);
        l_PulseRA->setFrameShadow(QFrame::Sunken);
        l_PulseRA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_PulseRA, 13, 2, 1, 1);

        pushButton_StartStop = new QPushButton(groupBox_Control);
        pushButton_StartStop->setObjectName(QString::fromUtf8("pushButton_StartStop"));

        gridLayout_11->addWidget(pushButton_StartStop, 15, 3, 1, 1);

        spinBox_IntGainDEC = new QDoubleSpinBox(groupBox_Control);
        spinBox_IntGainDEC->setObjectName(QString::fromUtf8("spinBox_IntGainDEC"));
        spinBox_IntGainDEC->setDecimals(2);
        spinBox_IntGainDEC->setMaximum(1000);

        gridLayout_11->addWidget(spinBox_IntGainDEC, 7, 3, 1, 1);

        checkBox_AverageFrames = new QCheckBox(groupBox_Control);
        checkBox_AverageFrames->setObjectName(QString::fromUtf8("checkBox_AverageFrames"));

        gridLayout_11->addWidget(checkBox_AverageFrames, 15, 2, 1, 1);

        l_PulseDEC = new QLabel(groupBox_Control);
        l_PulseDEC->setObjectName(QString::fromUtf8("l_PulseDEC"));
        sizePolicy1.setHeightForWidth(l_PulseDEC->sizePolicy().hasHeightForWidth());
        l_PulseDEC->setSizePolicy(sizePolicy1);
        l_PulseDEC->setFrameShape(QFrame::StyledPanel);
        l_PulseDEC->setFrameShadow(QFrame::Sunken);
        l_PulseDEC->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_PulseDEC, 13, 3, 1, 1);

        l_DeltaRA = new QLabel(groupBox_Control);
        l_DeltaRA->setObjectName(QString::fromUtf8("l_DeltaRA"));
        sizePolicy1.setHeightForWidth(l_DeltaRA->sizePolicy().hasHeightForWidth());
        l_DeltaRA->setSizePolicy(sizePolicy1);
        l_DeltaRA->setFrameShape(QFrame::StyledPanel);
        l_DeltaRA->setFrameShadow(QFrame::Sunken);
        l_DeltaRA->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_11->addWidget(l_DeltaRA, 12, 2, 1, 1);

        spinBox_AccFramesDEC = new QSpinBox(groupBox_Control);
        spinBox_AccFramesDEC->setObjectName(QString::fromUtf8("spinBox_AccFramesDEC"));
        spinBox_AccFramesDEC->setMinimum(1);

        gridLayout_11->addWidget(spinBox_AccFramesDEC, 2, 3, 1, 1);

        line_2 = new QFrame(groupBox_Control);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_11->addWidget(line_2, 11, 0, 1, 4);

        line = new QFrame(groupBox_Control);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_11->addWidget(line, 3, 0, 1, 4);

        l_35 = new QLabel(groupBox_Control);
        l_35->setObjectName(QString::fromUtf8("l_35"));

        gridLayout_11->addWidget(l_35, 15, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_Control);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        QWidget::setTabOrder(spinBox_XScale, spinBox_YScale);
        QWidget::setTabOrder(spinBox_YScale, comboBox_SquareSize);
        QWidget::setTabOrder(comboBox_SquareSize, comboBox_ThresholdAlg);
        QWidget::setTabOrder(comboBox_ThresholdAlg, comboBox_QualityControl);
        QWidget::setTabOrder(comboBox_QualityControl, doubleSpinBox_QualityThreshold1);
        QWidget::setTabOrder(doubleSpinBox_QualityThreshold1, doubleSpinBox_QualityThreshold2);
        QWidget::setTabOrder(doubleSpinBox_QualityThreshold2, checkBox_SwapDec);
        QWidget::setTabOrder(checkBox_SwapDec, checkBox_SaveLog);
        QWidget::setTabOrder(checkBox_SaveLog, lineEdit_DriftFileName);
        QWidget::setTabOrder(lineEdit_DriftFileName, spinBox_GuideRate);
        QWidget::setTabOrder(spinBox_GuideRate, checkBox_normalizeGain);
        QWidget::setTabOrder(checkBox_normalizeGain, groupBox_DirRA);
        QWidget::setTabOrder(groupBox_DirRA, checkBox_DirRAPlus);
        QWidget::setTabOrder(checkBox_DirRAPlus, checkBox_DirRAMinus);
        QWidget::setTabOrder(checkBox_DirRAMinus, groupBox_DirDEC);
        QWidget::setTabOrder(groupBox_DirDEC, checkBox_DirDECPlus);
        QWidget::setTabOrder(checkBox_DirDECPlus, checkBox_DirDECMinus);
        QWidget::setTabOrder(checkBox_DirDECMinus, spinBox_AccFramesRA);
        QWidget::setTabOrder(spinBox_AccFramesRA, spinBox_AccFramesDEC);
        QWidget::setTabOrder(spinBox_AccFramesDEC, spinBox_PropGainRA);
        QWidget::setTabOrder(spinBox_PropGainRA, spinBox_PropGainDEC);
        QWidget::setTabOrder(spinBox_PropGainDEC, spinBox_IntGainRA);
        QWidget::setTabOrder(spinBox_IntGainRA, spinBox_IntGainDEC);
        QWidget::setTabOrder(spinBox_IntGainDEC, spinBox_DerGainRA);
        QWidget::setTabOrder(spinBox_DerGainRA, spinBox_DerGainDEC);
        QWidget::setTabOrder(spinBox_DerGainDEC, spinBox_MaxPulseRA);
        QWidget::setTabOrder(spinBox_MaxPulseRA, spinBox_MaxPulseDEC);
        QWidget::setTabOrder(spinBox_MaxPulseDEC, spinBox_MinPulseRA);
        QWidget::setTabOrder(spinBox_MinPulseRA, spinBox_MinPulseDEC);
        QWidget::setTabOrder(spinBox_MinPulseDEC, checkBox_AverageFrames);
        QWidget::setTabOrder(checkBox_AverageFrames, pushButton_StartStop);

        retranslateUi(guiderClass);

        QMetaObject::connectSlotsByName(guiderClass);
    } // setupUi

    void retranslateUi(QWidget *guiderClass)
    {
        guiderClass->setWindowTitle(QApplication::translate("guiderClass", "Guider", 0, QApplication::UnicodeUTF8));
        groupBox_Drift->setTitle(QApplication::translate("guiderClass", "Drift graphics", 0, QApplication::UnicodeUTF8));
        l_7->setText(QApplication::translate("guiderClass", "X scale(frm.)", 0, QApplication::UnicodeUTF8));
        l_8->setText(QApplication::translate("guiderClass", "Y scale(\")", 0, QApplication::UnicodeUTF8));
        groupBox_Configuration->setTitle(QApplication::translate("guiderClass", "Configuration", 0, QApplication::UnicodeUTF8));
        l_27->setText(QApplication::translate("guiderClass", "Square size", 0, QApplication::UnicodeUTF8));
        l_28->setText(QApplication::translate("guiderClass", "Thresh. alg.", 0, QApplication::UnicodeUTF8));
        l_29->setText(QApplication::translate("guiderClass", "Q-ctrl,%", 0, QApplication::UnicodeUTF8));
        checkBox_SwapDec->setText(QApplication::translate("guiderClass", "swp.DEC", 0, QApplication::UnicodeUTF8));
        checkBox_SaveLog->setText(QApplication::translate("guiderClass", "save drift", 0, QApplication::UnicodeUTF8));
        groupBox_Info->setTitle(QApplication::translate("guiderClass", "Info", 0, QApplication::UnicodeUTF8));
        l_9->setText(QApplication::translate("guiderClass", "FOV,'", 0, QApplication::UnicodeUTF8));
        l_FOV->setText(QApplication::translate("guiderClass", "YYxYY", 0, QApplication::UnicodeUTF8));
        l_FbyD->setText(QApplication::translate("guiderClass", "xxx", 0, QApplication::UnicodeUTF8));
        l_Focal->setText(QApplication::translate("guiderClass", "xxx", 0, QApplication::UnicodeUTF8));
        l_10->setText(QApplication::translate("guiderClass", "Guiding rate,x15\"/sec", 0, QApplication::UnicodeUTF8));
        l_RecommendedGain->setText(QApplication::translate("guiderClass", "P=xxxxx", 0, QApplication::UnicodeUTF8));
        l_12->setText(QApplication::translate("guiderClass", "F/D", 0, QApplication::UnicodeUTF8));
        l_11->setText(QApplication::translate("guiderClass", "Focal,mm", 0, QApplication::UnicodeUTF8));
        l_Aperture->setText(QApplication::translate("guiderClass", "xx", 0, QApplication::UnicodeUTF8));
        l_13->setText(QApplication::translate("guiderClass", "Aperture,mm", 0, QApplication::UnicodeUTF8));
        checkBox_normalizeGain->setText(QApplication::translate("guiderClass", "Normalize gains", 0, QApplication::UnicodeUTF8));
        groupBox_Control->setTitle(QApplication::translate("guiderClass", "Control", 0, QApplication::UnicodeUTF8));
        l_34->setText(QApplication::translate("guiderClass", "RMS,\"", 0, QApplication::UnicodeUTF8));
        l_15->setText(QApplication::translate("guiderClass", "Accumulate frames", 0, QApplication::UnicodeUTF8));
        l_30->setText(QApplication::translate("guiderClass", "Derivative gain", 0, QApplication::UnicodeUTF8));
        l_17->setText(QApplication::translate("guiderClass", "Integral gain", 0, QApplication::UnicodeUTF8));
        l_ErrDEC->setText(QApplication::translate("guiderClass", "xxx", 0, QApplication::UnicodeUTF8));
        l_33->setText(QApplication::translate("guiderClass", "Pulse length, ms", 0, QApplication::UnicodeUTF8));
        l_DeltaDEC->setText(QApplication::translate("guiderClass", "xxxx", 0, QApplication::UnicodeUTF8));
        l_32->setText(QApplication::translate("guiderClass", "Minimum pulse", 0, QApplication::UnicodeUTF8));
        l_14->setText(QApplication::translate("guiderClass", "Enable directions", 0, QApplication::UnicodeUTF8));
        l_16->setText(QApplication::translate("guiderClass", "Proportional gain", 0, QApplication::UnicodeUTF8));
        l_36->setText(QApplication::translate("guiderClass", "Delta ,\"", 0, QApplication::UnicodeUTF8));
        groupBox_DirDEC->setTitle(QApplication::translate("guiderClass", "DEC", 0, QApplication::UnicodeUTF8));
        checkBox_DirDECPlus->setText(QApplication::translate("guiderClass", "+", 0, QApplication::UnicodeUTF8));
        checkBox_DirDECMinus->setText(QApplication::translate("guiderClass", "-", 0, QApplication::UnicodeUTF8));
        l_Quality->setText(QApplication::translate("guiderClass", "xxx", 0, QApplication::UnicodeUTF8));
        groupBox_DirRA->setTitle(QApplication::translate("guiderClass", "RA", 0, QApplication::UnicodeUTF8));
        checkBox_DirRAPlus->setText(QApplication::translate("guiderClass", "+", 0, QApplication::UnicodeUTF8));
        checkBox_DirRAMinus->setText(QApplication::translate("guiderClass", "-", 0, QApplication::UnicodeUTF8));
        l_31->setText(QApplication::translate("guiderClass", "Maximum pulse", 0, QApplication::UnicodeUTF8));
        l_ErrRA->setText(QApplication::translate("guiderClass", "xxx", 0, QApplication::UnicodeUTF8));
        l_PulseRA->setText(QApplication::translate("guiderClass", "xxxx", 0, QApplication::UnicodeUTF8));
        pushButton_StartStop->setText(QApplication::translate("guiderClass", "Start", 0, QApplication::UnicodeUTF8));
        checkBox_AverageFrames->setText(QApplication::translate("guiderClass", "avg.frm.", 0, QApplication::UnicodeUTF8));
        l_PulseDEC->setText(QApplication::translate("guiderClass", "xxxx", 0, QApplication::UnicodeUTF8));
        l_DeltaRA->setText(QApplication::translate("guiderClass", "xxxx", 0, QApplication::UnicodeUTF8));
        l_35->setText(QApplication::translate("guiderClass", "Quality,%", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class guiderClass: public Ui_guiderClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIDER_H
