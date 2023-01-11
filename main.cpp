#include <iostream>
#include "testes.h"
#include <regex>

#include "builders.h"

using namespace std;

int main()
{
    Builder *builder;
    builder = new Builder();

    Controlador *controlador;
    controlador = builder->construir();
    controlador->executar();

    delete builder;
}
