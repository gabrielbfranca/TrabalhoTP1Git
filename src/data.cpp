#include "data.h"

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

void Data::validar(string data) {

};
