#ifndef MAP_H
#define MAP_H

#include <QDialog>
#include "settings.h"

namespace Ui {
class Map;
}

class Map : public QDialog
{
    Q_OBJECT

public:
    explicit Map(QWidget *parent = 0);
    ~Map();
    
private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Map *ui;
    //Settings set;
};

#endif // MAP_H
