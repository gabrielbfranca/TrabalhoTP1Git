#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;

class Data {
    private:
        string data;
        void validar(string);
    public:
        void setData(string);
        string getData();
        Data();

};

///
/// Retorna valor armazenado
///

inline string Data::getData(){
    return this->data;
}
#endif // DATA_H
