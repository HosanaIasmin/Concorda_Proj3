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
    Canal(string nome);
    // Canais();

    // Destutor da classe
    ~Canal();

    string getNome();
    void setNome(string nome);
};

class Mensagem
{

private:
    string dataHora;
    int enviadaPor;
    string conteudo;

public:
    Mensagem(string dataHora, int enviadaPor, string conteudo);

    string getDatahora();
    void setDatahora(string dataHora);

    int getEnviadaPor();
    void setEnviadaPor(int enviadaPor);

    string getConteudo();
    void setConteudo(string conteudo);
};

class CanalTexto : public Canal
{
private:
    std::vector<Mensagem> mensagens;

public:
    CanalTexto(string nome) : Canal(nome)
    {
        // Additional initialization code specific to CanalTexto, if needed
    }

    std::vector<Mensagem> getMensagens()
    {
        return mensagens;
    }

    void adicionarMensagem(const Mensagem &mensagem)
    {
        mensagens.push_back(mensagem);
    }
};

class CanalVoz : public Canal
{
private:
    Mensagem ultimaMensagem;

public:
    CanalVoz(string nome) : Canal(nome)
    {
        // Additional initialization code specific to CanalVoz, if needed
    }

    Mensagem getUltimaMensagem()
    {
        return ultimaMensagem;
    }

    void setUltimaMensagem(Mensagem ultimaMensagem)
    {
        ultimaMensagem = ultimaMensagem;
    }
};
#endif