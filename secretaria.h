#ifndef SECRETARIA_H
#define SECRETARIA_H
#include <QString>
#include <pessoa.h>
#include <medico.h>
#include <paciente.h>


class Secretaria:public Pessoa
{
private:
    int matricula;
    QString cargo;

    Paciente *pac[3];
    int numPac;

    Medico *medicosAss[3];
    int nummedicosAss;

    Secretaria *SecretariasAss[3];
    int numSecretariasAss;

    bool exclusaoLogica;
    QString login1="secretaria-geral";

public:
    Secretaria();
    Secretaria(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula,QString cargo);
    virtual ~Secretaria();

    int getMatricula()const {return matricula;}
    QString getCargo()const {return cargo;}
    QString getLogin1()const {return login1;}

    bool autenticar(QString senha)override {return Pessoa::autenticar(senha);}

    void cadastrarSecrataria(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula,QString cargo);
    void cadastrarMedico(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula);
    void cadastrarPaciente(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp);

    QString GerenciarSecretarias()const;
    QString consultarAgendaPaciente()const;
    QString consultarAgendaMedico()const;
    void excluirSecretaria();

};

#endif // SECRETARIA_H
