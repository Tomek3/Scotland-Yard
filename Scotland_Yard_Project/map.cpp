#include "map.h"
#include "ui_map.h"

Map::Map(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Map)
{
    ui->setupUi(this);
}

Map::~Map()
{
    delete ui;
}

void Map::on_pushButton_6_clicked()
{

}

void Map::on_pushButton_7_clicked()
{
    this->close();
}
