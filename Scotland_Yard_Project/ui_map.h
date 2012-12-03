/********************************************************************************
** Form generated from reading UI file 'map.ui'
**
** Created: Mon 3. Dec 20:24:44 2012
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
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Map
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLCDNumber *lcdNumber;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
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
    QPushButton *pushButton_6;
    QLabel *label_10;
    QFrame *line_4;
    QPushButton *pushButton_7;

    void setupUi(QDialog *Map)
    {
        if (Map->objectName().isEmpty())
            Map->setObjectName(QString::fromUtf8("Map"));
        Map->resize(1280, 720);
        label = new QLabel(Map);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(1130, 10, 111, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        pushButton = new QPushButton(Map);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1070, 40, 91, 41));
        pushButton_2 = new QPushButton(Map);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(1070, 90, 91, 41));
        pushButton_3 = new QPushButton(Map);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(1070, 140, 91, 41));
        lcdNumber = new QLCDNumber(Map);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(1190, 50, 64, 23));
        lcdNumber_2 = new QLCDNumber(Map);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setGeometry(QRect(1190, 100, 64, 23));
        lcdNumber_3 = new QLCDNumber(Map);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setGeometry(QRect(1190, 150, 64, 23));
        pushButton_4 = new QPushButton(Map);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(1070, 190, 91, 41));
        pushButton_5 = new QPushButton(Map);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(1070, 240, 91, 41));
        lcdNumber_4 = new QLCDNumber(Map);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setGeometry(QRect(1190, 200, 64, 23));
        lcdNumber_5 = new QLCDNumber(Map);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setGeometry(QRect(1190, 250, 64, 23));
        line = new QFrame(Map);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(1070, 290, 201, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(Map);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(1100, 310, 141, 20));
        label_2->setFont(font);
        label_3 = new QLabel(Map);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(1090, 340, 71, 16));
        label_4 = new QLabel(Map);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(1090, 370, 71, 16));
        label_5 = new QLabel(Map);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(1090, 400, 101, 16));
        label_6 = new QLabel(Map);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1090, 430, 101, 16));
        label_7 = new QLabel(Map);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1090, 460, 101, 16));
        lcdNumber_6 = new QLCDNumber(Map);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setGeometry(QRect(1180, 340, 64, 23));
        lcdNumber_7 = new QLCDNumber(Map);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));
        lcdNumber_7->setGeometry(QRect(1180, 370, 64, 23));
        lcdNumber_8 = new QLCDNumber(Map);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));
        lcdNumber_8->setGeometry(QRect(1180, 400, 64, 23));
        lcdNumber_9 = new QLCDNumber(Map);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));
        lcdNumber_9->setGeometry(QRect(1180, 430, 64, 23));
        lcdNumber_10 = new QLCDNumber(Map);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));
        lcdNumber_10->setGeometry(QRect(1180, 460, 64, 23));
        line_2 = new QFrame(Map);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1070, 600, 201, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_8 = new QLabel(Map);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1090, 520, 81, 16));
        label_9 = new QLabel(Map);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(1090, 550, 81, 16));
        lcdNumber_11 = new QLCDNumber(Map);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));
        lcdNumber_11->setGeometry(QRect(1180, 520, 64, 23));
        lcdNumber_12 = new QLCDNumber(Map);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));
        lcdNumber_12->setGeometry(QRect(1180, 550, 64, 23));
        line_3 = new QFrame(Map);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1070, 490, 201, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        pushButton_6 = new QPushButton(Map);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(1080, 650, 91, 23));
        label_10 = new QLabel(Map);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(1130, 630, 141, 20));
        label_10->setFont(font);
        line_4 = new QFrame(Map);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(1070, 610, 201, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        pushButton_7 = new QPushButton(Map);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(1180, 650, 91, 23));

        retranslateUi(Map);

        QMetaObject::connectSlotsByName(Map);
    } // setupUi

    void retranslateUi(QDialog *Map)
    {
        Map->setWindowTitle(QApplication::translate("Map", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Map", "Nazwa gracza", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Map", "Taxi", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("Map", "Bus", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("Map", "Underground", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("Map", "Black Ticket", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("Map", "Double Ticket", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Map", "Stan ticket\303\263w Pana X", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Map", "Taxi", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Map", "Bus", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Map", "Underground", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Map", "Black ticket", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Map", "Double ticket", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Map", "Numer tury:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Map", "Do ujawnienia X:", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("Map", "Ustawienia", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        pushButton_7->setText(QApplication::translate("Map", "Menu g\305\202\303\263wne", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Map: public Ui_Map {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAP_H
