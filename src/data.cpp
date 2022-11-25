#include "data.h"

void Data::validar(string data) {

}

void Data::setData(string data) {
    validar(data);

    this->data = data;
};

Data::Data() {
    this->data = "";
};

