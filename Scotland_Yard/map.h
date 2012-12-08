#ifndef MAP_H
#define MAP_H

#include <QMainWindow>


namespace Ui {
class Map;
}

class Map : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Map(QWidget *parent = 0);
    ~Map();
    
private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Map *ui;
    //Settings ustawienia;
};

#endif // MAP_H
