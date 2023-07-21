#ifndef CANAIS_H
#define CANAIS_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Canal
{

public:
    string nome;
    Canal();
    Canal(string nome);
    // Canais();

    // Destutor da classe
    ~Canal();

    virtual string getNome();
    virtual void setNome(string nome);
};

#endif