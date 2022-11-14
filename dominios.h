#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>

using namespace std;

class Codigo {
    private:
        string codigo;
        static const int LIMITE = 11;
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

#endif // DOMINIOS_H_INCLUDED
