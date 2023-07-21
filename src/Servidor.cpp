#include "Servidor.h"
// #include "Canal.h"
// #include <iostream>
// #include <string>
#include <random>
// #include <vector>

using namespace std;

Servidor::Servidor(int usuarioDonoID, string nome, string descricao) {
    this->usuarioDonoID = usuarioDonoID;
    this->nome = nome;
    this->descricao = descricao;
    this->codigoConvite = gerarCodigoConvite();
}

Servidor::~Servidor() {
    this->canais.clear();
}


int Servidor::getUsuarioDonoID() {
    return this->usuarioDonoID;
}
void Servidor::setUsuarioDonoID(int usuarioDonoID) {
    this->usuarioDonoID = usuarioDonoID;
}

string Servidor::getNome() {
    return this->nome;
}
void Servidor::setNome(string nome) {
    this->nome = nome;
}

string Servidor::getDescricao() {
    return this->descricao;
}
void Servidor::setDescricao(string descricao) {
    this->descricao = descricao;
}

string Servidor::getCodigoConvite() {
    return this->codigoConvite;
}
string Servidor::gerarNovoCodigoConvite() {
    codigoConvite = gerarCodigoConvite();
    return codigoConvite;
}

std::vector<Canal *> Servidor::getCanais() {
    return this->canais;
}
void Servidor::setCanais(std::vector <Canal *> canais) {
    this->canais = canais;
}

std::vector<int> Servidor::getParticipantesIDs() {
    return participantesIDs;
}
void Servidor::addParticipanteID(int participanteID) {
    this->participantesIDs.push_back(participanteID);
}

void Servidor::addCanal(Canal *canal) {
    this->canais.push_back(canal);
}




std::string gerarCodigoConvite() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dis(0, 9);

    std::string codigoConvite;
    for (int i = 0; i < 6; i++) {
        codigoConvite += std::to_string(dis(gen));
    }

    return codigoConvite;
}

