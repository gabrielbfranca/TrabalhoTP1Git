#include "senha.h"

void Senha::setSenha(string senha) {
    this->senha = senha;
};

string Senha::getSenha() {
    return senha;
};

Senha::Senha() {
    this->senha = "";
};
