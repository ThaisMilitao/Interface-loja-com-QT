/********************************************************************************
** Form generated from reading UI file 'incluirdvd.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRDVD_H
#define UI_INCLUIRDVD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirDVD
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEditNomeDVD;
    QLineEdit *lineEditPrecoDVD;
    QLineEdit *lineEditDuracao;
    QLabel *labelTituloDVD;
    QLabel *labelNomeDVD;
    QLabel *labelPrecoDVD;
    QLabel *labelNFaixas;

    void setupUi(QDialog *IncluirDVD)
    {
        if (IncluirDVD->objectName().isEmpty())
            IncluirDVD->setObjectName("IncluirDVD");
        IncluirDVD->resize(300, 200);
        buttonBox = new QDialogButtonBox(IncluirDVD);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 150, 300, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        lineEditNomeDVD = new QLineEdit(IncluirDVD);
        lineEditNomeDVD->setObjectName("lineEditNomeDVD");
        lineEditNomeDVD->setGeometry(QRect(100, 50, 180, 24));
        lineEditPrecoDVD = new QLineEdit(IncluirDVD);
        lineEditPrecoDVD->setObjectName("lineEditPrecoDVD");
        lineEditPrecoDVD->setGeometry(QRect(100, 80, 180, 24));
        lineEditDuracao = new QLineEdit(IncluirDVD);
        lineEditDuracao->setObjectName("lineEditDuracao");
        lineEditDuracao->setGeometry(QRect(100, 110, 180, 24));
        labelTituloDVD = new QLabel(IncluirDVD);
        labelTituloDVD->setObjectName("labelTituloDVD");
        labelTituloDVD->setGeometry(QRect(0, 10, 300, 16));
        labelTituloDVD->setAlignment(Qt::AlignCenter);
        labelNomeDVD = new QLabel(IncluirDVD);
        labelNomeDVD->setObjectName("labelNomeDVD");
        labelNomeDVD->setGeometry(QRect(20, 50, 49, 16));
        labelPrecoDVD = new QLabel(IncluirDVD);
        labelPrecoDVD->setObjectName("labelPrecoDVD");
        labelPrecoDVD->setGeometry(QRect(20, 80, 49, 16));
        labelNFaixas = new QLabel(IncluirDVD);
        labelNFaixas->setObjectName("labelNFaixas");
        labelNFaixas->setGeometry(QRect(20, 110, 49, 16));

        retranslateUi(IncluirDVD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirDVD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirDVD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirDVD);
    } // setupUi

    void retranslateUi(QDialog *IncluirDVD)
    {
        IncluirDVD->setWindowTitle(QCoreApplication::translate("IncluirDVD", "Incluir DVD", nullptr));
        labelTituloDVD->setText(QCoreApplication::translate("IncluirDVD", "INCLUIR NOVO DVD", nullptr));
        labelNomeDVD->setText(QCoreApplication::translate("IncluirDVD", "Nome:", nullptr));
        labelPrecoDVD->setText(QCoreApplication::translate("IncluirDVD", "Pre\303\247o:", nullptr));
        labelNFaixas->setText(QCoreApplication::translate("IncluirDVD", "Dura\303\247\303\243o:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirDVD: public Ui_IncluirDVD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRDVD_H
