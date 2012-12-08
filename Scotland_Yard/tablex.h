#ifndef TABLEX_H
#define TABLEX_H

#include <QDialog>

namespace Ui {
class TableX;
}

class TableX : public QDialog
{
    Q_OBJECT
    
public:
    explicit TableX(QWidget *parent = 0);
    ~TableX();
    
private:
    Ui::TableX *ui;
};

#endif // TABLEX_H
