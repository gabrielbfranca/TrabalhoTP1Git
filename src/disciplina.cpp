#include "disciplina.h"
#include <set>
#include <stdexcept>

///
/// Nao ha formato, apenas as seguintes opcoes:
/// Arquitetura, Desenvolvimento, Gerenciamento, Implantacao, Requisitos, Teste
///

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

///
/// Metodo construtor
///

Disciplina::Disciplina() {
    this->disciplina = "";
};

