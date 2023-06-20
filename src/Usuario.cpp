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

    int getID() {
        return id;
    }

    std::string getNome()  {
        return nome;
    }

    std::string getEmail() {
        return email;
    }

    std::string getSenha() {
        return senha;
    }

    // Setter methods
    void setID(int id) {
        id = id;
    }

    void setNome( string nome) {
        nome = nome;
    }

    void setEmail(string email) {
        email = email;
    }

    void setSenha(string senha) {
        senha = senha;
    }
