#include "data.h"
#include <regex>

void Data::validar(string data)
{

    regex data_modelo("(0[1-9]\[1-2][0-9]\3[0-1])-(0[1-9]\[1][0-2])-(2[1-9]\[3-9][0-9])");
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

///
/// Formato DD-MES-ANO
/// DD - 01 a 31
/// MES - 01 a 12
/// ANO - 00 a 99
/// Deve ser levado em consideracao se ano e ou nao e bissexto.
///

void Data::setData(string data)
{
    validar(data);

    this->data = data;
};

///
/// Metodo construtor
///

Data::Data()
{
    this->data = "";
};
