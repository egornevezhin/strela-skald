#ifndef ORDER_H
#define ORDER_H

#include <QString>
#include <QDateTime>
#include <QImage>


class Order
{
private:
    // обьявим переменные класса
    int id, weight;
    QString type, model, creater, liable, place, other;
    QDateTime date;
    QByteArray data;
    QImage photo;

public:
    Order();

    Order(int id, QString type, QString model, int weight, QString creater, QDateTime date, QString liable, QString place, QImage photo, QString other){
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

};

#endif // ORDER_H
