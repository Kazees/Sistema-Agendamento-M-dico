#include "mainwindow.h"
#include "janelamedico.h"
#include "ui_mainwindow.h"

QString nome="dados.txt";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    secretariaGeral=new Secretaria;

    ui->lineEditTelefone->setValidator(new QIntValidator(0,999999999));
    ui->lineEditWpp->setValidator(new QIntValidator(0,999999999));
    ui->lineEditMatricula->setValidator(new QIntValidator(0,999));

    ui->lineEditCPF->setEnabled(false);
    ui->lineEditNome->setEnabled(false);
    ui->lineEditEmail->setEnabled(false);
    ui->lineEditTelefone->setEnabled(false);
    ui->lineEditWpp->setEnabled(false);
    ui->lineEditCargo->setEnabled(false);
    ui->lineEditMatricula->setEnabled(false);

    ui->pushButtonCriar->setEnabled(false);
    ui->pushButtonCadastrarSec->setEnabled(false);
    ui->pushButtonCadastrarPac->setEnabled(false);
    ui->pushButtonCadastrarMed->setEnabled(false);
    ui->pushButtonConsultarSec->setEnabled(false);
    ui->pushButtonConsultarMed->setEnabled(false);
    ui->pushButtonConsultarPac->setEnabled(false);
    ui->pushButtonExcluir->setEnabled(false);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonSecretaria_clicked()
{
    ui->textEditSaida->clear();
    ui->lineEditCPF->clear();
    ui->lineEditNome->clear();
    ui->lineEditEmail->clear();
    ui->lineEditTelefone->clear();
    ui->lineEditWpp->clear();
    ui->lineEditCargo->clear();
    ui->lineEditMatricula->clear();

    int janela=s1.exec();

    if(janela==QDialog::Accepted)
    {
        ui->lineEditCPF->setEnabled(true);
        ui->lineEditNome->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->lineEditTelefone->setEnabled(true);
        ui->lineEditWpp->setEnabled(true);
        ui->lineEditCargo->setEnabled(true);
        ui->lineEditMatricula->setEnabled(true);

        ui->pushButtonCadastrarSec->setEnabled(true);
        ui->pushButtonCadastrarPac->setEnabled(true);
        ui->pushButtonCadastrarMed->setEnabled(true);
    }

    else if(janela==QDialog::Rejected)
    {
        ui->pushButtonCriar->setEnabled(false);
        ui->pushButtonCadastrarSec->setEnabled(false);
        ui->pushButtonCadastrarPac->setEnabled(false);
        ui->pushButtonCadastrarMed->setEnabled(false);
        ui->pushButtonConsultarSec->setEnabled(false);
        ui->pushButtonConsultarMed->setEnabled(false);
        ui->pushButtonConsultarPac->setEnabled(false);
    }
}


void MainWindow::on_pushButtonMedico_clicked()
{
    ui->textEditSaida->clear();
    ui->lineEditCPF->clear();
    ui->lineEditNome->clear();
    ui->lineEditEmail->clear();
    ui->lineEditTelefone->clear();
    ui->lineEditWpp->clear();
    ui->lineEditCargo->clear();
    ui->lineEditMatricula->clear();

    ui->lineEditCPF->setEnabled(false);
    ui->lineEditNome->setEnabled(false);
    ui->lineEditEmail->setEnabled(false);
    ui->lineEditTelefone->setEnabled(false);
    ui->lineEditWpp->setEnabled(false);
    ui->lineEditCargo->setEnabled(false);
    ui->lineEditMatricula->setEnabled(false);

    int janela=m1.exec();

    if(janela==QDialog::Accepted)
    {
        ui->pushButtonConsultarMed->setEnabled(true);
        ui->pushButtonConsultarPac->setEnabled(true);

        ui->pushButtonCadastrarSec->setEnabled(false);
        ui->pushButtonCadastrarPac->setEnabled(false);
        ui->pushButtonCadastrarMed->setEnabled(false);
        ui->pushButtonConsultarSec->setEnabled(false);
        ui->pushButtonExcluir->setEnabled(false);
    }

    else if(janela==QDialog::Rejected)
    {
        ui->pushButtonCriar->setEnabled(false);
        ui->pushButtonCadastrarSec->setEnabled(false);
        ui->pushButtonCadastrarPac->setEnabled(false);
        ui->pushButtonCadastrarMed->setEnabled(false);
        ui->pushButtonConsultarSec->setEnabled(false);
        ui->pushButtonConsultarMed->setEnabled(false);
        ui->pushButtonConsultarPac->setEnabled(false);
        ui->pushButtonExcluir->setEnabled(false);
    }
}


void MainWindow::on_pushButtonPaciente_clicked()
{
    ui->textEditSaida->clear();
    ui->lineEditCPF->clear();
    ui->lineEditNome->clear();
    ui->lineEditEmail->clear();
    ui->lineEditTelefone->clear();
    ui->lineEditWpp->clear();
    ui->lineEditCargo->clear();
    ui->lineEditMatricula->clear();

    ui->lineEditCPF->setEnabled(false);
    ui->lineEditNome->setEnabled(false);
    ui->lineEditEmail->setEnabled(false);
    ui->lineEditTelefone->setEnabled(false);
    ui->lineEditWpp->setEnabled(false);
    ui->lineEditCargo->setEnabled(false);
    ui->lineEditMatricula->setEnabled(false);

    int janela=p1.exec();

    if(janela==QDialog::Accepted)
    {
        ui->pushButtonConsultarPac->setEnabled(true);

        ui->pushButtonCadastrarSec->setEnabled(false);
        ui->pushButtonCadastrarPac->setEnabled(false);
        ui->pushButtonCadastrarMed->setEnabled(false);
        ui->pushButtonConsultarSec->setEnabled(false);
        ui->pushButtonConsultarMed->setEnabled(false);
        ui->pushButtonExcluir->setEnabled(false);
    }

    else if(janela==QDialog::Rejected)
    {
        ui->pushButtonCriar->setEnabled(false);
        ui->pushButtonCadastrarSec->setEnabled(false);
        ui->pushButtonCadastrarPac->setEnabled(false);
        ui->pushButtonCadastrarMed->setEnabled(false);
        ui->pushButtonConsultarSec->setEnabled(false);
        ui->pushButtonConsultarMed->setEnabled(false);
        ui->pushButtonConsultarPac->setEnabled(false);
        ui->pushButtonExcluir->setEnabled(false);
    }
}



void MainWindow::on_pushButtonCadastrarSec_clicked()
{
    try
    {
        if(ui->lineEditCPF->text()==""||ui->lineEditNome->text()==""||ui->lineEditEmail->text()==""||ui->lineEditTelefone->text()==""||ui->lineEditWpp->text()=="")
        {
            throw QString("Inválido.");
        }

        if(ui->lineEditCargo->text()!="secretaria" && ui->lineEditCargo->text()!="Secretaria")
        {
            throw QString("Cargo inválido.");
        }


        if(ui->lineEditCargo->text()==""||ui->lineEditMatricula->text()=="")
        {
            throw QString("Inválido.");
        }

        long long int cpf=ui->lineEditCPF->text().toLongLong();
        QString nome=ui->lineEditNome->text();
        QString email=ui->lineEditEmail->text();
        long long int telefone=ui->lineEditTelefone->text().toLongLong();
        long long int wpp=ui->lineEditWpp->text().toLongLong();
        QString cargo=ui->lineEditCargo->text();
        int matricula=ui->lineEditMatricula->text().toInt();

        ui->pushButtonConsultarSec->setEnabled(true);
        ui->pushButtonExcluir->setEnabled(true);
        ui->pushButtonCriar->setEnabled(true);
        secretariaGeral->cadastrarSecrataria(cpf,nome,email,telefone,wpp,matricula,cargo);

    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();

        ui->textEditSaida->clear();
    }
}

void MainWindow::on_pushButtonConsultarSec_clicked()
{
    try
    {
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();

        QString saida;

        saida+=secretariaGeral->GerenciarSecretarias();

        ui->textEditSaida->setText(saida);

    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();

    }
}


void MainWindow::on_pushButtonCadastrarMed_clicked()
{
    try
    {
        if(ui->lineEditCPF->text()==""||ui->lineEditNome->text()==""||ui->lineEditEmail->text()==""||ui->lineEditTelefone->text()==""||ui->lineEditWpp->text()=="")
        {
            throw QString("Inválido.");
        }

        if(ui->lineEditMatricula->text()=="")
        {
            throw QString("Inválido.");
        }

        long long int cpf=ui->lineEditCPF->text().toLongLong();
        QString nome=ui->lineEditNome->text();
        QString email=ui->lineEditEmail->text();
        long long int telefone=ui->lineEditTelefone->text().toLongLong();
        long long int wpp=ui->lineEditWpp->text().toLongLong();
        int matricula=ui->lineEditMatricula->text().toInt();


        ui->pushButtonConsultarMed->setEnabled(true);
        ui->pushButtonCriar->setEnabled(true);
        secretariaGeral->cadastrarMedico(cpf,nome,email,telefone,wpp,matricula);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();
        ui->textEditSaida->clear();
    }
}


void MainWindow::on_pushButtonConsultarMed_clicked()
{
    try
    {
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();

        QString saida;
        saida=secretariaGeral->consultarAgendaMedico();

        ui->textEditSaida->setText(saida);

    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
        ui->textEditSaida->clear();

        ui->lineEditCPF->setEnabled(true);
        ui->lineEditNome->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->lineEditTelefone->setEnabled(true);
        ui->lineEditWpp->setEnabled(true);
        ui->lineEditCargo->setEnabled(true);
        ui->lineEditMatricula->setEnabled(true);
    }
}


void MainWindow::on_pushButtonCadastrarPac_clicked()
{
    try
    {
        if(ui->lineEditCPF->text()==""||ui->lineEditNome->text()==""||ui->lineEditEmail->text()==""||ui->lineEditTelefone->text()==""||ui->lineEditWpp->text()=="")
        {
            throw QString("Inválido.");
        }

        long long int cpf=ui->lineEditCPF->text().toLongLong();
        QString nome=ui->lineEditNome->text();
        QString email=ui->lineEditEmail->text();
        long long int telefone=ui->lineEditTelefone->text().toLongLong();
        long long int wpp=ui->lineEditWpp->text().toLongLong();

        ui->pushButtonConsultarPac->setEnabled(true);
        ui->pushButtonCriar->setEnabled(true);
        secretariaGeral->cadastrarPaciente(cpf,nome,email,telefone,wpp);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditMatricula->clear();
        ui->lineEditCargo->clear();
        ui->textEditSaida->clear();
    }
}


void MainWindow::on_pushButtonConsultarPac_clicked()
{
    try
    {
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();

        QString saida;
        saida=secretariaGeral->consultarAgendaPaciente();

        ui->textEditSaida->setText(saida);
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
        ui->textEditSaida->clear();

        ui->lineEditCPF->setEnabled(true);
        ui->lineEditNome->setEnabled(true);
        ui->lineEditEmail->setEnabled(true);
        ui->lineEditTelefone->setEnabled(true);
        ui->lineEditWpp->setEnabled(true);
        ui->lineEditCargo->setEnabled(true);
        ui->lineEditMatricula->setEnabled(true);
    }
}


void MainWindow::on_pushButtonExcluir_clicked()
{
    try
    {
        ui->textEditSaida->clear();
        ui->lineEditCPF->clear();
        ui->lineEditNome->clear();
        ui->lineEditEmail->clear();
        ui->lineEditTelefone->clear();
        ui->lineEditWpp->clear();
        ui->lineEditCargo->clear();
        ui->lineEditMatricula->clear();

        ui->lineEditCPF->setEnabled(false);
        ui->lineEditNome->setEnabled(false);
        ui->lineEditEmail->setEnabled(false);
        ui->lineEditTelefone->setEnabled(false);
        ui->lineEditWpp->setEnabled(false);
        ui->lineEditCargo->setEnabled(false);
        ui->lineEditMatricula->setEnabled(false);

        ui->pushButtonCriar->setEnabled(false);
        ui->pushButtonCadastrarSec->setEnabled(false);
        ui->pushButtonCadastrarPac->setEnabled(false);
        ui->pushButtonCadastrarMed->setEnabled(false);
        ui->pushButtonConsultarSec->setEnabled(false);
        ui->pushButtonConsultarMed->setEnabled(false);
        ui->pushButtonConsultarPac->setEnabled(false);
        ui->pushButtonExcluir->setEnabled(false);

        secretariaGeral->excluirSecretaria();
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
    }
}

void MainWindow::on_pushButtonCriar_clicked()
{
    try
    {
        QString caminhoCompleto=/*Criar o diretório do local desejado +*/nome;

        std::ofstream arquivo;
        arquivo.open(caminhoCompleto.toStdString());

        if(!arquivo.is_open())
        {
            throw QString("Não foi possível criar arquivo.");
        }

        QString saida=ui->textEditSaida->toPlainText();

        arquivo<<saida.toStdString();

        arquivo.close();

        /*QFile arquivo(localPuc+nome);

        if(!arquivo.open(QFile::WriteOnly|QFile::Text))
        {
            throw QString("Não foi possível abrir o arquivo.");
        }

        QTextStream saida(&arquivo);
        QString texto=ui->textEditSaida->toPlainText();
        saida<<texto;
        arquivo.flush();
        arquivo.close();*/

        throw QString("Arquivo criado.");
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Informação",erro);
    }
}

