#include "texto.h"
#include <regex>

///
/// armazena valor no seguinte formato:
/// 10 a 40 caracteres.
/// Cada caractere X e letra (A-Z ou a-z), digito (0-9) ou sinal de pontuacao ( . , ; ? ! : - ).
/// Nao ha espacos em branco em sequencia.
/// Nao ha sinal de pontuacao (. , ; : ? ! -) em sequencia.
/// Acentuacao pode ser desconsiderada.

void Texto::setTexto(string texto) {
    validar(texto);
    this->texto = texto;
};

///
/// Metodo construtor
///

Texto::Texto() {
    this->texto = "";
};

void Texto::validar(string texto){
    regex textoModelo("([A-Za-z0-9 ]{10,40})");

    if (!regex_match(texto, textoModelo)){
        throw invalid_argument("Formato incorreto");
    }
}
