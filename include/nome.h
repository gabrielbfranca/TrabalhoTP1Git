#ifndef NOME_H
#define NOME_H
#include <string>

using namespace std;

// Classe Nome feita por Henrique Valente Mat: 211055380
class Nome {
    private:
        string nome;
        void validar(string);
    public:
        void setNome(string);
        string getNome();
        Nome();

};

///
/// Retorna valor armazendo
///

inline string Nome::getNome() {
    return nome;
};

#endif // NOME_H
