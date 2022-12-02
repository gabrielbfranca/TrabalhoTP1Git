#include "texto.h"
#include <regex>

void Texto::setTexto(string texto) {
    validar(texto);
    this->texto = texto;
};

Texto::Texto() {
    this->texto = "";
};

void Texto::validar(string texto){
    regex textoModelo("([A-Za-z0-9 ]{10,40})");

    if (!regex_match(texto, textoModelo)){
        throw invalid_argument("Formato incorreto");
    }
}
