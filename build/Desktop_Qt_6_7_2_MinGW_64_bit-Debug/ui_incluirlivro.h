/********************************************************************************
** Form generated from reading UI file 'incluirlivro.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRLIVRO_H
#define UI_INCLUIRLIVRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirLivro
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelTituloLivro;
    QLabel *labelNome;
    QLabel *labelPreco;
    QLabel *labelAutor;
    QLineEdit *lineEditNome;
    QLineEdit *lineEditPreco;
    QLineEdit *lineEditAutor;

    void setupUi(QDialog *IncluirLivro)
    {
        if (IncluirLivro->objectName().isEmpty())
            IncluirLivro->setObjectName("IncluirLivro");
        IncluirLivro->resize(300, 200);
        buttonBox = new QDialogButtonBox(IncluirLivro);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 150, 300, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        labelTituloLivro = new QLabel(IncluirLivro);
        labelTituloLivro->setObjectName("labelTituloLivro");
        labelTituloLivro->setGeometry(QRect(0, 10, 300, 16));
        labelTituloLivro->setAlignment(Qt::AlignCenter);
        labelNome = new QLabel(IncluirLivro);
        labelNome->setObjectName("labelNome");
        labelNome->setGeometry(QRect(20, 50, 49, 16));
        labelPreco = new QLabel(IncluirLivro);
        labelPreco->setObjectName("labelPreco");
        labelPreco->setGeometry(QRect(20, 80, 49, 16));
        labelAutor = new QLabel(IncluirLivro);
        labelAutor->setObjectName("labelAutor");
        labelAutor->setGeometry(QRect(20, 110, 49, 16));
        lineEditNome = new QLineEdit(IncluirLivro);
        lineEditNome->setObjectName("lineEditNome");
        lineEditNome->setGeometry(QRect(100, 50, 180, 24));
        lineEditPreco = new QLineEdit(IncluirLivro);
        lineEditPreco->setObjectName("lineEditPreco");
        lineEditPreco->setGeometry(QRect(100, 80, 180, 24));
        lineEditAutor = new QLineEdit(IncluirLivro);
        lineEditAutor->setObjectName("lineEditAutor");
        lineEditAutor->setGeometry(QRect(100, 110, 180, 24));

        retranslateUi(IncluirLivro);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirLivro, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirLivro, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirLivro);
    } // setupUi

    void retranslateUi(QDialog *IncluirLivro)
    {
        IncluirLivro->setWindowTitle(QCoreApplication::translate("IncluirLivro", "Incluir Livro", nullptr));
        labelTituloLivro->setText(QCoreApplication::translate("IncluirLivro", "INCLUIR NOVO LIVRO", nullptr));
        labelNome->setText(QCoreApplication::translate("IncluirLivro", "Nome:", nullptr));
        labelPreco->setText(QCoreApplication::translate("IncluirLivro", "Pre\303\247o:", nullptr));
        labelAutor->setText(QCoreApplication::translate("IncluirLivro", "Autor:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirLivro: public Ui_IncluirLivro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRLIVRO_H
