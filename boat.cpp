#include "boat.h"
#include "strela.h"
#include <QString>
#include <QDateTime>
#include <QImage>
#include <QSqlQuery>
#include <QSqlError>
#include <QVector>
#include <QString>
#include <QVariant>
#include <QDir>

Boat::Boat()
{

}

void Boat::save(){
    QSqlQuery query;
    QString error;
    query.exec("SELECT id FROM type WHERE name ='" + this->type + "'");
    query.next();
    QString idType = query.value(0).toString();
    QDir dir;
    QString path = dir.absolutePath();

    this->photo.save(path + "/photo/" + this->id + ".jpg");

    query.prepare("INSERT INTO boat VALUES ('" + this->id + "','" +
               idType + "','" +
               this->model + "','" +
               this->weight + "','" +
               this->creater + "','" +
               this->date.toString() + "','" +
               this->liable + "','" +
               this->place + "','" +
               "/photo/" + this->id + ".jpg" + "','" +
               this->other +
               "')");
    if(!query.exec()){
        error = query.lastError().text();
    }

}

// получение типов лодок
QVector<QString> Boat::getAllTypes(){
    QVector <QString> types;
    QSqlQuery query;
    query.exec("SELECT name FROM type");
    while(query.next()){
        types.push_back(query.value(0).toString());
    }
    return types;
}
