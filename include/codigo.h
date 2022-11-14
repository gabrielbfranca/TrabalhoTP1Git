#ifndef CODIGO_H
#define CODIGO_H
#include <string>

using namespace std;

class Codigo {
    private:
        string codigo;
        void validar(string);
    public:
        void setCodigo(string);
        string getCodigo();
        Codigo();

};
inline string Codigo::getCodigo() {
    return codigo;
}
inline Codigo::Codigo() {
    this->codigo = "";
}

#endif // CODIGO_H
