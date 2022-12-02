#ifndef TEXTO_H
#define TEXTO_H
#include <string>

using namespace std;

class Texto {
    private:
        string texto;
        void validar(string);
    public:
        void setTexto(string);
        string getTexto() const;
        Texto();

};

///
/// retorna valor armazenado
///

inline string Texto::getTexto() const {
    return texto;
};

#endif // TEXTO_H
