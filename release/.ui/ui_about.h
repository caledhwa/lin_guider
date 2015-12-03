/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aboutClass
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget_Pages;
    QWidget *tab_Main;
    QGridLayout *gridLayout_3;
    QScrollArea *scrollArea_Main;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QLabel *label_Info;
    QWidget *tab_Credits;
    QGridLayout *gridLayout_5;
    QScrollArea *scrollArea_Credits;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_4;
    QLabel *label_Info_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_Image;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Ok;

    void setupUi(QDialog *aboutClass)
    {
        if (aboutClass->objectName().isEmpty())
            aboutClass->setObjectName(QString::fromUtf8("aboutClass"));
        aboutClass->resize(570, 405);
        aboutClass->setMinimumSize(QSize(450, 295));
        aboutClass->setMaximumSize(QSize(640, 450));
        gridLayout_2 = new QGridLayout(aboutClass);
        gridLayout_2->setSpacing(4);
        gridLayout_2->setContentsMargins(4, 4, 4, 4);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget_Pages = new QTabWidget(aboutClass);
        tabWidget_Pages->setObjectName(QString::fromUtf8("tabWidget_Pages"));
        tabWidget_Pages->setTabShape(QTabWidget::Rounded);
        tab_Main = new QWidget();
        tab_Main->setObjectName(QString::fromUtf8("tab_Main"));
        gridLayout_3 = new QGridLayout(tab_Main);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        scrollArea_Main = new QScrollArea(tab_Main);
        scrollArea_Main->setObjectName(QString::fromUtf8("scrollArea_Main"));
        scrollArea_Main->setFrameShape(QFrame::Panel);
        scrollArea_Main->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 404, 315));
        gridLayout = new QGridLayout(scrollAreaWidgetContents);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_Info = new QLabel(scrollAreaWidgetContents);
        label_Info->setObjectName(QString::fromUtf8("label_Info"));
        label_Info->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Info->setWordWrap(true);
        label_Info->setOpenExternalLinks(true);
        label_Info->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout->addWidget(label_Info, 0, 0, 1, 1);

        scrollArea_Main->setWidget(scrollAreaWidgetContents);

        gridLayout_3->addWidget(scrollArea_Main, 0, 0, 1, 1);

        tabWidget_Pages->addTab(tab_Main, QString());
        tab_Credits = new QWidget();
        tab_Credits->setObjectName(QString::fromUtf8("tab_Credits"));
        gridLayout_5 = new QGridLayout(tab_Credits);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        scrollArea_Credits = new QScrollArea(tab_Credits);
        scrollArea_Credits->setObjectName(QString::fromUtf8("scrollArea_Credits"));
        scrollArea_Credits->setFrameShape(QFrame::Panel);
        scrollArea_Credits->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 153, 187));
        gridLayout_4 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_Info_2 = new QLabel(scrollAreaWidgetContents_2);
        label_Info_2->setObjectName(QString::fromUtf8("label_Info_2"));
        label_Info_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_Info_2->setWordWrap(true);
        label_Info_2->setOpenExternalLinks(true);
        label_Info_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);

        gridLayout_4->addWidget(label_Info_2, 0, 0, 1, 1);

        scrollArea_Credits->setWidget(scrollAreaWidgetContents_2);

        gridLayout_5->addWidget(scrollArea_Credits, 0, 0, 1, 1);

        tabWidget_Pages->addTab(tab_Credits, QString());

        gridLayout_2->addWidget(tabWidget_Pages, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_Image = new QLabel(aboutClass);
        label_Image->setObjectName(QString::fromUtf8("label_Image"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_Image->sizePolicy().hasHeightForWidth());
        label_Image->setSizePolicy(sizePolicy);
        label_Image->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lin_guider.png")));

        verticalLayout->addWidget(label_Image);

        verticalSpacer = new QSpacerItem(47, 58, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 4, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(304, 24, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Ok = new QPushButton(aboutClass);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_Ok->sizePolicy().hasHeightForWidth());
        pushButton_Ok->setSizePolicy(sizePolicy1);
        pushButton_Ok->setDefault(true);

        horizontalLayout->addWidget(pushButton_Ok);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 3, 1);

        QWidget::setTabOrder(tabWidget_Pages, scrollArea_Main);
        QWidget::setTabOrder(scrollArea_Main, scrollArea_Credits);
        QWidget::setTabOrder(scrollArea_Credits, pushButton_Ok);

        retranslateUi(aboutClass);

        tabWidget_Pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(aboutClass);
    } // setupUi

    void retranslateUi(QDialog *aboutClass)
    {
        aboutClass->setWindowTitle(QApplication::translate("aboutClass", "about", 0, QApplication::UnicodeUTF8));
        label_Info->setText(QApplication::translate("aboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Lin-guider is an astronomical autoguiding program.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This version supports:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Video input:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   Philips, Logitech, etc UVC webcams, QHY5, QHY5L-II-M, QHY5L-II-C, QHY5-II, QHY6, DSI2PRO, ATIK"
                        ", Starlight Xpress, ZWO ASI special astrocams.</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Mount control:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">   FTDI chip-based, parallel (LPT) port-based, GPIO-based commutators, GPUSB, Nexstar, QHY5, QHY5L-II-M, QHY5L-II-C, QHY5-II, QHY6, ATIK, Starlight Xpress, ZWO ASI astrocams as pulse drivers.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">This is an experimental software.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-t"
                        "op:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The program is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">*VERSION*</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Visit <a href=\"http://sourceforge.net/projects/linguider/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://sourceforge.net/projects/linguider/</span></a></p>\n"
"<p "
                        "style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Support <a href=\"mailto:galaxy_master@mail.ru\"><span style=\" text-decoration: underline; color:#0000ff;\">galaxy_master@mail.ru</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget_Pages->setTabText(tabWidget_Pages->indexOf(tab_Main), QApplication::translate("aboutClass", "Information", 0, QApplication::UnicodeUTF8));
        label_Info_2->setText(QApplication::translate("aboutClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Tahoma'; font-size:8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Rumen G.Bogdanovski</span> (<a href=\"mailto:rumen@skyarchive.org\"><span style=\" text-decoration: underline; color:#0000ff;\">rumen@skyarchive.org</span></a>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Anat Ruangrassamee</span> (<a href=\"mailto:aruangra@yahoo.com\"><span style=\" text-decoration: underline; color:#0000ff;\">aruangra@yahoo.com</span></a>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; ma"
                        "rgin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Giampiero Spezzano</span> (<a href=\"mailto:gspezzano@gmail.com\"><span style=\" text-decoration: underline; color:#0000ff;\">gspezzano@gmail.com</span></a>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Ben Gilsrud</span> (<a href=\"mailto:bgilsrud@gmail.com\"><span style=\" text-decoration: underline; color:#0000ff;\">bgilsrud@gmail.com</span></a>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Grey</span> (<a href=\"mailto:ii@ru.ru\"><span style=\" text-decoration: underline; color:#0000ff;\">ii@ru.ru</span></a>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">C"
                        "live Rogers</span> (<a href=\"mailto:c.rogers@ntlworld.com\"><span style=\" text-decoration: underline; color:#0000ff;\">c.rogers@ntlworld.com</span></a>)</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">Maxim Parygin</span> (<a href=\"mailto:developer.mak@gmail.com\"><span style=\" text-decoration: underline; color:#0000ff;\">developer.mak@gmail.com</span></a>)</p></body></html>", 0, QApplication::UnicodeUTF8));
        tabWidget_Pages->setTabText(tabWidget_Pages->indexOf(tab_Credits), QApplication::translate("aboutClass", "Credits", 0, QApplication::UnicodeUTF8));
        label_Image->setText(QString());
        pushButton_Ok->setText(QApplication::translate("aboutClass", "&OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class aboutClass: public Ui_aboutClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
