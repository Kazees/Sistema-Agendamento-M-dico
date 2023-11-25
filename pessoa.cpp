#include "pessoa.h"

Pessoa::Pessoa():cpf(0),nome(""),email(""),telefone(0),wpp(0),cont(0)
{
}

Pessoa::Pessoa(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp):cpf(cpf),nome(nome),email(email),telefone(telefone)
  ,wpp(wpp),cont(0)
{
}

bool Pessoa::autenticar(QString senha)
{
    if(senha!=senhaCorreta)
    {
        cont++;

        if(cont==3)
        {
            return true;
        }

        throw QString("Senha incorreta.");
    }

    cont=0;
    return true;
}
