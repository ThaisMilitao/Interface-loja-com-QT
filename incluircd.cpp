#include "incluircd.h"
#include "ui_incluircd.h"

IncluirCD::IncluirCD(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::IncluirCD)
{
    ui->setupUi(this);
}

IncluirCD::~IncluirCD()
{
    delete ui;
}

void IncluirCD::clear(){
    ui->lineEditNomeCD->setText("");
    ui->lineEditPrecoCD->setText("");
    ui->lineEditNFaixas->setText("");
}

void IncluirCD::on_buttonBox_accepted()
{
    QString nome_cd = ui->lineEditNomeCD->text();
    QString preco_cd = ui->lineEditPrecoCD->text();
    QString faixas_cd = ui->lineEditNFaixas->text();

    emit signIncluirCD(nome_cd,preco_cd,faixas_cd);
}
