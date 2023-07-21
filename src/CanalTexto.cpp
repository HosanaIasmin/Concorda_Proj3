#include <iostream>
#include "CanalTexto.h"

CanalTexto::CanalTexto()
{

}

CanalTexto::CanalTexto(std::string nome)
{
    this->nome = nome;
}

CanalTexto::~CanalTexto()
{
    
}

std::vector <Mensagem> CanalTexto::getMensagens()
{
    return this->mensagens;
}

void CanalTexto::setMensagens(std::vector <Mensagem> mensagens)
{
    this->mensagens = mensagens;
}

