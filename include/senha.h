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
inline string Senha::getSenha() {
    return senha;
}
inline Senha::Senha() {
    this->senha = "";
}

#endif // SENHA_H
