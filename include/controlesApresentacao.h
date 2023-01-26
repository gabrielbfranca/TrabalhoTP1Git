#ifndef CONTROLESAPRESENTACAO_H
#define CONTROLESAPRESENTACAO_H

#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"

// -------------------------------------------------------------

class CntrApresentacaoControle
{
private:
    Matricula mat;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoUsuario *cntrApresentacaoUsuario;
    IApresentacaoProjeto *cntrApresentacaoProjeto;
public:
    void executar();
    void setCntrApresentacaoAutentificacao(IApresentacaoAutenticacao *cntr) {cntrApresentacaoAutenticacao = cntr;};
    void setCntrApresentacaoUsuario(IApresentacaoUsuario *cntr) {cntrApresentacaoUsuario = cntr;};
    void setCntrApresentacaoProjeto(IApresentacaoProjeto *cntr) {cntrApresentacaoProjeto = cntr;};
};

// ------------------------------------------------------------

class CntrApresentacaoAutenticacao: public IApresentacaoAutenticacao {
private:
    IServicoAutenticacao *cntr;
public:
    bool autenticar(Matricula *mat) override;
    void setCntrServicoAutenticacao(IServicoAutenticacao *cntr) override {this->cntr = cntr;};
};

// -------------------------------------------------------------

class CntrApresentacaoUsuario: public IApresentacaoUsuario {
private:
    IServicoUsuario *cntr;
public:
    bool editar(Matricula *mat) override;
    bool cadastrar() override;
    void executar(Matricula *mat) override;
    void setCntrServicoUsuario(IServicoUsuario *cntr) override {this->cntr = cntr;};
};

// -------------------------------------------------------------

class CntrApresentacaoProjeto: public IApresentacaoProjeto {
private:
    void editar();
    bool editarProjeto();
    bool editarTarefa();

    void incluir(Matricula* mat);
    bool incluirProjeto(Matricula* mat);
    bool incluirTarefa();

    void excluir();
    bool excluirProjeto();
    bool excluirTarefa();

    void visualizar();

    IServicoProjeto *cntrProjeto;
    IServicoTarefa *cntrTarefa;
public:
    void executar(Matricula *mat) override;
    void executar() override;
    void setCntrServicoProjeto(IServicoProjeto *cntrProjeto) override {this->cntrProjeto = cntrProjeto;};
    void setCntrServicoTarefa(IServicoTarefa *cntrTarefa) override {this->cntrTarefa = cntrTarefa;};
};
#endif // CONTROLESAPRESENTACAO_H
