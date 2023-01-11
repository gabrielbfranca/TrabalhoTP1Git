#include <iostream>
#include "testes.h"
#include <regex>

#include "builders.h"

using namespace std;

int main()
{
    Builder *builder;
    builder = new Builder();

    CntrApresentacaoControle *cntrApresentacaoControle;
    cntrApresentacaoControle = builder->construir();
    cntrApresentacaoControle->executar();

    delete builder;
}
