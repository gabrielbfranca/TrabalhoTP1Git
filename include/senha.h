#ifndef SENHA_H
#define SENHA_H
#include <string>

using namespace std;

// Classe Senha feita por Henrique Valente Mat: 211055380

class Senha {
    private:
        string senha;
    public:
        void setSenha(string);
        string getSenha();
        Senha();
        void validar(string);

};

///
/// retorna valor armazenado
///

inline string Senha::getSenha() {
    return senha;
};

#endif // SENHA_H
