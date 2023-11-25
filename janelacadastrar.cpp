#include "janelacadastrar.h"
#include "ui_janelacadastrar.h"

janelaCadastrar::janelaCadastrar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janelaCadastrar)
{
    ui->setupUi(this);
}

janelaCadastrar::~janelaCadastrar()
{
    delete ui;
}
