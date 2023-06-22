#include "Canal.h"
#include <iostream>
#include <string>

using namespace std;

Canal::Canal(string nome)
{

    this->nome = nome;
}

Canal::~Canal()
{
}

string Canal::getNome()
{
    return nome;
}

void Canal::setNome(string nome)
{
    nome = nome;
}

Mensagem::Mensagem(string dataHora, int enviadaPor, string conteudo)
{
    this->dataHora = dataHora;
    this->enviadaPor = enviadaPor;
    this->conteudo = conteudo;
}

string Mensagem::getDatahora()
{
    return dataHora;
}

void Mensagem::setDatahora(string dataHora)
{
    dataHora = dataHora;
}

int Mensagem::getEnviadaPor()
{
    return enviadaPor;
}

void Mensagem::setEnviadaPor(int enviadaPor)
{
    enviadaPor = enviadaPor;
}

string Mensagem::getConteudo()
{
    return conteudo;
}

void Mensagem::setConteudo(string conteudo)
{
    conteudo = conteudo;
}

