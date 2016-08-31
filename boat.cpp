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

void Boat::save(bool update){
    QSqlQuery query;
    QString error;
    query.exec("SELECT id FROM type WHERE name ='" + this->type + "'");
    query.next();
    QString idType = query.value(0).toString();
    QDir dir;
    QString path = dir.absolutePath();

    this->photo.save(path + "/photo/" + this->id + ".jpg");

    if (update) {
        query.exec("DELETE FROM boat WHERE id =" + this->id);
        query.prepare("INSERT INTO boat VALUES ('" + this->id + "','" +
                   idType + "','" +
                   this->model + "','" +
                   this->weight + "','" +
                   this->creater + "','" +
                   this->date.toString() + "','" +
                   this->liable + "','" +
                   this->place + "','" +
                   path + "/photo/" + this->id + ".jpg" + "','" +
                   this->other +
                   "')");
    }
    else {
        query.prepare("INSERT INTO boat VALUES ('" + this->id + "','" +
                   idType + "','" +
                   this->model + "','" +
                   this->weight + "','" +
                   this->creater + "','" +
                   this->date.toString() + "','" +
                   this->liable + "','" +
                   this->place + "','" +
                   path + "/photo/" + this->id + ".jpg" + "','" +
                   this->other +
                   "')");
    }
    // отладка, потом удалить
    if(!query.exec()){
        error = query.lastError().text();
    }

}

void Boat::clear(){
    this->creater = "";
    this->date = QDate();
    this->id = "";
    this->liable = "";
    this->model = "";
    this->other = "";
    this->photo = QImage();
    this->place = "";
    this->type = "";
    this->weight = "";
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
