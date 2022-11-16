#include "nome.h"

void Nome::setNome(string nome) {
    this->nome = nome;
};

string Nome::getNome() {
    return nome;
};

Nome::Nome() {
    this->nome = "";
};
