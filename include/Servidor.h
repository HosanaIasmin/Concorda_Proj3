#ifndef SERVIDOR_H
#define SERVIDOR_H

#include <iostream>
#include <vector>
#include "Canal.h"


class Servidor {
    private:
        int usuarioDonoID;
        std::string nome;
        std::string descricao;
        std::string codigoConvite;
        std::vector <Canal*> canais;
        std::vector <int> participantesIDs;

    public:
        Servidor(int usuarioDonoID, string nome, string descricao);
        ~Servidor();

        int getUsuarioDonoID();
        void setUsuarioDonoID(int usuarioDonoID);

        string getNome();
        void setNome(string nome);

        string getDescricao();
        void setDescricao(string descricao);
        
        string getCodigoConvite();
        string gerarNovoCodigoConvite();
        
        std::vector<Canal *> getCanais();
        void setCanais(std::vector <Canal*> canais);

        std::vector<int> getParticipantesIDs();
        void addParticipanteID(int participanteID);

        void addCanal(Canal *canal);

};

#endif