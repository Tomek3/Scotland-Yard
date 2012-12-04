#include "map.h"
#include "ui_map.h"

Map::Map(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);
}

Map::~Map()
{
    delete ui;
}

void Map::on_pushButton_7_clicked()
{
    this->close();
}

void Map::on_pushButton_6_clicked()
{
   // this->setEnabled(false);
    ustawienia.show();

}

void Map::on_pushButton_8_clicked()
{
    ruchyX.show();
}
