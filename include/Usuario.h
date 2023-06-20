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

    /// @brief Métodos get e set para o atributo título
    int getID();
    void setID()
    string get();
    void setTitulo(string titulo);

    /// @brief Métodos get e set para o atributo título
    string getArtista();
    void setArtista(string artista);
};

#endif