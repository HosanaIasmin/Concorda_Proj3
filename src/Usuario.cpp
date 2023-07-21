#include "Usuario.h"
#include <iostream>
#include <string>

using namespace std;

 Usuario::Usuario(int id,string nome,string email, string senha) {
        this->id = id;
        this->nome = nome;
        this->email = email;
        this->senha = senha;
    }



Usuario::~Usuario()
{
}

int Usuario::getID() {
    return id;
}

std::string Usuario::getNome()  {
    return nome;
}

std::string Usuario::getEmail() {
    return email;
}

std::string Usuario::getSenha() {
    return senha;
}


void Usuario::setID(int id) {
    id = id;
}

void Usuario::setNome( string nome) {
    nome = nome;
}

void Usuario::setEmail(string email) {
    email = email;
}

void Usuario::setSenha(string senha) {
    senha = senha;
}
