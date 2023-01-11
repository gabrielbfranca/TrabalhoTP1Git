#ifndef BUILDERS_H
#define BUILDERS_H

#include "controladores.h"

class Builder
{
private:
    Controlador *controlador;
public:
    Controlador* construir();
    ~Builder();
};

#endif // BUILDERS_H
