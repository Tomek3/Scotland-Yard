/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created: Sun 2. Dec 19:46:04 2012
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_UserInterface
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserInterface)
    {
        if (UserInterface->objectName().isEmpty())
            UserInterface->setObjectName(QString::fromUtf8("UserInterface"));
        UserInterface->resize(400, 300);
        buttonBox = new QDialogButtonBox(UserInterface);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(UserInterface);
        QObject::connect(buttonBox, SIGNAL(accepted()), UserInterface, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UserInterface, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserInterface);
    } // setupUi

    void retranslateUi(QDialog *UserInterface)
    {
        UserInterface->setWindowTitle(QApplication::translate("UserInterface", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class UserInterface: public Ui_UserInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
