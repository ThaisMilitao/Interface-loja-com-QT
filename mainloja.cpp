#include "mainloja.h"
#include "ui_mainloja.h"

#include <QLabel>
#include<QTableWidget>
#include <QMessageBox>
#include <QFileDialog>

MainLoja::MainLoja(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainLoja)
    ,X()
    ,inclLivro(nullptr)
    ,inclCD(nullptr)
    ,inclDVD(nullptr)
    ,total_itens(nullptr)
{
    ui->setupUi(this);

    QStringList SLL, SLC, SLD;

    //Objetos que representam as 3 janelas de inclusão de itens
    inclLivro = new IncluirLivro(this);
    inclCD = new IncluirCD(this);
    inclDVD = new IncluirDVD (this);

    //Barra de status
    total_itens = new QLabel("0", this);
    ui->statusbar->insertWidget(0, new QLabel("Total de itens: "));
    ui->statusbar->insertWidget(1, total_itens);

    //Conectar os sinais das classes com os slots apropriados da classe MainLoja
    connect(inclLivro, &IncluirLivro::signIncluirLivro,this, &MainLoja::slotIncluirLivro);
    connect(inclCD, &IncluirCD::signIncluirCD,this, &MainLoja::slotIncluirCD);
    connect(inclDVD, &IncluirDVD::signIncluirDVD,this, &MainLoja::slotIncluirDVD);

    //Alterar a cor de fundo (background) dos QLabel
    ui->labelLivros->setStyleSheet("background-color: lightgray");
    ui->labelCDs->setStyleSheet("background-color: lightgray");
    ui->labelDVDs->setStyleSheet("background-color: lightgray");

    //Alterar a cor de fundo (background) dos cabeçalhos das tabelas
    ui->tableWidgetLivros->setStyleSheet("QHeaderView::section { background-color:lightgray }");
    ui->tableWidgetCDs->setStyleSheet("QHeaderView::section { background-color:lightgray }");
    ui->tableWidgetDVDs->setStyleSheet("QHeaderView::section { background-color:lightgray }");

    //Alterar o comportamento das colunas das tabelas
    ui->tableWidgetLivros->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidgetLivros->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidgetLivros->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);

    ui->tableWidgetCDs->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidgetCDs->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidgetCDs->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);

    ui->tableWidgetDVDs->horizontalHeader()->setSectionResizeMode(0,QHeaderView::Stretch);
    ui->tableWidgetDVDs->horizontalHeader()->setSectionResizeMode(1,QHeaderView::ResizeToContents);
    ui->tableWidgetDVDs->horizontalHeader()->setSectionResizeMode(2,QHeaderView::ResizeToContents);

    //Fixar o texto dos cabeçalhos das tabelas
    SLL << "NOME" <<"PREÇO" << "AUTOR";
    ui->tableWidgetLivros->setHorizontalHeaderLabels(SLL);

    SLC << "NOME" <<"PREÇO" << "N FAIXAS";
    ui->tableWidgetCDs->setHorizontalHeaderLabels(SLC);

    SLD << "NOME" <<"PREÇO" << "DURAÇÃO";
    ui->tableWidgetDVDs->setHorizontalHeaderLabels(SLD);

    exibir_listas();
    exibirstatus();
}

MainLoja::~MainLoja()
{
    delete ui;
}

void MainLoja::exibirListaLivros(){
    ui->tableWidgetLivros->clearContents();    
    ui->tableWidgetLivros->setRowCount(X.getNumLivro());

    for(int i=0;i<X.getNumLivro(); i++){
        Livro L = X.getLivro(i);
        QLabel* prov;

        prov = new QLabel(L.getNome().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui->tableWidgetLivros->setCellWidget(i,0,prov);

        prov = new QLabel(QString::number(L.getPreco(),'f',2));
        prov->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        ui->tableWidgetLivros->setCellWidget(i,1,prov);

        prov = new QLabel(L.getAutor().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui->tableWidgetLivros->setCellWidget(i,2,prov);
    }

    exibirstatus();
}

void MainLoja::exibirListaCDs(){
    ui->tableWidgetCDs->clearContents();
    ui->tableWidgetCDs->setRowCount(X.getNumCD());

    for(int i=0;i<X.getNumCD(); i++){
        CD C = X.getCD(i);
        QLabel* prov;

        prov = new QLabel(C.getNome().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui->tableWidgetCDs->setCellWidget(i,0,prov);

        prov = new QLabel(QString::number(C.getPreco(),'f',2));
        prov->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        ui->tableWidgetCDs->setCellWidget(i,1,prov);

        prov = new QLabel(QString::number(C.getNumFaixas()));
        prov->setAlignment(Qt::AlignVCenter|Qt::AlignCenter);
        ui->tableWidgetCDs->setCellWidget(i,2,prov);
    }
    exibirstatus();
}

void MainLoja::exibirListaDVDs(){
    ui->tableWidgetDVDs->clearContents();
    ui->tableWidgetDVDs->setRowCount(X.getNumDVD());

    for(int i=0;i<X.getNumDVD(); i++){
        DVD D = X.getDVD(i);
        QLabel* prov;

        prov = new QLabel(D.getNome().c_str());
        prov->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        ui->tableWidgetDVDs->setCellWidget(i,0,prov);

        prov = new QLabel(QString::number(D.getPreco(),'f',2));
        prov->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        ui->tableWidgetDVDs->setCellWidget(i,1,prov);

        prov = new QLabel(QString::number(D.getDuracao()));
        prov->setAlignment(Qt::AlignVCenter|Qt::AlignCenter);
        ui->tableWidgetDVDs->setCellWidget(i,2,prov);
    }
    exibirstatus();
}

void MainLoja::exibir_listas(){
    exibirListaLivros();
    exibirListaCDs();
    exibirListaDVDs();
}

void MainLoja::exibirstatus(){
    total_itens->setNum(X.getNumLivro()+X.getNumCD()+X.getNumDVD());
}


void MainLoja::on_tableWidgetLivros_cellDoubleClicked(int row, int column)
{
    if(row>=0 && row<X.getNumLivro()){
        bool deletado = X.excluirLivro(row);
        if(deletado){
            exibirListaLivros();
        }
    }
}

void MainLoja::on_tableWidgetCDs_cellDoubleClicked(int row, int column)
{
    if(row>=0 && row<X.getNumCD()){
        bool deletado = X.excluirCD(row);
        if(deletado){
            exibirListaCDs();
        }
    }
}

void MainLoja::on_tableWidgetDVDs_cellDoubleClicked(int row, int column)
{
    if(row>=0 && row<X.getNumDVD()){
        bool deletado = X.excluirDVD(row);
        if(deletado){
            exibirListaDVDs();
        }
    }
}


void MainLoja::on_actionLer_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Ler estoque", QString(), "Estoques(*.txt)");
    if(!fileName.isEmpty()){
        if(!X.ler(fileName.toStdString())){
            QMessageBox::critical(this, tr("Error"), tr("Could not open file"));
            return;
        }
    }

    exibir_listas();
}

void MainLoja::on_actionSalvar_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Salvar estoque", QString(), "Estoques(*.txt)");
    if(!fileName.isEmpty()){
        if(!X.salvar(fileName.toStdString())){
            QMessageBox::critical(this, tr("Error"), tr("Could not save file"));
            return;
        }else{
            X.salvar(fileName.toStdString());
        }
    }
}

void MainLoja::on_actionSair_triggered()
{
    QCoreApplication::quit();
}


/*limpa o conteúdo anterior dos campos de edição da janela chamando a função clear da classe, e depois exibe (show) a janela do objeto*/
void MainLoja::on_actionIncluir_Livro_triggered()
{
    inclLivro->clear();
    inclLivro->show();
}

void MainLoja::on_actionIncluir_CD_triggered()
{
    inclCD->clear();
    inclCD->show();
}

void MainLoja::on_actionIncluir_DVD_triggered()
{
    inclDVD->clear();
    inclDVD->show();
}


void MainLoja::slotIncluirLivro(QString nome, QString preco, QString autor){
    std::string nome_livro = nome.toStdString();
    double preco_livro = preco.toDouble();
    std::string autor_livro = autor.toStdString();

    if (!nome.isEmpty() && preco_livro > 0.0 && !autor.isEmpty() ){
        Livro L(nome_livro, preco_livro, autor_livro);
        X.incluirLivro(L);
        exibirListaLivros();
    }else{
        QString message = QString("Não foi possivel incluir o Livro;\nNome=%1\nPreço=%2\nAutor=%3").arg(nome, preco, autor);
        QMessageBox::critical(this, tr("Error"), message);
    }
}

void MainLoja::slotIncluirCD(QString nome, QString preco, QString numfaixas){
    std::string nome_cd = nome.toStdString();
    double preco_cd = preco.toDouble();
    int faixas_cd = numfaixas.toInt();

    if (!nome.isEmpty() && preco_cd > 0.0 && faixas_cd > 0){
        CD C(nome_cd, preco_cd, faixas_cd);
        X.incluirCD(C);
        exibirListaCDs();
    }else{
        QString message = QString("Não foi possivel incluir o CD;\nNome=%1\nPreço=%2\nNum Faixas=%3").arg(nome, preco, numfaixas);
        QMessageBox::critical(this, tr("Error"), message);
    }
}

void MainLoja::slotIncluirDVD(QString nome, QString preco, QString duracao){
    std::string nome_dvd = nome.toStdString();
    double preco_dvd = preco.toDouble();
    int duracao_dvd = duracao.toInt();

    if (!nome.isEmpty() && preco_dvd > 0.0 && duracao_dvd > 0){
        DVD D(nome_dvd, preco_dvd, duracao_dvd);
        X.incluirDVD(D);
        exibirListaDVDs();
    }else{
        QString message = QString("Não foi possivel incluir o DVD;\nNome=%1\nPreço=%2\nDuração=%3").arg(nome, preco, duracao);
        QMessageBox::critical(this, tr("Error"), message);
    }
}
