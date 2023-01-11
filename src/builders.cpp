#include "builders.h"
#include <iostream>
#include <string>

using namespace std;

Builder::~Builder()
{
    delete controlador;
}

Controlador* Builder::construir()
{
    controlador = new Controlador();
    return controlador;
}
