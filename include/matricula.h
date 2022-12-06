#ifndef MATRICULA_H
#define MATRICULA_H
#include <string>

using namespace std;


// Classe Matricula feita por Gabriel França Mat: 211020867
class Matricula {
    private:
        string matricula;
        void validar(string);
    public:
        void setMatricula(string);
        string getMatricula();
        Matricula();

};

///
/// Retorna valor armazenado
///

inline string Matricula::getMatricula() {
    return this->matricula;
};

#endif // MATRICULA_H
