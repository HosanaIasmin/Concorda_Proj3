#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <iostream>
#include <string>
#include <vector>
#include "Canal.h"

using namespace std;

class Servidor {
    private:
        int usuarioDonoId;
        string nome;
        string descricao;
        string codigoConvite;
        std::vector<Canal *> canais;
        std::vector<int> participantesIDs;

    public:
        Servidor(int usarioDonoId, string nome, string descricao);
        int getUsuarioDonoId();
        string getNome();
        string getCodigoConvite();
        std::vector<Canal *> getCanais();
        std::vector<int> getParticipantesIDs();

        int setUsuarioDonoId();
        string setNome();
        string gerarNovoCodigoConvite();
        void addCanal(const Canal &canal);
        void addParticipante(int participanteId);


};