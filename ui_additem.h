/********************************************************************************
** Form generated from reading UI file 'additem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEM_H
#define UI_ADDITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addItem
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *boatId;
    QComboBox *boatType;
    QLineEdit *boatModel;
    QLineEdit *boatWeight;
    QLineEdit *boatCreater;
    QLineEdit *boatLiable;
    QLineEdit *boatPlace;
    QDateEdit *boatDate;
    QLineEdit *boatOther;
    QPushButton *boatPhotoButton;
    QLabel *labelPhoto;

    void setupUi(QDialog *addItem)
    {
        if (addItem->objectName().isEmpty())
            addItem->setObjectName(QStringLiteral("addItem"));
        addItem->resize(410, 339);
        buttonBox = new QDialogButtonBox(addItem);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(200, 280, 181, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        boatId = new QLineEdit(addItem);
        boatId->setObjectName(QStringLiteral("boatId"));
        boatId->setGeometry(QRect(30, 20, 161, 20));
        boatType = new QComboBox(addItem);
        boatType->setObjectName(QStringLiteral("boatType"));
        boatType->setGeometry(QRect(30, 50, 161, 22));
        boatModel = new QLineEdit(addItem);
        boatModel->setObjectName(QStringLiteral("boatModel"));
        boatModel->setGeometry(QRect(30, 80, 161, 20));
        boatWeight = new QLineEdit(addItem);
        boatWeight->setObjectName(QStringLiteral("boatWeight"));
        boatWeight->setGeometry(QRect(220, 20, 161, 20));
        boatCreater = new QLineEdit(addItem);
        boatCreater->setObjectName(QStringLiteral("boatCreater"));
        boatCreater->setGeometry(QRect(220, 50, 161, 20));
        boatLiable = new QLineEdit(addItem);
        boatLiable->setObjectName(QStringLiteral("boatLiable"));
        boatLiable->setGeometry(QRect(220, 80, 161, 20));
        boatPlace = new QLineEdit(addItem);
        boatPlace->setObjectName(QStringLiteral("boatPlace"));
        boatPlace->setGeometry(QRect(30, 110, 161, 20));
        boatDate = new QDateEdit(addItem);
        boatDate->setObjectName(QStringLiteral("boatDate"));
        boatDate->setGeometry(QRect(220, 110, 161, 22));
        boatDate->setWrapping(false);
        boatDate->setAccelerated(false);
        boatOther = new QLineEdit(addItem);
        boatOther->setObjectName(QStringLiteral("boatOther"));
        boatOther->setGeometry(QRect(30, 140, 161, 20));
        boatPhotoButton = new QPushButton(addItem);
        boatPhotoButton->setObjectName(QStringLiteral("boatPhotoButton"));
        boatPhotoButton->setGeometry(QRect(220, 140, 161, 23));
        labelPhoto = new QLabel(addItem);
        labelPhoto->setObjectName(QStringLiteral("labelPhoto"));
        labelPhoto->setGeometry(QRect(30, 170, 351, 91));

        retranslateUi(addItem);
        QObject::connect(buttonBox, SIGNAL(accepted()), addItem, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addItem, SLOT(reject()));

        QMetaObject::connectSlotsByName(addItem);
    } // setupUi

    void retranslateUi(QDialog *addItem)
    {
        addItem->setWindowTitle(QApplication::translate("addItem", "Dialog", 0));
        boatId->setText(QApplication::translate("addItem", "\320\230\320\264\320\265\320\275\321\202\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\276\320\275\320\275\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 ", 0));
        boatType->setCurrentText(QString());
        boatModel->setText(QApplication::translate("addItem", "\320\234\320\276\320\264\320\265\320\273\321\214", 0));
        boatWeight->setText(QApplication::translate("addItem", "\320\222\320\265\321\201", 0));
        boatCreater->setText(QApplication::translate("addItem", "\320\237\321\200\320\276\320\270\320\267\320\262\320\276\320\264\320\270\321\202\320\265\320\273\321\214", 0));
        boatLiable->setText(QApplication::translate("addItem", "\320\236\321\202\320\262\320\265\321\202\321\201\321\202\320\262\320\265\320\275\320\275\321\213\320\271", 0));
        boatPlace->setText(QApplication::translate("addItem", "\320\234\320\265\321\201\321\202\320\276\320\275\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265", 0));
        boatOther->setText(QApplication::translate("addItem", "\320\224\320\276\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265", 0));
        boatPhotoButton->setText(QApplication::translate("addItem", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", 0));
        labelPhoto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class addItem: public Ui_addItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEM_H
