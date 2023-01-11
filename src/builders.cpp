#include "builders.h"
#include <iostream>
#include <string>

using namespace std;

Builder::~Builder()
{
    delete cntrApresentacaoControle;
}

CntrApresentacaoControle* Builder::construir()
{
    cntrApresentacaoControle = new CntrApresentacaoControle();
    return cntrApresentacaoControle;
}
