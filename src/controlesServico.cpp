#include "controlesServico.h"
#include <unordered_map>
#include "container.h"

using namespace std;

// -------------------------------------------------

bool CntrServicoAutenticao::autenticar(Matricula* mat, Senha* senha){
    ContainerUsuario* cp = ContainerUsuario::getInstancia();
    Usuario *usuario = cp->pesquisar(mat->getValor());

    if(usuario == nullptr){
        return false;
    }
    else{
        if(usuario->getSenha().getValor() == senha->getValor()){
            return true;
        }
        else{
            return false;
        }
    }
}


// --------------------------------------------------

bool CntrServicoUsuario::descadastrar(Matricula *mat){
    ContainerUsuario* cp = ContainerUsuario::getInstancia();

    return cp->remover(mat->getValor());
}

bool CntrServicoUsuario::alterar(Usuario *usuario){
    ContainerUsuario* cp = ContainerUsuario::getInstancia();
    return(cp->atualizar(usuario));
}

bool CntrServicoUsuario::cadastrar(Usuario *usuario){
    ContainerUsuario* cp = ContainerUsuario::getInstancia();
    return(cp->incluir(usuario));
}

bool CntrServicoUsuario::cadastrarProjeto(Matricula *mat, string projeto){
    ProjetoToUsuario *relacao = ProjetoToUsuario::getInstancia();
    return relacao->incluir(projeto, mat->getValor());
}

// ----------------------------------------------------

bool CntrServicoProjeto::incluir(Projeto *projeto){
    ContainerProjeto* cp = ContainerProjeto::getInstancia();
    return cp->incluir(projeto);
}

bool CntrServicoProjeto::excluir(Codigo *codigo){
    ContainerProjeto* cp = ContainerProjeto::getInstancia();
    return cp->remover(codigo->getValor());
}

bool CntrServicoProjeto::editar(Projeto *projeto){
    ContainerProjeto* cp = ContainerProjeto::getInstancia();
    if(cp->pesquisar(projeto->getCodigo().getValor()) == nullptr)
        return false;
    return cp->atualizar(projeto);
}

string CntrServicoProjeto::visualizar(Codigo *codigo){
    ContainerProjeto* cp = ContainerProjeto::getInstancia();
    Projeto* projeto = cp->pesquisar(codigo->getValor());
    if(projeto == nullptr)
        return "Projeto nao encontrado.";
    string saida = "Codigo: ";
    saida += projeto->getCodigo().getValor();
    saida += "\nNome: ";
    saida += projeto->getNome().getValor();
    saida += "\nDescricao: ";
    saida += projeto->getDescricao().getValor();
    return saida;
}

string CntrServicoProjeto::listar(){
    ContainerProjeto *cp = ContainerProjeto::getInstancia();
    ContainerProjeto::cmap mp = cp->getMap();
    string saida = "Projetos: ";
    for(ContainerProjeto::cmap::iterator i=mp.begin(); i!=mp.end(); i++){
        saida += "\n";
        saida += i->first;
    }
    return saida;
}

// ------------------------------------------------------

bool CntrServicoTarefa::incluir(Tarefa *tarefa){
    ContainerTarefa* cs = ContainerTarefa::getInstancia();
    return cs->incluir(tarefa);
}

bool CntrServicoTarefa::excluir(Codigo *codigo){
    ContainerTarefa* cs = ContainerTarefa::getInstancia();
    return cs->remover(codigo->getValor());
}

bool CntrServicoTarefa::editar(Tarefa *tarefa){
    ContainerTarefa* cs = ContainerTarefa::getInstancia();
    if(cs->pesquisar(tarefa->getCodigo().getValor()) == nullptr){
        return false;
    }
    return cs->atualizar(tarefa);
}

string CntrServicoTarefa::visualizar(Codigo *codigo){
    ContainerTarefa* cs = ContainerTarefa::getInstancia();
    Tarefa* tarefa = cs->pesquisar(codigo->getValor());
    if(tarefa == nullptr)
        return "Tarefa nao encontrada";
    string saida = "Codigo: ";
    saida += tarefa->getCodigo().getValor();
    saida += "\nNome";
    saida += tarefa->getNome().getValor();
    saida += "\nDisciplina: ";
    saida += tarefa->getDisciplina().getValor();
    saida += "\nData de inicio: ";
    saida += tarefa->getInicio().getValor();
    saida += "\nData de termino: ";
    saida += tarefa->getTermino().getValor();
    return saida;
}

string CntrServicoTarefa::listar(){
    ContainerTarefa *cp = ContainerTarefa::getInstancia();
    ContainerTarefa::cmap mp = cp->getMap();
    string saida = "Tarefas: ";
    for(ContainerTarefa::cmap::iterator i=mp.begin(); i!=mp.end(); i++){
        saida += "\n";
        saida += i->first;
    }
    return saida;
}
