#include "disciplina.h"
#include <set>
#include <stdexcept>
void Disciplina::setDisciplina(string disciplina) {
    validar(disciplina);
    this->disciplina = disciplina;
};

void Disciplina::validar(string disciplina) {
    set<string> disciplinas{"Arquitetura", "Desenvolvimento", "Gerenciamento", "Implantacao","Requisitos", "Teste"};
    if (!(disciplinas.find(disciplina) != disciplinas.end())) {
        throw invalid_argument("Erro. Digite uma disciplina válida");
    }
}

string Disciplina::getDisciplina() {
    return disciplina;
};

Disciplina::Disciplina() {
    this->disciplina = "";
};

