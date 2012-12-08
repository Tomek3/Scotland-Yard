/********************************************************************************
** Form generated from reading UI file 'tablex.ui'
**
** Created: Sat 8. Dec 18:47:52 2012
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEX_H
#define UI_TABLEX_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_TableX
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;

    void setupUi(QDialog *TableX)
    {
        if (TableX->objectName().isEmpty())
            TableX->setObjectName(QString::fromUtf8("TableX"));
        TableX->resize(400, 469);
        buttonBox = new QDialogButtonBox(TableX);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 430, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(TableX);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 10, 161, 21));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(TableX);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 390, 81, 20));
        lineEdit = new QLineEdit(TableX);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 390, 61, 20));

        retranslateUi(TableX);
        QObject::connect(buttonBox, SIGNAL(accepted()), TableX, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TableX, SLOT(reject()));

        QMetaObject::connectSlotsByName(TableX);
    } // setupUi

    void retranslateUi(QDialog *TableX)
    {
        TableX->setWindowTitle(QApplication::translate("TableX", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TableX", "Tabela ruch\303\263w Pana X", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TableX", "Podaj pozycje:", 0, QApplication::UnicodeUTF8));
        lineEdit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TableX: public Ui_TableX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEX_H
