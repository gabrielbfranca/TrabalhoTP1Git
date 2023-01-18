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
    CAC = new CntrApresentacaoControle;
    CAC->executar();

    return 0;
}
