#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>
#include <unordered_map>
#include "dominios.h"
#include "entidades.h"

using namespace std;

// ---------------------------------------------------

class ContainerUsuario{
public:
    typedef unordered_map<string, Usuario> cmap;
    static ContainerUsuario* getInstancia();
    bool incluir(Usuario* usuario);
    bool remover(string key);
    Usuario* pesquisar(string key);
    bool atualizar(Usuario* usuario);
    cmap getMap(){return container;};
private:
    cmap container;
    static ContainerUsuario *instancia;
    ContainerUsuario(){};
};

// ----------------------------------------------------

class ContainerProjeto{
public:
    typedef unordered_map<string, Projeto> cmap;
    static ContainerProjeto* getInstancia();
    bool incluir(Projeto* projeto);
    bool remover(string key);
    Projeto* pesquisar(string key);
    bool atualizar(Projeto* projeto);
    int contar(string key);
    cmap getMap(){return container;};
private:
    cmap container;
    static ContainerProjeto *instancia;
    ContainerProjeto(){};
};

// ----------------------------------------------------

class ContainerTarefa {
public:
    typedef unordered_map<string, Tarefa> cmap;
    static ContainerTarefa* getInstancia();
    bool incluir(Tarefa* tarefa);
    bool remover(string key);
    Tarefa* pesquisar(string key);
    bool atualizar(Tarefa* tarefa);
    cmap getMap(){return container;};
private:
    cmap container;
    static ContainerTarefa *instancia;
    ContainerTarefa(){};
};

// ----------------------------------------------------

class ProjetoToUsuario {
private:
    typedef unordered_map<string, string> map;
    map container;
    static ProjetoToUsuario *instancia;
public:
    static ProjetoToUsuario* getInstancia();
    bool incluir(string projeto, string usuario);
    void removerProjeto(string projeto);
    void removerUsuario(string usuario);
    int contar(string projeto);
};
#endif // CONTAINER_H
