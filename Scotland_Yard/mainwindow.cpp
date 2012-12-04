#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    mapa.show();
    //mapa.setEnabled(false);
    mapa.ustawienia.show();
}

void MainWindow::on_pushButton_2_clicked()
{
    this->close();
}
