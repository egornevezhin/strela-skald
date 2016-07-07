#include "strela.h"
#include "ui_strela.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>



Strela::Strela(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Strela)
    {
        ui->setupUi(this);
        //
        MBox = NULL;
        connectBD();
    }

Strela::~Strela()
{
    delete ui;
}

// метод вывода сообщений
void Strela::ShowMessage(QString messageText, QString Title)
{
    MBox=new QMessageBox;
    MBox->setWindowTitle(Title.toUtf8());
    MBox->setText(messageText.toUtf8());
    MBox->show();
}

void Strela::connectBD(){
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName("base.sqlite");
    if (!sdb.open()) {
        ShowMessage(sdb.lastError().text(),"ERROR");
    }
    else{
        ShowMessage("Connection success","OK");
    }
}
