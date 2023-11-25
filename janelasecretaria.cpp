#include "janelasecretaria.h"
#include "ui_janelasecretaria.h"

janelasecretaria::janelasecretaria(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janelasecretaria), cont(0)
{
    ui->setupUi(this);
    secretariaGeral=new Secretaria;

    ui->lineEditLogin->setFocus();
}

janelasecretaria::~janelasecretaria()
{
    delete ui;
}

void janelasecretaria::on_pushButtonLogin_clicked()
{
    try
    {
        if(ui->lineEditLogin->text()!=secretariaGeral->getLogin1())
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

        secretariaGeral->autenticar(ui->lineEditSenha->text());

        if(secretariaGeral->getCont()==3)
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
    }
}


void janelasecretaria::on_pushButtonCancelar_clicked()
{
    reject();
    close();
}

