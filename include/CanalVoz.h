#ifndef CANALVOZ_H
#define CANALVOZ_H

#include <iostream>
#include "Canal.h"
#include "Mensagem.h"


class CanalVoz : public Canal
{
private:
    Mensagem ultimaMensagem;

public:
    CanalVoz(string nome);
    ~CanalVoz();
    

    Mensagem getUltimaMensagem();
    void setUltimaMensagem(Mensagem ultimaMensagem);
};

#endif