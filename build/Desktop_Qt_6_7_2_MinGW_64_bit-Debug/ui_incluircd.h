/********************************************************************************
** Form generated from reading UI file 'incluircd.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INCLUIRCD_H
#define UI_INCLUIRCD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_IncluirCD
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *labelTituloCD;
    QLabel *labelNomeCD;
    QLabel *labelPrecoCD;
    QLabel *labelDuracaoCD;
    QLineEdit *lineEditPrecoCD;
    QLineEdit *lineEditNFaixas;
    QLineEdit *lineEditNomeCD;

    void setupUi(QDialog *IncluirCD)
    {
        if (IncluirCD->objectName().isEmpty())
            IncluirCD->setObjectName("IncluirCD");
        IncluirCD->resize(300, 200);
        buttonBox = new QDialogButtonBox(IncluirCD);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(0, 150, 300, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);
        labelTituloCD = new QLabel(IncluirCD);
        labelTituloCD->setObjectName("labelTituloCD");
        labelTituloCD->setGeometry(QRect(0, 10, 300, 16));
        labelTituloCD->setAlignment(Qt::AlignCenter);
        labelNomeCD = new QLabel(IncluirCD);
        labelNomeCD->setObjectName("labelNomeCD");
        labelNomeCD->setGeometry(QRect(20, 50, 49, 16));
        labelPrecoCD = new QLabel(IncluirCD);
        labelPrecoCD->setObjectName("labelPrecoCD");
        labelPrecoCD->setGeometry(QRect(20, 80, 49, 16));
        labelDuracaoCD = new QLabel(IncluirCD);
        labelDuracaoCD->setObjectName("labelDuracaoCD");
        labelDuracaoCD->setGeometry(QRect(20, 110, 61, 16));
        lineEditPrecoCD = new QLineEdit(IncluirCD);
        lineEditPrecoCD->setObjectName("lineEditPrecoCD");
        lineEditPrecoCD->setGeometry(QRect(100, 80, 180, 24));
        lineEditNFaixas = new QLineEdit(IncluirCD);
        lineEditNFaixas->setObjectName("lineEditNFaixas");
        lineEditNFaixas->setGeometry(QRect(100, 110, 180, 24));
        lineEditNomeCD = new QLineEdit(IncluirCD);
        lineEditNomeCD->setObjectName("lineEditNomeCD");
        lineEditNomeCD->setGeometry(QRect(100, 50, 180, 24));

        retranslateUi(IncluirCD);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, IncluirCD, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, IncluirCD, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(IncluirCD);
    } // setupUi

    void retranslateUi(QDialog *IncluirCD)
    {
        IncluirCD->setWindowTitle(QCoreApplication::translate("IncluirCD", "Incluir CD", nullptr));
        labelTituloCD->setText(QCoreApplication::translate("IncluirCD", "INCLUIR NOVO CD", nullptr));
        labelNomeCD->setText(QCoreApplication::translate("IncluirCD", "Nome:", nullptr));
        labelPrecoCD->setText(QCoreApplication::translate("IncluirCD", "Pre\303\247o:", nullptr));
        labelDuracaoCD->setText(QCoreApplication::translate("IncluirCD", "N\302\260 Faixas: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IncluirCD: public Ui_IncluirCD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INCLUIRCD_H
