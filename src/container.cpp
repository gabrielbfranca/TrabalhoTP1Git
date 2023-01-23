#include "container.h"

ContainerUsuario* ContainerUsuario::instancia = nullptr;
ContainerProjeto* ContainerProjeto::instancia = nullptr;
ContainerTarefa* ContainerTarefa::instancia = nullptr;
ProjetoToUsuario* ProjetoToUsuario::instancia = nullptr;

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

ProjetoToUsuario* ProjetoToUsuario::getInstancia(){
    if(instancia == nullptr)
        instancia = new ProjetoToUsuario();
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
    ProjetoToUsuario *relacao = ProjetoToUsuario::getInstancia();
    relacao->removerUsuario(key);
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
    ProjetoToUsuario *r1 = ProjetoToUsuario::getInstancia();
    r1->removerProjeto(key);
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

// ------------------------------------------------------

bool ProjetoToUsuario::incluir(string projeto, string usuario){
    bool valor = true;
    ContainerProjeto *cp = ContainerProjeto::getInstancia();
    if(cp->contar(projeto) == 0)
        return false;
    if(container.count(projeto) <= 10)
        container.insert({{projeto, usuario}});
    else
        valor = false;
}

void ProjetoToUsuario::removerProjeto(string projeto){
    container.erase(projeto);
}

void ProjetoToUsuario::removerUsuario(string usuario){
    for(map::iterator i=container.begin(); i!=container.end(); i++){
        if(i->second == usuario){
            container.erase(i);
            break;
        }
    }
}

int ProjetoToUsuario::contar(string usuario){
    return container.count(usuario);
}
