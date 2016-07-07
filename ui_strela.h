/********************************************************************************
** Form generated from reading UI file 'strela.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRELA_H
#define UI_STRELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Strela
{
public:
    QWidget *centralWidget;
    QTableView *itemList;
    QPushButton *addItemButton;
    QPushButton *deleteItemButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Strela)
    {
        if (Strela->objectName().isEmpty())
            Strela->setObjectName(QStringLiteral("Strela"));
        Strela->resize(700, 450);
        centralWidget = new QWidget(Strela);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        itemList = new QTableView(centralWidget);
        itemList->setObjectName(QStringLiteral("itemList"));
        itemList->setGeometry(QRect(20, 20, 661, 321));
        addItemButton = new QPushButton(centralWidget);
        addItemButton->setObjectName(QStringLiteral("addItemButton"));
        addItemButton->setGeometry(QRect(520, 360, 75, 23));
        deleteItemButton = new QPushButton(centralWidget);
        deleteItemButton->setObjectName(QStringLiteral("deleteItemButton"));
        deleteItemButton->setGeometry(QRect(610, 360, 75, 23));
        Strela->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Strela);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 700, 21));
        Strela->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Strela);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Strela->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Strela);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Strela->setStatusBar(statusBar);

        retranslateUi(Strela);

        QMetaObject::connectSlotsByName(Strela);
    } // setupUi

    void retranslateUi(QMainWindow *Strela)
    {
        Strela->setWindowTitle(QApplication::translate("Strela", "Strela", 0));
        addItemButton->setText(QApplication::translate("Strela", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        deleteItemButton->setText(QApplication::translate("Strela", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class Strela: public Ui_Strela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRELA_H
