#include "incluirdvd.h"
#include "ui_incluirdvd.h"

IncluirDVD::IncluirDVD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirDVD)
{
    ui->setupUi(this);
}

IncluirDVD::~IncluirDVD()
{
    delete ui;
}

void IncluirDVD::clear(){
    ui->lineEditNomeDVD->setText("");
    ui->lineEditPrecoDVD->setText("");
    ui->lineEditDuracao->setText("");
}

void IncluirDVD::on_buttonBox_accepted()
{
    QString nome_dvd = ui->lineEditNomeDVD->text();
    QString preco_dvd = ui->lineEditPrecoDVD->text();
    QString duracao_dvd = ui->lineEditDuracao->text();

    emit signIncluirDVD(nome_dvd,preco_dvd,duracao_dvd);

}
