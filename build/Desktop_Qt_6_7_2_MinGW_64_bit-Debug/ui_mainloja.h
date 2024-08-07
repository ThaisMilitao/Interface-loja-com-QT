/********************************************************************************
** Form generated from reading UI file 'mainloja.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINLOJA_H
#define UI_MAINLOJA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainLoja
{
public:
    QAction *actionLer;
    QAction *actionSalvar;
    QAction *actionSair;
    QAction *actionIncluir_Livro;
    QAction *actionIncluir_CD;
    QAction *actionIncluir_DVD;
    QWidget *centralwidget;
    QTableWidget *tableWidgetLivros;
    QLabel *labelLivros;
    QTableWidget *tableWidgetCDs;
    QTableWidget *tableWidgetDVDs;
    QLabel *labelCDs;
    QLabel *labelDVDs;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuItem;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainLoja)
    {
        if (MainLoja->objectName().isEmpty())
            MainLoja->setObjectName("MainLoja");
        MainLoja->resize(1000, 600);
        actionLer = new QAction(MainLoja);
        actionLer->setObjectName("actionLer");
        actionSalvar = new QAction(MainLoja);
        actionSalvar->setObjectName("actionSalvar");
        actionSair = new QAction(MainLoja);
        actionSair->setObjectName("actionSair");
        actionIncluir_Livro = new QAction(MainLoja);
        actionIncluir_Livro->setObjectName("actionIncluir_Livro");
        actionIncluir_CD = new QAction(MainLoja);
        actionIncluir_CD->setObjectName("actionIncluir_CD");
        actionIncluir_DVD = new QAction(MainLoja);
        actionIncluir_DVD->setObjectName("actionIncluir_DVD");
        centralwidget = new QWidget(MainLoja);
        centralwidget->setObjectName("centralwidget");
        tableWidgetLivros = new QTableWidget(centralwidget);
        if (tableWidgetLivros->columnCount() < 3)
            tableWidgetLivros->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetLivros->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetLivros->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetLivros->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidgetLivros->setObjectName("tableWidgetLivros");
        tableWidgetLivros->setGeometry(QRect(10, 30, 320, 520));
        tableWidgetLivros->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidgetLivros->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidgetLivros->setTabKeyNavigation(false);
        tableWidgetLivros->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetLivros->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetLivros->verticalHeader()->setVisible(false);
        labelLivros = new QLabel(centralwidget);
        labelLivros->setObjectName("labelLivros");
        labelLivros->setGeometry(QRect(10, 10, 320, 16));
        labelLivros->setFrameShape(QFrame::Box);
        labelLivros->setAlignment(Qt::AlignCenter);
        tableWidgetCDs = new QTableWidget(centralwidget);
        if (tableWidgetCDs->columnCount() < 3)
            tableWidgetCDs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCDs->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetCDs->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetCDs->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidgetCDs->setObjectName("tableWidgetCDs");
        tableWidgetCDs->setGeometry(QRect(340, 30, 320, 520));
        tableWidgetCDs->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidgetCDs->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidgetCDs->setTabKeyNavigation(false);
        tableWidgetCDs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetCDs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetCDs->verticalHeader()->setVisible(false);
        tableWidgetDVDs = new QTableWidget(centralwidget);
        if (tableWidgetDVDs->columnCount() < 3)
            tableWidgetDVDs->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetDVDs->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetDVDs->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetDVDs->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        tableWidgetDVDs->setObjectName("tableWidgetDVDs");
        tableWidgetDVDs->setGeometry(QRect(670, 30, 320, 520));
        tableWidgetDVDs->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidgetDVDs->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidgetDVDs->setTabKeyNavigation(false);
        tableWidgetDVDs->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidgetDVDs->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidgetDVDs->verticalHeader()->setVisible(false);
        labelCDs = new QLabel(centralwidget);
        labelCDs->setObjectName("labelCDs");
        labelCDs->setGeometry(QRect(340, 10, 320, 16));
        labelCDs->setFrameShape(QFrame::Box);
        labelCDs->setAlignment(Qt::AlignCenter);
        labelDVDs = new QLabel(centralwidget);
        labelDVDs->setObjectName("labelDVDs");
        labelDVDs->setGeometry(QRect(670, 10, 320, 16));
        labelDVDs->setFrameShape(QFrame::Box);
        labelDVDs->setAlignment(Qt::AlignCenter);
        MainLoja->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainLoja);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuItem = new QMenu(menubar);
        menuItem->setObjectName("menuItem");
        MainLoja->setMenuBar(menubar);
        statusbar = new QStatusBar(MainLoja);
        statusbar->setObjectName("statusbar");
        MainLoja->setStatusBar(statusbar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuItem->menuAction());
        menuArquivo->addAction(actionLer);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addSeparator();
        menuArquivo->addAction(actionSair);
        menuItem->addAction(actionIncluir_Livro);
        menuItem->addAction(actionIncluir_CD);
        menuItem->addAction(actionIncluir_DVD);

        retranslateUi(MainLoja);

        QMetaObject::connectSlotsByName(MainLoja);
    } // setupUi

    void retranslateUi(QMainWindow *MainLoja)
    {
        MainLoja->setWindowTitle(QCoreApplication::translate("MainLoja", "Estoque em loja", nullptr));
        actionLer->setText(QCoreApplication::translate("MainLoja", "Ler...", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainLoja", "Salvar...", nullptr));
        actionSair->setText(QCoreApplication::translate("MainLoja", "Sair", nullptr));
        actionIncluir_Livro->setText(QCoreApplication::translate("MainLoja", "Incluir Livro...", nullptr));
        actionIncluir_CD->setText(QCoreApplication::translate("MainLoja", "Incluir CD...", nullptr));
        actionIncluir_DVD->setText(QCoreApplication::translate("MainLoja", "Incluir DVD...", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetLivros->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetLivros->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainLoja", "PRE\303\207O", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetLivros->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainLoja", "AUTOR", nullptr));
        labelLivros->setText(QCoreApplication::translate("MainLoja", "LIVROS", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCDs->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetCDs->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainLoja", "PRE\303\207O", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetCDs->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainLoja", "N FAIXAS", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetDVDs->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainLoja", "NOME", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetDVDs->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainLoja", "PRE\303\207O", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetDVDs->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("MainLoja", "DURA\303\207\303\203O", nullptr));
        labelCDs->setText(QCoreApplication::translate("MainLoja", "CDS", nullptr));
        labelDVDs->setText(QCoreApplication::translate("MainLoja", "DVDS", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainLoja", "Arquivo", nullptr));
        menuItem->setTitle(QCoreApplication::translate("MainLoja", "Item", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainLoja: public Ui_MainLoja {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINLOJA_H
