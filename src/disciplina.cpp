#include "disciplina.h"

void Disciplina::setDisciplina(string disciplina) {

    this->disciplina = disciplina;
};

string Disciplina::getDisciplina() {
    return disciplina;
};

Disciplina::Disciplina() {
    this->disciplina = "";
};
