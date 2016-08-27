#include "additem.h"
#include "ui_additem.h"
#include "boat.h"
#include "strela.h"
#include <QFileDialog>
#include <QImage>
#include <QVector>
#include <QString>

addItem::addItem(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addItem)
    {
        ui->setupUi(this);
        QVector<QString> types = b.getAllTypes();
        for (int i = 0; i < types.size(); i++){
            ui->boatType->addItem(types[i]);
        }
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
    b.save();
}

void addItem::on_buttonBox_rejected()
{

}
