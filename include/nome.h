#ifndef NOME_H
#define NOME_H
#include <string>

using namespace std;

class Nome {
    private:
        string nome;
        void validar(string);
    public:
        void setNome(string);
        string getNome();
        Nome();

};

#endif // NOME_H
