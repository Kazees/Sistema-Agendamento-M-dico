#ifndef MEDICO_H
#define MEDICO_H
#include <QString>
#include <pessoa.h>

class Paciente;

class Medico:public Pessoa
{
private:
    int matricula;
    Paciente *pacienteAssociado;

public:
    Medico();
    Medico(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula);

    int getMatricula()const {return matricula;}
    Paciente* getPacienteAssociado()const {return pacienteAssociado;}

    bool autenticar(QString senha)override {return Pessoa::autenticar(senha);}
    void associarPaciente(Paciente *paciente);
    QString consultarAgenda()const;
    void consultarAgendaPaciente()const;

};

#endif // MEDICO_H
