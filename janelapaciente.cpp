#include "janelapaciente.h"
#include "ui_janelapaciente.h"

JanelaPaciente::JanelaPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::JanelaPaciente),cont(0)
{
    ui->setupUi(this);
    p1=new Paciente();

    ui->lineEditCPF->setValidator(new QIntValidator(0,999999999));
    ui->lineEditCPF->setFocus();
}

JanelaPaciente::~JanelaPaciente()
{
    delete ui;
}

void JanelaPaciente::on_pushButtonLogin_clicked()
{
    try
    {
        if(ui->lineEditCPF->text()=="")
        {
            cont++;

            if(cont==3)
            {
                reject();
                close();
                return;
            }

            throw QString("CPF inválido.");
        }

        p1->autenticar(ui->lineEditSenha->text());

        if(p1->getCont()==3)
        {
            reject();
            close();
            return;
        }

        accept();
        ui->lineEditSenha->clear();
        ui->lineEditCPF->clear();
        close();
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);
        ui->lineEditSenha->clear();
        ui->lineEditCPF->clear();
        ui->lineEditCPF->setFocus();
    }
}


void JanelaPaciente::on_pushButtonCancelar_clicked()
{
    reject();
    close();
}

