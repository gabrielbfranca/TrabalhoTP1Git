#ifndef SENHA_H
#define SENHA_H
#include <string>

using namespace std;

class Senha {
    private:
        string senha;
        void validar(string);
    public:
        void setSenha(string);
        string getSenha();
        Senha();

};

#endif // SENHA_H
