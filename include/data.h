#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;

// Classe Data feita por Gabriel França Mat: 211020867
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
