/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created: Mon 17. Dec 20:04:44 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAP_H
#define UI_MAP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout;
    QFrame *line_5;
    QLabel *label;
    QPushButton *pushButton;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton_2;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QPushButton *pushButton_4;
    QLCDNumber *lcdNumber_4;
    QPushButton *pushButton_5;
    QLCDNumber *lcdNumber_5;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber_6;
    QLabel *label_4;
    QLCDNumber *lcdNumber_7;
    QLabel *label_5;
    QLCDNumber *lcdNumber_8;
    QLabel *label_6;
    QLCDNumber *lcdNumber_9;
    QLabel *label_7;
    QLCDNumber *lcdNumber_10;
    QFrame *line_2;
    QLabel *label_8;
    QLCDNumber *lcdNumber_11;
    QLabel *label_9;
    QLCDNumber *lcdNumber_12;
    QPushButton *pushButton_8;
    QFrame *line_3;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_7;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(1280, 720);
        centralwidget = new QWidget(Map);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background: url(:/images/grafika/map.jpg)"));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1021, 807));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8(""));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 0, 0, 27, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/grafika/taxi.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton, 1, 1, 1, 1);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));

        gridLayout->addWidget(lcdNumber, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/grafika/bus.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));

        gridLayout->addWidget(lcdNumber_2, 2, 2, 1, 1);

        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));

        gridLayout->addWidget(lcdNumber_3, 3, 2, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 1, 1, 1);

        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));

        gridLayout->addWidget(lcdNumber_4, 4, 2, 1, 1);

        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 5, 1, 1, 1);

        lcdNumber_5 = new QLCDNumber(centralwidget);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));

        gridLayout->addWidget(lcdNumber_5, 5, 2, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 7, 1, 1, 2);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 9, 1, 1, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 10, 1, 1, 1);

        lcdNumber_6 = new QLCDNumber(centralwidget);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));

        gridLayout->addWidget(lcdNumber_6, 10, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 11, 1, 1, 1);

        lcdNumber_7 = new QLCDNumber(centralwidget);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));

        gridLayout->addWidget(lcdNumber_7, 11, 2, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 12, 1, 1, 1);

        lcdNumber_8 = new QLCDNumber(centralwidget);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));

        gridLayout->addWidget(lcdNumber_8, 12, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 13, 1, 1, 1);

        lcdNumber_9 = new QLCDNumber(centralwidget);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));

        gridLayout->addWidget(lcdNumber_9, 13, 2, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 14, 1, 1, 1);

        lcdNumber_10 = new QLCDNumber(centralwidget);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));

        gridLayout->addWidget(lcdNumber_10, 14, 2, 1, 1);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 16, 1, 1, 2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 18, 1, 1, 1);

        lcdNumber_11 = new QLCDNumber(centralwidget);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));

        gridLayout->addWidget(lcdNumber_11, 18, 2, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 19, 1, 1, 1);

        lcdNumber_12 = new QLCDNumber(centralwidget);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));

        gridLayout->addWidget(lcdNumber_12, 19, 2, 1, 1);

        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_8->setFont(font1);

        gridLayout->addWidget(pushButton_8, 21, 1, 1, 2);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 23, 1, 1, 2);

        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFont(font1);

        gridLayout->addWidget(pushButton_6, 25, 1, 1, 2);

        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setFont(font1);

        gridLayout->addWidget(pushButton_7, 26, 1, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 8, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 15, 2, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 17, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 20, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_6, 22, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_7, 24, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/grafika/underground.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton_3, 3, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        Map->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Map);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1280, 21));
        Map->setMenuBar(menubar);
        statusbar = new QStatusBar(Map);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Map->setStatusBar(statusbar);

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QMainWindow *Map)
    {
        Map->setWindowTitle(QApplication::translate("Map", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Map", "Nazwa gracza", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Map", "Taxi", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Map", "Bus", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Map", "Black ticket", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Map", "Double ticket", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Map", "Tickety Pana X", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Map", "Taxi:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Map", "Bus:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Map", "Underground:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Map", "Black ticket:", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Map", "Double ticket:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Map", "Numer tury:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Map", "Do ujawnienia X:", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Map", "Tabela ruch\303\263w X", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Map", "Ustawienia", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Map", "Menu g\305\202\303\263wne", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Map", "Underground", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
