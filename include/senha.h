#ifndef SENHA_H
#define SENHA_H
#include <string>

using namespace std;

class Senha {
    private:
        string senha;
    public:
        void setSenha(string);
        string getSenha();
        Senha();
        void validar(string);

};

#endif // SENHA_H
