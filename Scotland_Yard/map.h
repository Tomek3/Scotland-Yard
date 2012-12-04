#ifndef MAP_H
#define MAP_H

#include <QMainWindow>
#include "settings.h"
#include "tablex.h"

namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT
    
public:
    friend class MainWindow;
    explicit Map(QWidget *parent = 0);
    ~Map();
    
private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Map *ui;
    Settings ustawienia;
    TableX ruchyX;
};

#endif // MAP_H
