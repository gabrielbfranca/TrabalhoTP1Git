#include "senha.h"
#include <regex>

void Senha::setSenha(string senha) {
    validar(senha);
    this->senha = senha;
};

Senha::Senha() {
    this->senha = "";
};

void Senha::validar(string senha){
    regex validacao("(?=.*[A-Z]{1,})(?=.*[A-Z]{1,})(?=.*[0-9]{1,})(?=.*[0-9]{1,})[A-Z0-9]{6}");

    // se há apenas dígitos e letras maiúsculas e o minimo de cada
    if (!regex_match(senha, validacao)) {
        throw invalid_argument("Senha invalido. Digite no minimo duas letras maiusculas e dois numeros.");
    }

    // se há dígitos repetidos
    for(int i = 0; i < 6; i++){
        for(int j = i + 1; j < 6; j++){
            if(senha[i] == senha[j]){
                throw invalid_argument("Senha invalida. Nao repeta caracteres.");
            }
        }
    }
}
