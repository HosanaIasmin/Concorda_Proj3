#include <iostream>
#include <string>
#include "Sistema.h"
#include "Usuario.h"
#include "CanalTexto.h"
#include "CanalVoz.h"

Sistema::Sistema(){
    this->idUsuarioLogado = 0;
}

Sistema::Sistema(int idUsuarioLogado) {
    this->idUsuarioLogado = idUsuarioLogado;
}



Sistema::~Sistema(){

}

std::vector<Usuario> Sistema::getUsuarios()
{
    return this->usuarios;
}

void Sistema::setUsuarios(std::vector<Usuario> usuarios)
{
    this->usuarios = usuarios;
}

std::vector<Servidor> Sistema::getServidores()
{
    return this->servidores;
}

void Sistema::setServidores(std::vector<Servidor> servidores)
{
    this->servidores = servidores;
}

int Sistema::getidUsuarioLogado()
{
    return this->idUsuarioLogado;
}

void Sistema::setidUsuarioLogado(int idUsuarioLogado)
{
    this->idUsuarioLogado = idUsuarioLogado;
}

Servidor Sistema::getServidorVisualizado()
{
    return this->servidorVisualizado;
}

void Sistema::setServidorVisualizado(Servidor servidorVisualizado)
{
    this->servidorVisualizado = servidorVisualizado;
}

Canal Sistema::getCanalVisualizado()
{
    return this->canalVisualizado;
}

void Sistema::setCanalVisualizado(Canal canalVisualizado)
{
    this->canalVisualizado = canalVisualizado;
}


 Sistema::Resultado Sistema::criar_usuario(string email,  string senha, string nome ){
    if(existeEmail(email))
    return Resultado::USUARIO_EXISTE;

    Usuario novo(nome, email, senha);

    usuarios.push_back(novo);

    return Resultado::OK;
 }

 Sistema::Resultado Sistema::login(string email, string senha) {
    Usuario* user = findUser(email, senha);
    if (user != nullptr) {
        idUsuarioLogado = user->getID();
        return Resultado::OK;
    }

    return Resultado::CREDENCIAIS_INVALIDAS;
}

Sistema::Resultado Sistema::desconectar() {
    if (this->idUsuarioLogado==0)
        return Resultado::NAO_CONECTADO;

    int id = this->idUsuarioLogado;
    this->idUsuarioLogado = 0;

    return Resultado::OK;
}

 