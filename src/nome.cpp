#include "nome.h"
#include <regex>

void Nome::setNome(string nome) {
    validar(nome);
    this->nome = nome;
};

Nome::Nome() {
    this->nome = "";
};

void Nome::validar(string nome){
    regex nomeModelo("([A-Z]{1})([a-z]{1,}) ([A-Z]{1})([a-z]{1,}) ([A-Z]{1})([a-z]{1,})");

    if (!regex_match(nome, nomeModelo)){
        throw invalid_argument("Nome inválido");
    }

    if (strlen(nome.c_str()) > 30){
        throw invalid_argument("Tamanho inválido");
    }
}
