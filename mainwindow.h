#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIntValidator>
#include <QMessageBox>
#include <QFile>
#include <fstream>
#include <QTextStream>
#include <secretaria.h>
#include <medico.h>
#include <paciente.h>
#include <janelasecretaria.h>
#include <janelamedico.h>
#include <janelapaciente.h>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonSecretaria_clicked();

    void on_pushButtonMedico_clicked();

    void on_pushButtonPaciente_clicked();

    void on_pushButtonCadastrarSec_clicked();

    void on_pushButtonConsultarSec_clicked();

    void on_pushButtonCadastrarMed_clicked();

    void on_pushButtonConsultarMed_clicked();

    void on_pushButtonCadastrarPac_clicked();

    void on_pushButtonConsultarPac_clicked();

    void on_pushButtonExcluir_clicked();

    void on_pushButtonCriar_clicked();

private:
    Ui::MainWindow *ui;
    Secretaria *secretariaGeral;
    Medico *medico;
    Paciente *paciente;

    janelasecretaria s1;
    janelaMedico m1;
    JanelaPaciente p1;
};
#endif // MAINWINDOW_H
