#include "codigo.h"

void Codigo::setCodigo(string codigo) {
    this->codigo = codigo;
};

string Codigo::getCodigo() {
    return codigo;
}

Codigo::Codigo() {
    this->codigo = "";
}
