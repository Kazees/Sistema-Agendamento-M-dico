#ifndef JANELAPACIENTE_H
#define JANELAPACIENTE_H

#include <QDialog>
#include <paciente.h>
#include <QMessageBox>
#include <QIntValidator>

namespace Ui {
class JanelaPaciente;
}

class JanelaPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit JanelaPaciente(QWidget *parent = nullptr);
    ~JanelaPaciente();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonCancelar_clicked();

private:
    Ui::JanelaPaciente *ui;
    Paciente *p1;
    int cont;
};

#endif // JANELAPACIENTE_H
