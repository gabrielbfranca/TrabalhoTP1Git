#include "data.h"

void Data::validar(string data) {

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

