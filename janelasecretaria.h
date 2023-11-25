#ifndef JANELASECRETARIA_H
#define JANELASECRETARIA_H

#include <QDialog>
#include <secretaria.h>
#include <QMessageBox>

namespace Ui {
class janelasecretaria;
}

class janelasecretaria : public QDialog
{
    Q_OBJECT

public:
    explicit janelasecretaria(QWidget *parent = nullptr);
    ~janelasecretaria();

private slots:
    void on_pushButtonLogin_clicked();

    void on_pushButtonCancelar_clicked();

private:
    Ui::janelasecretaria *ui;
    Secretaria *secretariaGeral;
    int cont;
};

#endif // JANELASECRETARIA_H
