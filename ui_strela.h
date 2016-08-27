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
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Strela
{
public:
    QAction *helpAction;
    QAction *exitAction;
    QWidget *centralWidget;
    QTableView *itemList;
    QPushButton *addItemButton;
    QPushButton *deleteItemButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Strela)
    {
        if (Strela->objectName().isEmpty())
            Strela->setObjectName(QStringLiteral("Strela"));
        Strela->resize(700, 450);
        helpAction = new QAction(Strela);
        helpAction->setObjectName(QStringLiteral("helpAction"));
        exitAction = new QAction(Strela);
        exitAction->setObjectName(QStringLiteral("exitAction"));
        centralWidget = new QWidget(Strela);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        itemList = new QTableView(centralWidget);
        itemList->setObjectName(QStringLiteral("itemList"));
        itemList->setEnabled(true);
        itemList->setGeometry(QRect(20, 20, 661, 321));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(itemList->sizePolicy().hasHeightForWidth());
        itemList->setSizePolicy(sizePolicy);
        itemList->setLineWidth(2);
        itemList->setMidLineWidth(1);
        itemList->setAlternatingRowColors(false);
        itemList->setSelectionMode(QAbstractItemView::SingleSelection);
        itemList->setSelectionBehavior(QAbstractItemView::SelectRows);
        itemList->setTextElideMode(Qt::ElideLeft);
        itemList->horizontalHeader()->setCascadingSectionResizes(false);
        itemList->horizontalHeader()->setDefaultSectionSize(130);
        itemList->horizontalHeader()->setMinimumSectionSize(50);
        itemList->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        itemList->horizontalHeader()->setStretchLastSection(true);
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
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        Strela->setMenuBar(menuBar);
        statusBar = new QStatusBar(Strela);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Strela->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(exitAction);
        menuHelp->addAction(helpAction);

        retranslateUi(Strela);

        QMetaObject::connectSlotsByName(Strela);
    } // setupUi

    void retranslateUi(QMainWindow *Strela)
    {
        Strela->setWindowTitle(QApplication::translate("Strela", "Strela", 0));
        helpAction->setText(QApplication::translate("Strela", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", 0));
        exitAction->setText(QApplication::translate("Strela", "\320\222\321\213\321\205\320\276\320\264", 0));
        addItemButton->setText(QApplication::translate("Strela", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        deleteItemButton->setText(QApplication::translate("Strela", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        menuFile->setTitle(QApplication::translate("Strela", "\320\244\320\260\320\271\320\273", 0));
        menuHelp->setTitle(QApplication::translate("Strela", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", 0));
    } // retranslateUi

};

namespace Ui {
    class Strela: public Ui_Strela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRELA_H
