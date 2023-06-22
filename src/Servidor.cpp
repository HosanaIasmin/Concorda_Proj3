#include "Servidor.h"
#include "Canal.h"
#include <iostream>
#include <string>
#include <random>
#include <vector>

using namespace std;

Servidor::Servidor(int usarioDonoId, string nome, string descricao){
    this->usuarioDonoId = usuarioDonoId;
    this->nome = nome;
    this->descricao = descricao;
    this->codigoConvite = gerarCodigoConvite();
}

int Servidor::getUsuarioDonoId(){
    return usuarioDonoId;
}
string Servidor::getNome(){
    return nome;
}
string Servidor::getCodigoConvite(){
    return codigoConvite;
}
std::vector<Canal *> Servidor::getCanais(){
    return canais;
}
std::vector<int> Servidor::getParticipantesIDs(){
    return participantesIDs;
}

int Servidor::setUsuarioDonoId(int dono){
    usuarioDonoId = dono;
}
string Servidor::setNome(string nome){
    nome = nome;
}
string Servidor::gerarNovoCodigoConvite(){
    codigoConvite = gerarCodigoConvite();
}
void Servidor::addCanal(const Canal &canal){
    canais.push_back(canal);
}
void Servidor::addParticipante(int participanteId){
    participantesIDs.push_back(participanteId);
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