#ifndef SISTEMA_H
#define SISTEMA_H

#include "Usuario.h"
#include<vector>
#include"Servidor.h"
#include "Usuario.h"
#include "Canal.h"

using namespace std;

class Sistema {
    private:
       
       std::vector<Usuario> usuarios;
       std::vector<Servidor> servidores;
       int idUsuarioLogado;
       Servidor servidorVisualizado;
       Canal canalVisualizado;

    public:

    enum class Resultado {
        OK,
        USUARIO_EXISTE,
        USUARIO_NAO_ENCONTRADO,
        CREDENCIAIS_INVALIDAS,
        NAO_CONECTADO
    };
    
    
    Sistema();
    Sistema(int idUsuarioLogado);
   ~Sistema();

   std::vector<Usuario> getUsuarios();
   void setUsuarios(std::vector<Usuario> usuarios);

   std::vector<Servidor> getServidores();
   void setServidores(std::vector<Servidor> servidores);

   int getidUsuarioLogado();
   void setidUsuarioLogado(int idUsuarioLogado);

   Servidor getServidorVisualizado();
   void setServidorVisualizado(Servidor servidorVisualizado);

   Canal getCanalVisualizado();
   void setCanalVisualizado( Canal canalVisualizado);

    string sair();
    Resultado criar_usuario( string email,  string senha,  string nome);
    Resultado login( string email,  string senha);
    Resultado desconectar();
    string criar_servidor(string nome);
    string mudar_desc_serv(string nome,  string descricao);
    string setar_codigo_convite( string nome,  string codigo);
    string listar_serv();
    string remover_serv( string nome);
    string entrar_serv(string nome,string codigo);
    string sair_serv();
    string listar_participantes();

    bool existeEmail(string email);
    Usuario* findUser(string email, string senha);

 }; 

   

     
#endif


