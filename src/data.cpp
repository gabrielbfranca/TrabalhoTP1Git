#include "data.h"
#include <regex>

void Data::validar(string data) {


    regex formato_data("(0[1-9]|[1-2][0-9]|3[0-1])-(0[1-9]|[1][0-2])-(2[1-9]|[3-9][0-9])");



    if(regex_match(data, formato_data)){
        int d = stoi(data.substr(0, 2));
        int m = stoi(data.substr(3, 2));
        int a = stoi(data.substr(6, 2));
        int maximo = 30;
        int meses31[] = {1, 3, 5, 7, 8, 10, 12};

        if(m == 2) // se fevereiro
            maximo = (a % 4 == 0)? 29 : 28;
        else{
            for(auto &mes31 : meses31){
                if(m == mes31)
                    maximo = 31;
            }
        }

        if(d > maximo){
            throw invalid_argument("Data invalida. Esse mês tem dias inválidos");
        }
    }
    else {
        throw invalid_argument("Data invalida. Apenas datas no formato DD-MM-AA");
    }
}

void Data::setData(string data) {
    validar(data);

    this->data = data;
};

string Data::getData() {
    return data;
};


Data::Data() {
    this->data = "";
};

