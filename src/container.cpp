#include "container.h"

ContainerUsuario* ContainerUsuario::instancia = nullptr;
ContainerProjeto* ContainerProjeto::instancia = nullptr;
ContainerTarefa* ContainerTarefa::instancia = nullptr;

// --------------------------------------------------------

ContainerUsuario* ContainerUsuario::getInstancia(){
    if(instancia == nullptr)
        instancia = new ContainerUsuario();
    return instancia;
}

ContainerProjeto* ContainerProjeto::getInstancia(){
    if(instancia == nullptr)
        instancia = new ContainerProjeto();
    return instancia;
}

ContainerTarefa* ContainerTarefa::getInstancia(){
    if(instancia == nullptr)
        instancia = new ContainerTarefa();
    return instancia;
}

// --------------------------------------------------------

bool ContainerUsuario::incluir(Usuario* usuario){
    bool valor = true;
    string key = usuario->getMatricula().getValor();
    if(container.count(key) < 1)
        container[key] = *usuario;
    else
        valor = false;
    return valor;
}

bool ContainerUsuario::remover(string key){
    // remover projeto
    ContainerProjeto* cp = ContainerProjeto::getInstancia();
    ContainerProjeto::cmap mp = cp->getMap();
    for(ContainerProjeto::cmap::iterator i=mp.begin(); i!=mp.end(); i++){
        if(i->second.getMatUsuario().getValor() == key){
            cp->remover(i->second.getCodigo().getValor());
        }
    }

    // remover usuario
    if(container.erase(key) == 1)
        return true;
    else
        return false;
}

Usuario* ContainerUsuario::pesquisar(string key){
    Usuario* ptr = nullptr;
    if(container.count(key) == 1)
        ptr = &container[key];
    return ptr;
}

bool ContainerUsuario::atualizar(Usuario* usuario){
    string key = usuario->getMatricula().getValor();
    container[key] = *usuario;
    return true;
}

// -----------------------------------------------------------

bool ContainerProjeto::incluir(Projeto* projeto){
    bool valor = true;
    string key = projeto->getCodigo().getValor();
    if(container.count(key) < 1)
        container[key] = *projeto;
    else
        valor = false;
    return valor;
}

bool ContainerProjeto::remover(string key){
    // remover tarefa
    ContainerTarefa* ct = ContainerTarefa::getInstancia();
    ContainerTarefa::cmap mp = ct->getMap();
    for(ContainerTarefa::cmap::iterator i=mp.begin(); i!=mp.end(); i++){
        if(i->second.getCodProjeto().getValor() == key){
            ct->remover(i->second.getCodigo().getValor());
        }
    }

    // remover projeto
    if(container.erase(key) == 1)
        return true;
    else
        return false;
}

Projeto* ContainerProjeto::pesquisar(string key){
    Projeto* ptr = nullptr;
    if(container.count(key) == 1)
        ptr = &container[key];
    return ptr;
}

bool ContainerProjeto::atualizar(Projeto* projeto){
    string key = projeto->getCodigo().getValor();
    container[key] = *projeto;
    return true;
}

int ContainerProjeto::contar(string key){
    return container.count(key);
}

// -------------------------------------------------------------

bool ContainerTarefa::incluir(Tarefa* tarefa){
    string key = tarefa->getCodigo().getValor();
    bool valor = true;
    if(container.count(key) < 1)
        container[key] = *tarefa;
    else
        valor = false;
    return valor;
}

bool ContainerTarefa::remover(string key){
    if(container.erase(key) == 1)
        return true;
    else
        return false;
}

Tarefa* ContainerTarefa::pesquisar(string key){
    Tarefa* ptr = nullptr;
    if(container.count(key) == 1)
        ptr = &container[key];
    return ptr;
}

bool ContainerTarefa::atualizar(Tarefa* tarefa){
    string key = tarefa->getCodigo().getValor();
    container[key] = *tarefa;
    return true;
}
