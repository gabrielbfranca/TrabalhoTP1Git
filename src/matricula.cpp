#include "matricula.h"

void Matricula::setMatricula(string matricula) {
    this->matricula = matricula;
};

string Matricula::getMatricula() {
    return matricula;
};

Matricula::Matricula() {
    this->matricula = "";
};
