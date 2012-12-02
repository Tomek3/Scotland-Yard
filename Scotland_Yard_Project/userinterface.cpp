#include "userinterface.h"
#include "ui_userinterface.h"

UserInterface::UserInterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserInterface)
{
    ui->setupUi(this);
}

UserInterface::~UserInterface()
{
    delete ui;
}
