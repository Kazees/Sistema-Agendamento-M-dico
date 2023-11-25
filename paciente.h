#ifndef PACIENTE_H
#define PACIENTE_H
#include <QString>
#include <pessoa.h>

class Medico;

class Paciente:public Pessoa
{
private:
    Medico *medicoAssociado;
    QString login="paciente";

public:
    Paciente();
    Paciente(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp);

    Medico* getMedicoAssociado()const {return medicoAssociado;}

    void associarMedico(Medico *medico);
    bool autenticar(QString senha)override;
    QString consultarAgenda()const;
};

#endif // PACIENTE_H
