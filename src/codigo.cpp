#include <regex>
#include "codigo.h"

///
/// Metodo setCodigo, configura o valor do codigo apos validacao do formato.
/// Metodo de validacao segundo o seguinte formato.
/// Formato DDDDDDDDDDX D e digito (0-9).
/// X e digito verificador calculado atraves de algoritmo modulo 11.
///

void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
};

///
/// Metodo construtor
///

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
        n = sobra*10 + (codigo[i] - '0');
        sobra = n % 11;
    }
    if (sobra != (codigo[10]- '0')) {
        throw invalid_argument("Digito verificador inválido");
    }
}
