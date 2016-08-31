#ifndef Boat_H
#define Boat_H

#include <QString>
#include <QDate>
#include <QImage>
#include <QSqlQuery>
#include <QVector>
#include <QString>


class Boat
{
private:


public:
    Boat();

    // обьявим переменные класса
    QString id, type, model, creater, liable, place, other, weight;
    QDate date;
    QImage photo;

    Boat(int id, QString type, QString model, int weight, QString creater, QDate date, QString liable, QString place, QImage photo, QString other){
        this->id = id;
        this->type = type;
        this->model = model;
        this->weight = weight;
        this->creater = creater;
        this->date = date;
        this->liable = liable;
        this->place = place;
        this->photo = photo;
        this->other = other;
    }


public slots:
    void save(bool update);
    void clear();
    QVector<QString> getAllTypes();

};

#endif // BOAT_H
