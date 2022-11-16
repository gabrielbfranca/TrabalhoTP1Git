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
        string getTexto();
        Texto();

};

#endif // TEXTO_H
