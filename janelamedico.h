#ifndef JANELAMEDICO_H
#define JANELAMEDICO_H

#include <QDialog>
#include <medico.h>
#include <QMessageBox>
#include <QIntValidator>

namespace Ui {
class janelaMedico;
}

class janelaMedico : public QDialog
{
    Q_OBJECT

public:
    explicit janelaMedico(QWidget *parent = nullptr);
    ~janelaMedico();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonCancelar_clicked();

private:
    Ui::janelaMedico *ui;
    Medico *m1;
    int cont;
};

#endif // JANELAMEDICO_H
