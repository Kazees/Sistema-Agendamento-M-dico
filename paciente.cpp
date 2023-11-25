#include "paciente.h"
#include "medico.h"


Paciente::Paciente():Pessoa(0,"","",0,0)
{
}

Paciente::Paciente(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp):Pessoa(cpf,nome,email,telefone,wpp)
{
}

void Paciente::associarMedico(Medico *medico)
{
    medicoAssociado=medico;

}

bool Paciente::autenticar(QString senha)
{
    return Pessoa::autenticar(senha);
}

QString Paciente::consultarAgenda()const
{
    QString saida;

    if(medicoAssociado)
    {
        saida+="Médico associado: "+medicoAssociado->getNome()+"\n";
        saida+="Paciente: "+nome+"\n";
    }

    else
    {
        throw QString("Nenhum médico associado.");
    }

    return saida;
}
