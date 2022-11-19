#include <regex>
#include "matricula.h"

void Matricula::setMatricula(string matricula) {
    validar(matricula);
    this->matricula = matricula;
};
//LLLLDDDD L (a-Z) D (0-9)
void Matricula::validar(string matricula) {
    regex validacao("[A-Z]{4}[0-9]{4}");

    if (!regex_match(matricula, validacao)) {
        throw invalid_argument("Matrícula inválida. Formato deve ser LLLLDDDD L sendo letra maíscula e D sendo digito");
    }
};
string Matricula::getMatricula() {
    return matricula;
};

Matricula::Matricula() {
    this->matricula = "";
};
