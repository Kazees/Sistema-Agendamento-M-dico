#ifndef JANELACADASTRAR_H
#define JANELACADASTRAR_H

#include <QDialog>

namespace Ui {
class janelaCadastrar;
}

class janelaCadastrar : public QDialog
{
    Q_OBJECT

public:
    explicit janelaCadastrar(QWidget *parent = nullptr);
    ~janelaCadastrar();

private:
    Ui::janelaCadastrar *ui;
};

#endif // JANELACADASTRAR_H
