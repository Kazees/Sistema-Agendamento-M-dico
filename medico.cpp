#include "medico.h"
#include "paciente.h"

Medico::Medico():Pessoa(0,"","",0,0),matricula(0)
{
}

Medico::Medico(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula):
    Pessoa(cpf,nome,email,telefone,wpp),matricula(matricula)
{
}

void Medico::associarPaciente(Paciente *paciente)
{
    pacienteAssociado=paciente;
}

QString Medico::consultarAgenda()const
{
    QString saida;

    saida+="Médico: "+nome+"\n";

    if(pacienteAssociado)
    {
        saida+="Paciente associado: "+pacienteAssociado->getNome()+"\n";
    }

    else
    {
        throw QString("Nenhum paciente associado");
    }

    return saida;
}

void Medico::consultarAgendaPaciente()const
{
    if(pacienteAssociado)
    {
        pacienteAssociado->consultarAgenda();
    }

    else
    {
        throw QString("Nenhum paciente associado.");
    }
}
