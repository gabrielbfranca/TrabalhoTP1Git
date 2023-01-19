#ifndef INTERFACES_H
#define INTERFACES_H

#include <string>
#include "dominios.h"
#include "entidades.h"

class IServicoAutenticacao;
class IServicoUsuario;
class IServicoProjeto;
class IServicoTarefa;

class IApresentacaoAutenticacao {
public:
    virtual bool autenticar(Matricula*) = 0;
    virtual void setCntrServicoAutenticacao(IServicoAutenticacao*) = 0;
    virtual ~IApresentacaoAutenticacao(){};
};

class IApresentacaoUsuario {
public:
    virtual bool cadastrar() = 0;
    virtual void executar(Matricula*) = 0;
    virtual void setCntrServicoUsuario(IServicoUsuario*) = 0;
    virtual ~IApresentacaoUsuario(){};
};

class IApresentacaoProjeto {
public:
    virtual void executar(Matricula*) = 0;
    virtual void executar() = 0;
    virtual void setCntrServicoProjeto(IServicoProjeto*) = 0;
    virtual void setCntrServicoTarefa(IServicoTarefa*) = 0;
    virtual ~IApresentacaoProjeto(){};
};

class IServicoAutenticacao{
public:
    virtual bool autenticar(Matricula*, Senha*) = 0;
};

class IServicoUsuario {
public:
    virtual bool descadastrar(Matricula*) = 0;
    virtual bool alterar(Usuario*) = 0;
    virtual bool cadastrar(Usuario*) = 0;
    virtual bool cadastrarProjeto(Matricula*, string) = 0;
};

class IServicoProjeto {
public:
    virtual bool incluir(Projeto*) = 0;
    virtual bool excluir(Codigo*) = 0;
    virtual bool editar(Projeto*) = 0;
    virtual string visualizar(Codigo*) = 0;
    virtual string listar() = 0;
};

class IServicoTarefa {
public:
    virtual bool incluir(Tarefa*) = 0;
    virtual bool excluir(Codigo*) = 0;
    virtual bool editar(Tarefa*) = 0;
    virtual string visualizar(Codigo*) = 0;
    virtual string listar() = 0;
};

#endif // INTERFACES_H
