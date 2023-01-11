#include "dominios.h"

#include <regex>
#include <set>

void Codigo::validar(string codigo) {
    regex validacao("[0-9]{11}");

    if (!regex_match(codigo, validacao)) {
        throw invalid_argument("Código inválido. Digite apenas 11 números");
    }

    int len = codigo.length();

    int n, sobra = 0;

    for (int i = 0; i < len - 1; i++) {
        n = sobra*10 + (codigo[i] - '0');
        sobra = n % 11;
    }
    if (sobra != (codigo[10]- '0')) {
        throw invalid_argument("Digito verificador inválido");
    }
}

void Data::validar(string data)
{
    regex data_modelo("([0][0-9]|[1-2][0-9]|[3][0-1])-([0][0-9]|[1][0-2])-([0-9]{2})");
    bool data_valida = regex_match(data, data_modelo);

    if(data_valida){
        int d = stoi(data.substr(0, 2));
        int m = stoi(data.substr(3, 2));
        int a = stoi(data.substr(6, 2));
        int maximo = 30;
        int meses31[] = {1, 3, 5, 7, 8, 10, 12};

        if(m == 2)
            maximo = (a % 4 == 0)? 29 : 28;
        else{
            for(auto &mes31 : meses31){
                if(m == mes31)
                    maximo = 31;
            }
        }

        if(d > maximo)
            data_valida = false;
    }

    if(!data_valida)
        throw invalid_argument("Data invalida. Apenas datas no formato DD-MM-AA");
}

void Disciplina::validar(string disciplina) {
    set<string> disciplinas{"Arquitetura", "Desenvolvimento", "Gerenciamento", "Implantacao","Requisitos", "Teste"};
    if (!(disciplinas.find(disciplina) != disciplinas.end())) {
        throw invalid_argument("Erro. Digite uma disciplina válida");
    }
}

void Matricula::validar(string matricula) {
    regex validacao("[A-Z]{4}[0-9]{4}");

    if (!regex_match(matricula, validacao)) {
        throw invalid_argument("Matrícula inválida. Formato deve ser LLLLDDDD L sendo letra maíscula e D sendo digito");
    }
}

void Nome::validar(string nome){
    regex nomeModelo("([A-Z]{1})([a-z]{1,}) ([A-Z]{1})([a-z]{1,}) ([A-Z]{1})([a-z]{1,})");

    if (!regex_match(nome, nomeModelo)){
        throw invalid_argument("Nome inválido");
    }

    if (strlen(nome.c_str()) > 30){
        throw invalid_argument("Tamanho inválido");
    }
}

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

void Texto::validar(string texto){
    regex textoModelo("([A-Za-z0-9 ]{10,40})");

    if (!regex_match(texto, textoModelo)){
        throw invalid_argument("Formato incorreto");
    }
}
