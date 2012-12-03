#ifndef SETTINGS_H
#define SETTINGS_H

#include <QMainWindow>
#include "map.h"

namespace Ui {
class Settings;
}

class Settings : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Settings(QWidget *parent = 0);
    ~Settings();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::Settings *ui;
    Map mapa;
};

#endif // SETTINGS_H
