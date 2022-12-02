#include "nome.h"
#include <regex>

///
/// Armazena o valor no seguinte formato:
/// Nome e composto por prenome e ate dois sobrenomes.
/// Texto (prenome mais sobrenomes e espacos em branco) e composto por total de ate 20 caracteres.
/// Cada caractere e letra (A-Z a-z) ou espaco em branco.
/// Primeira letra de prenome ou de sobrenome e maiuscula (A-Z) e as outras sao minusculas (a-z).
/// Nao ha espacos em branco em sequencia.
/// Acentuacao pode ser desconsiderada.
///

void Nome::setNome(string nome) {
    validar(nome);
    this->nome = nome;
};

///
/// Metodo construtor
///

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
