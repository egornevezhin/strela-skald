#ifndef STRELA_H
#define STRELA_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class Strela;
}

class Strela : public QMainWindow
{
    Q_OBJECT

public:
    explicit Strela(QWidget *parent = 0);
    ~Strela();

private:
    Ui::Strela *ui;
    QMessageBox *MBox;

private slots:
    void connectBD();
    void ShowMessage(QString messageText, QString Title);


};

#endif // STRELA_H
