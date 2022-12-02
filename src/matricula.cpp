#include <regex>
#include "matricula.h"

///
/// Armazena o valor no seguinte formato:
/// Formato LLLLDDDD
/// L e letra maiuscula (A-Z).
/// D e digito (0-9).
///

void Matricula::setMatricula(string matricula) {
    validar(matricula);
    this->matricula = matricula;
};

void Matricula::validar(string matricula) {
    regex validacao("[A-Z]{4}[0-9]{4}");

    if (!regex_match(matricula, validacao)) {
        throw invalid_argument("Matrícula inválida. Formato deve ser LLLLDDDD L sendo letra maíscula e D sendo digito");
    }
};

///
/// Metodo construtor
///

Matricula::Matricula() {
    this->matricula = "";
};
