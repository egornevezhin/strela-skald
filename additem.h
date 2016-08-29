#ifndef ADDITEM_H
#define ADDITEM_H

#include <QDialog>
#include <QGraphicsScene>
#include "boat.h"
#include <strela.h>

namespace Ui {
class addItem;
}

class addItem : public QDialog
{
    Q_OBJECT

public:
    explicit addItem(QWidget *parent = 0, Strela *s = NULL);
    ~addItem();


private slots:
    void on_boatPhotoButton_clicked();

    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::addItem *ui;
    Boat b;
    Strela* q;
};

#endif // ADDITEM_H
