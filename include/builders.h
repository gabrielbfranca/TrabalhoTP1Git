#ifndef BUILDERS_H
#define BUILDERS_H

#include "controladores.h"

class Builder
{
private:
    CntrApresentacaoControle *cntrApresentacaoControle;
public:
    CntrApresentacaoControle* construir();
    ~Builder();
};

#endif // BUILDERS_H
