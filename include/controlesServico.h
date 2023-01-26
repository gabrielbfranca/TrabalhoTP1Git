#ifndef CONTROLESSERVICO_H
#define CONTROLESSERVICO_H

#include <string>
#include "interfaces.h"
#include "entidades.h"
#include "dominios.h"

// ----------------------------------------------------------

class CntrServicoAutenticao: public IServicoAutenticacao {
public:
    bool autenticar(Matricula* mat, Senha* senha) override;
};

// ----------------------------------------------------------

class CntrServicoUsuario: public IServicoUsuario {
public:
    bool descadastrar(Matricula *mat) override;
    bool alterar(Usuario *usuario) override;
    bool cadastrar(Usuario *usuario) override;
    string visualizar(Matricula *mat) override;
};

// ----------------------------------------------------------

class CntrServicoProjeto: public IServicoProjeto {
public:
    bool incluir(Projeto *projeto) override;
    bool excluir(Codigo *codigo) override;
    bool editar(Projeto *projeto) override;
    string visualizar(Codigo *codigo) override;
    string listar() override;
};

// -----------------------------------------------------------

class CntrServicoTarefa: public IServicoTarefa {
public:
    bool incluir(Tarefa *tarefa) override;
    bool excluir(Codigo *codigo) override;
    bool editar(Tarefa *tarefa) override;
    string visualizar(Codigo *codigo) override;
    string listar() override;
};

#endif // CONTROLESSERVICO_H
