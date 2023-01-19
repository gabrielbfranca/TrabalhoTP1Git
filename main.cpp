#include <iostream>
#include "testes.h"
#include <regex>

#include "dominios.h"
#include "entidades.h"
#include "interfaces.h"
#include "controlesApresentacao.h"
#include "controlesServico.h"

using namespace std;

int main()
{
    CntrApresentacaoControle *CAC;
    IApresentacaoAutenticacao *CAA;
    IApresentacaoUsuario *CAP;
    IApresentacaoProjeto *CAPSS;

    IServicoAutenticacao *CSA;
    IServicoUsuario *CSPA;
    IServicoProjeto *CSPE;
    IServicoTarefa * CSSE;

    CAC = new CntrApresentacaoControle();
    CAA = new CntrApresentacaoAutenticacao();
    CAP = new CntrApresentacaoUsuario();
    CAPSS = new CntrApresentacaoProjeto();

    CSA = new CntrServicoAutenticao();
    CSPA = new CntrServicoUsuario();
    CSPE = new CntrServicoProjeto();
    CSSE = new CntrServicoTarefa();

    CAC->setCntrApresentacaoAutentificacao(CAA);
    CAC->setCntrApresentacaoUsuario(CAP);
    CAC->setCntrApresentacaoProjeto(CAPSS);

    CAA->setCntrServicoAutenticacao(CSA);
    CAP->setCntrServicoUsuario(CSPA);
    CAPSS->setCntrServicoProjeto(CSPE);
    CAPSS->setCntrServicoTarefa(CSSE);

    CAC->executar();

    return 0;
}
