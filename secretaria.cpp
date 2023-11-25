#include "secretaria.h"

Secretaria::Secretaria():Pessoa(0,"","",0,0),matricula(0),cargo("secretaria-geral"),numPac(0),nummedicosAss(0),numSecretariasAss(0)
{
}

Secretaria::Secretaria(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula,QString cargo):
    Pessoa(cpf,nome,email,telefone,wpp),matricula(matricula),cargo(cargo),numPac(0),nummedicosAss(0),numSecretariasAss(0)
{
}

Secretaria::~Secretaria()
{
    for(int i=0;i<numSecretariasAss;i++)
    {
        delete SecretariasAss[i];
    }
}

void Secretaria::cadastrarSecrataria(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula,QString cargo)
{
    try
    {
        exclusaoLogica=false;

        if(numSecretariasAss<3 && this->cargo=="secretaria-geral" && !exclusaoLogica)
        {
            SecretariasAss[numSecretariasAss]=new Secretaria(cpf,nome,email,telefone,wpp,matricula,cargo);
            numSecretariasAss++;
            throw QString("Cadastrada");
        }

        else
        {
            throw QString("Limite de secretárias atingido para secretária-geral.");
        }
    }

    catch (std::bad_alloc &erro)
    {
        throw QString("Não foi possível cadastrar secretaria.");
    }
}

void Secretaria::cadastrarMedico(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp,int matricula)
{
    try
    {
        if(nummedicosAss<3 && !exclusaoLogica)
        {
            medicosAss[nummedicosAss]=new Medico(cpf,nome,email,telefone,wpp,matricula);
            nummedicosAss++;
            throw QString("Cadastrado");
        }

        else
        {
            throw QString("Limite de secretárias atingido para secretária-geral.");
        }
    }

    catch (std::bad_alloc &erro)
    {
        throw QString("Não foi possível cadastrar médico.");
    }

}

void Secretaria::cadastrarPaciente(long long int cpf,QString nome,QString email,long long int telefone,long long int wpp)
{
    try
    {
        if(numPac<3 && !exclusaoLogica)
        {
            pac[numPac]=new Paciente(cpf,nome,email,telefone,wpp);
            numPac++;

            throw QString("Cadastrado");
        }

        else
        {
            throw QString("Limite de secretárias atingido para secretária-geral.");
        }
    }

    catch (std::bad_alloc &erro)
    {
        throw QString("Não foi possível cadastrar secretaria.");
    }
}

QString Secretaria::GerenciarSecretarias()const
{
    QString saida;

    for(int i=0;i<numSecretariasAss;i++)
    {
        if(exclusaoLogica)
        {
            throw QString("Nenhuma secretaria cadastrada.");
        }

        if(!SecretariasAss[i]->exclusaoLogica)
        {
            saida+="Nome secretaria: "+SecretariasAss[i]->getNome();
            saida+="\nCPF secretaria:"+QString::number(SecretariasAss[i]->getCpf())+"\n";
        }

        if(nummedicosAss!=0 && !exclusaoLogica)
        {
            medicosAss[i]->associarPaciente(pac[i]);
            saida+=medicosAss[i]->consultarAgenda()+"\n";
        }
    }

    return saida;
}

QString Secretaria::consultarAgendaPaciente()const
{
    QString saida;

    for(int i=0;i<numPac;i++)
    {
        if(nummedicosAss!=0)
        {
            if(numSecretariasAss!=0 && !exclusaoLogica)
            {
                saida+="Secretaria: "+SecretariasAss[i]->getNome()+"\n";
            }

            if (medicosAss[i] && !exclusaoLogica) // Certifique-se de que há um médico associado válido
            {
                pac[i]->associarMedico(medicosAss[i]);
            }

            saida+=pac[i]->consultarAgenda()+"\n";
        }

        else
        {
            throw QString("Não exite paciente associado.");
        }
    }

    return saida;
}

QString Secretaria::consultarAgendaMedico()const
{
    QString saida;

    for(int i=0;i<nummedicosAss;i++)
    {
        if(numPac!=0)
        {
            if(numSecretariasAss!=0 && !exclusaoLogica)
            {
                saida+="Secretaria: "+SecretariasAss[i]->getNome()+"\n";
            }

            if(pac[i] && !exclusaoLogica)
            {
                medicosAss[i]->associarPaciente(pac[i]);
            }

            saida+=medicosAss[i]->consultarAgenda()+"\n";
        }

        else
        {
            throw QString("Não exite paciente associado.");
        }
    }

    return saida;
}

void Secretaria::excluirSecretaria()
{
    if(this->cargo=="secretaria-geral")
    {
        for(int i=0;i<numSecretariasAss;i++)
        {
            if(SecretariasAss[i] && !SecretariasAss[i]->exclusaoLogica) // Verificar se a secretaria que ira ser excluida está na lista de assesorados
            {
                SecretariasAss[i]->exclusaoLogica=true;
            }
        }

        exclusaoLogica=true;
        throw QString("Excluida.");
    }

    else
    {
        throw QString("Apenas secretaria geral pode excluir.");
    }
}
