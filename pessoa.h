#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

class Pessoa
{
private:
    QString senhaCorreta="senha123";

protected:
    long long int cpf;
    QString nome;
    QString email;
    long long int telefone;
    long long int wpp;
    int cont;

public:
    Pessoa();
    Pessoa(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp);

    long long getCpf() const {return cpf;}
    QString getNome() const {return nome;}
    QString getEmail()const {return email;}
    long long getTelefone() const {return telefone;}
    long long getWpp() const {return wpp;}
    int getCont()const {return cont;}

    virtual bool autenticar(QString senha);
};

#endif // PESSOA_H
