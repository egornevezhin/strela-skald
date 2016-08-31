#include "strela.h"
#include "ui_strela.h"
#include "boat.h"
#include "additem.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>



Strela::Strela(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Strela)
    {
        ui->setupUi(this);
        //
        MBox = NULL;
        connectBD();
        reloadTable();
    }

Strela::~Strela()
{
    delete ui;
}

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
}

void Strela::reloadTable(){
    QSqlQueryModel *model = new QSqlQueryModel;
    QSqlQuery query;
    query.exec("SELECT boat.id, type.name, boat.model, boat.creater FROM boat INNER JOIN type on boat.type = type.id");
    model->setQuery(query);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Model"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Creater"));
    ui->itemList->setModel(model);
}

void Strela::on_exitAction_triggered()
{
    exit(0);
}

void Strela::on_addItemButton_clicked()
{
    Strela *s = this;
    addItem *instance=new addItem(this, s, false);
    instance->show();
}

void Strela::on_deleteItemButton_clicked()
{
    QMessageBox::StandardButton reply;
    QSqlQuery query;
    reply = QMessageBox::question(this, "Удаление лодки", "Вы действительно хотите удалить запись?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        int v = ui->itemList->selectionModel()->currentIndex().row();
        QString id = ui->itemList->model()->data(ui->itemList->model()->index(v,0)).toString();
        query.exec("DELETE FROM boat WHERE id =" + id);
        this->reloadTable();
    }
}



void Strela::on_itemList_doubleClicked(const QModelIndex &index)
{
    addItem *instance=new addItem(0, this, true);
    QString id = ui->itemList->model()->data(ui->itemList->model()->index(index.row(),0)).toString();
    instance->insertData(id);
    instance->show();

}
