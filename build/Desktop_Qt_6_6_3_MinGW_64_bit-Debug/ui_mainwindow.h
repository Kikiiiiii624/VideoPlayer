/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <tmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    TMyVideoWidget *videoWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnStop;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QPushButton *pushButton;
    QFrame *line;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labCurMedia;
    QSlider *sliderPosition;
    QLabel *LabRatio;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(609, 412);
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\256\213\344\275\223")});
        font.setPointSize(10);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(1);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName("groupBox");
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(1);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 127);"));

        verticalLayout->addWidget(label);

        videoWidget = new TMyVideoWidget(groupBox);
        videoWidget->setObjectName("videoWidget");

        verticalLayout->addWidget(videoWidget);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 50);

        verticalLayout_2->addWidget(groupBox);

        widget = new QWidget(centralWidget);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 35));
        widget->setMaximumSize(QSize(16777215, 25));
        widget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(9);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(1, 1, 1, 1);
        btnAdd = new QPushButton(widget);
        btnAdd->setObjectName("btnAdd");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/001.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon);
        btnAdd->setFlat(true);

        horizontalLayout->addWidget(btnAdd);

        btnPlay = new QPushButton(widget);
        btnPlay->setObjectName("btnPlay");
        btnPlay->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/620.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon1);
        btnPlay->setFlat(true);

        horizontalLayout->addWidget(btnPlay);

        btnPause = new QPushButton(widget);
        btnPause->setObjectName("btnPause");
        btnPause->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/622.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);
        btnPause->setFlat(true);

        horizontalLayout->addWidget(btnPause);

        btnStop = new QPushButton(widget);
        btnStop->setObjectName("btnStop");
        btnStop->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/624.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon3);
        btnStop->setFlat(true);

        horizontalLayout->addWidget(btnStop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSound = new QPushButton(widget);
        btnSound->setObjectName("btnSound");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/volumn.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSound->setIcon(icon4);
        btnSound->setFlat(true);

        horizontalLayout->addWidget(btnSound);

        sliderVolumn = new QSlider(widget);
        sliderVolumn->setObjectName("sliderVolumn");
        sliderVolumn->setMaximumSize(QSize(160, 16777215));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(sliderVolumn);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/237.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon5);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(pushButton);


        verticalLayout_2->addWidget(widget);

        line = new QFrame(centralWidget);
        line->setObjectName("line");
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);

        verticalLayout_2->addWidget(line);

        widget_2 = new QWidget(centralWidget);
        widget_2->setObjectName("widget_2");
        widget_2->setMaximumSize(QSize(16777215, 25));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(9);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(1, 1, 1, 1);
        labCurMedia = new QLabel(widget_2);
        labCurMedia->setObjectName("labCurMedia");
        labCurMedia->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(labCurMedia);

        sliderPosition = new QSlider(widget_2);
        sliderPosition->setObjectName("sliderPosition");
        sliderPosition->setTracking(false);
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderPosition);

        LabRatio = new QLabel(widget_2);
        LabRatio->setObjectName("LabRatio");
        LabRatio->setMinimumSize(QSize(80, 0));

        horizontalLayout_2->addWidget(LabRatio);


        verticalLayout_2->addWidget(widget_2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700; font-style:italic; color:#ffffff;\">\350\247\206\351\242\221\346\222\255\346\224\276\345\231\250</span></p></body></html>", nullptr));
        btnAdd->setText(QString());
        btnPlay->setText(QString());
        btnPause->setText(QString());
        btnStop->setText(QString());
        btnSound->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\345\205\250\345\261\217", nullptr));
        labCurMedia->setText(QCoreApplication::translate("MainWindow", "\346\227\240\346\233\262\347\233\256", nullptr));
        LabRatio->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
