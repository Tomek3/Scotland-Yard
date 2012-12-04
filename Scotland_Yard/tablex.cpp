#include "tablex.h"
#include "ui_tablex.h"

TableX::TableX(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TableX)
{
    ui->setupUi(this);
}

TableX::~TableX()
{
    delete ui;
}
