#include "additem.h"
#include "ui_additem.h"
#include "boat.h"
#include "strela.h"
#include <QFileDialog>
#include <QImage>
#include <QVector>
#include <QString>

addItem::addItem(QWidget *parent, Strela *s, bool update) :
    QDialog(parent),
    ui(new Ui::addItem)
    {

        ui->setupUi(this);
        QVector<QString> types = b.getAllTypes();
        for (int i = 0; i < types.size(); i++){
            ui->boatType->addItem(types[i]);
        }
    q = s;
    this->update = update;
    }

addItem::~addItem()
{
    delete ui;
}

void addItem::on_boatPhotoButton_clicked()
{
    QString imagePath = QFileDialog::getOpenFileName(
                this,
                tr("Open File"),
                "",
                tr("JPEG (*.jpg *.jpeg);;PNG (*.png)" )
                );
    QImage image(imagePath);
    ui->labelPhoto->setPixmap(QPixmap(imagePath).scaled(350,90,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    b.photo = image;
}

void addItem::on_buttonBox_accepted()
{
    b.creater = ui->boatCreater->text();
    b.date = ui->boatDate->date();
    b.id = ui->boatId->text();
    b.liable = ui->boatLiable->text();
    b.model = ui->boatModel->text();
    b.other = ui->boatOther->text();
    b.place = ui->boatPlace->text();
    b.type = ui->boatType->currentText();
    b.weight = ui->boatWeight->text();
    b.save(this->update);
    q->reloadTable();
}

void addItem::on_buttonBox_rejected()
{
    b.clear();
}

void addItem::insertData(QString id){
    QSqlQuery query;
    query.exec("SELECT * FROM boat WHERE id=" + id);
    query.next();
    ui->boatId->setText(query.value(0).toString());
    ui->boatType->setCurrentIndex(query.value(1).toInt() - 1);
    ui->boatModel->setText(query.value(2).toString());
    ui->boatWeight->setText(query.value(3).toString());
    ui->boatCreater->setText(query.value(4).toString());
    ui->boatDate->setDate(query.value(5).toDate());
    ui->boatLiable->setText(query.value(6).toString());
    ui->boatPlace->setText(query.value(7).toString());
    ui->labelPhoto->setPixmap(QPixmap(query.value(8).toString()).scaled(350,90,Qt::KeepAspectRatio,Qt::SmoothTransformation));
    ui->boatOther->setText(query.value(9).toString());
}
