/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
<<<<<<< HEAD
** Created: Tue 4. Dec 12:12:27 2012
=======
** Created: Tue 4. Dec 03:13:32 2012
>>>>>>> 6301f5d59de266c2acc2f644b2a7039f2061472b
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
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QLCDNumber *lcdNumber_5;
    QFrame *line;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLCDNumber *lcdNumber_6;
    QLCDNumber *lcdNumber_7;
    QLCDNumber *lcdNumber_8;
    QLCDNumber *lcdNumber_9;
    QLCDNumber *lcdNumber_10;
    QFrame *line_2;
    QLabel *label_8;
    QLabel *label_9;
    QLCDNumber *lcdNumber_11;
    QLCDNumber *lcdNumber_12;
    QFrame *line_3;
    QFrame *line_4;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
<<<<<<< HEAD
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
=======
    QPushButton *pushButton_8;
    QFrame *line_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;
>>>>>>> 6301f5d59de266c2acc2f644b2a7039f2061472b

    void setupUi(QMainWindow *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(1280, 750);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Map->sizePolicy().hasHeightForWidth());
        Map->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Map);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1120, 20, 91, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1080, 50, 81, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/grafika/taxi.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(57, 25));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1080, 90, 81, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/grafika/bus.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(57, 25));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1080, 130, 81, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/grafika/underground.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setIconSize(QSize(57, 25));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1080, 170, 81, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1080, 210, 81, 31));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(1180, 50, 64, 23));
        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(1180, 90, 64, 23));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(1180, 130, 64, 23));
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(1180, 170, 64, 23));
        lcdNumber_5 = new QLCDNumber(centralwidget);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(1180, 210, 64, 23));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1080, 240, 181, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1120, 260, 111, 20));
        label_2->setFont(font);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1090, 290, 46, 13));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1090, 320, 46, 13));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1090, 350, 71, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1090, 380, 71, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1090, 410, 71, 16));
        lcdNumber_6 = new QLCDNumber(centralwidget);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(1180, 290, 64, 23));
        lcdNumber_7 = new QLCDNumber(centralwidget);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(1180, 320, 64, 23));
        lcdNumber_8 = new QLCDNumber(centralwidget);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));
        lcdNumber_8->setGeometry(QRect(1180, 350, 64, 23));
        lcdNumber_9 = new QLCDNumber(centralwidget);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));
        lcdNumber_9->setGeometry(QRect(1180, 380, 64, 23));
        lcdNumber_10 = new QLCDNumber(centralwidget);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));
        lcdNumber_10->setGeometry(QRect(1180, 410, 64, 23));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1080, 440, 181, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1090, 470, 91, 16));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1090, 500, 91, 16));
        lcdNumber_11 = new QLCDNumber(centralwidget);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));
        lcdNumber_11->setGeometry(QRect(1180, 470, 64, 23));
        lcdNumber_12 = new QLCDNumber(centralwidget);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));
        lcdNumber_12->setGeometry(QRect(1180, 500, 64, 23));
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1080, 570, 181, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1080, 580, 181, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1130, 610, 91, 23));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_6->setFont(font1);
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1130, 640, 91, 23));
        pushButton_7->setFont(font1);
<<<<<<< HEAD
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1041, 701));
        scrollArea->setStyleSheet(QString::fromUtf8("background-image: url(:/img/map.jpg)"));
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1018, 809));
        sizePolicy.setHeightForWidth(scrollAreaWidgetContents->sizePolicy().hasHeightForWidth());
        scrollAreaWidgetContents->setSizePolicy(sizePolicy);
        scrollArea->setWidget(scrollAreaWidgetContents);
=======
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(1130, 540, 101, 23));
        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(1050, 10, 20, 671));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);
>>>>>>> 6301f5d59de266c2acc2f644b2a7039f2061472b
        Map->setCentralWidget(centralwidget);

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QMainWindow *Map)
    {
        Map->setWindowTitle(QApplication::translate("Map", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Map", "Nazwa gracza", 0, QApplication::UnicodeUTF8));
<<<<<<< HEAD
        pushButton->setText(QApplication::translate("Map", "Taxi", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Map", "Busss", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Map", "Underground", 0, QApplication::UnicodeUTF8));
=======
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
>>>>>>> 6301f5d59de266c2acc2f644b2a7039f2061472b
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
        pushButton_6->setText(QApplication::translate("Map", "Ustawienia", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("Map", "Menu g\305\202\303\263wne", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("Map", "Tabela ruch\303\263w X", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
