#include <regex>
#include "codigo.h"



void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
};

string Codigo::getCodigo() {
    return codigo;
}

Codigo::Codigo() {
    this->codigo = "";
}
void Codigo::validar(string codigo) {
    regex validacao("[0-9]{11}");

    if (!regex_match(codigo, validacao)) {
        throw invalid_argument("Código inválido. Digite apenas 11 números");
    }

    int len = codigo.length();

    int n, sobra = 0;

    for (int i = 0; i < len - 1; i++) {
        n = sobra*10 + (str[i] - '0');
        sobra = n % 11;
    }
    if (sobra != codigo[11]) {
        throw invalid_argument("Digito verificador inválido")
    }
}
