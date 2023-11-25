#include "janelamedico.h"
#include "ui_janelamedico.h"

janelaMedico::janelaMedico(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janelaMedico),cont(0)
{
    ui->setupUi(this);
    m1=new Medico();

    ui->lineEditLogin->setValidator(new QIntValidator(0,999));
    ui->lineEditLogin->setFocus();
}

janelaMedico::~janelaMedico()
{
    delete ui;
}

void janelaMedico::on_pushButtonLogin_clicked()
{
    try
    {
        if(ui->lineEditLogin->text()=="")
        {
            cont++;

            if(cont==3)
            {
                reject();
                close();
                return;
            }

            throw QString("Login inválido");
        }

        m1->autenticar(ui->lineEditSenha->text());

        if(m1->getCont()==3)
        {
            reject();
            close();
            return;
        }

        accept();

        ui->lineEditSenha->clear();
        ui->lineEditLogin->clear();

        close();
    }

    catch (QString &erro)
    {
        QMessageBox::information(this,"Erro",erro);
        ui->lineEditSenha->clear();
        ui->lineEditLogin->clear();
        ui->lineEditLogin->setFocus();
    }
}


void janelaMedico::on_pushButtonCancelar_clicked()
{
    reject();
    close();
}

