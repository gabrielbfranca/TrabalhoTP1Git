#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED
#include <string>

using namespace std;

class Codigo {
    private:
        std::string codigo;
        static const int LIMITE = 11;
        void validar(std::string);
    public:
        void setCodigo(std::string);
        std::string getCodigo();


        Codigo();

};
inline std::string Codigo::getCodigo() {
        return codigo;
}
inline Codigo::Codigo() {
    this->codigo = "";
}

#endif // DOMINIOS_H_INCLUDED
