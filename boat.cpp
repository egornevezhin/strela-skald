#include "boat.h"
#include <QString>
#include <QDateTime>
#include <QImage>
#include <QSqlQuery>
#include <QVector>
#include <QString>
#include <QVariant>

Boat::Boat()
{

}

void Boat::save(){
    QSqlQuery query;
    query.exec("INSERT INTO BOAT");
}

QVector<QString> Boat::getAllTypes(){
    QVector <QString> types;
    QSqlQuery query;
    query.exec("SELECT name FROM type");
    while(query.next()){
        types.push_back(query.value(0).toString());
    }
    return types;
}
