#include "data.h"

void Data::setData(string data) {
    this->data = data;
};

string Data::getData() {
    return data;
};

Data::Data() {
    this->data = "";
};
