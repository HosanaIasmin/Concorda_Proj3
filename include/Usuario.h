#ifndef USUARIO_H
#define USUARIO_H


#include <iostream>
#include <string>

using namespace std;

class Usuario
{

private:

    int id;
    std::string nome;
    std::string email;
    std::string senha;

public:

    Usuario(int id, string nome, string email, string senha);
    Usuario();

    //Destutor da classe
    ~Usuario();

    
    int getID();
    void setID(int id);

    string getNome();
    void setNome(string nome);

 
    string getEmail();
    void setEmail(string email);

    string getSenha();
    void setSenha(string senha);
};

#endif