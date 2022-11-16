#include "texto.h"

void Texto::setTexto(string texto) {
    this->texto = texto;
};

string Texto::getTexto() {
    return texto;
};

Texto::Texto() {
    this->texto = "";
};
