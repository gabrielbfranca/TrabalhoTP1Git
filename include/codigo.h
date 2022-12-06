#ifndef CODIGO_H
#define CODIGO_H
#include <string>

using namespace std;

///
/// Dominio Codigo, usado nas entidades Tarefa e Projeto
///
// Classe Código feita por Gabriel França Mat: 211020867
class Codigo {
    private:
        string codigo;
        void validar(string);
    public:
        void setCodigo(string);
        string getCodigo();
        Codigo();

};

///
/// Metodo getCodigo, retorna o valor armazenado
///

inline string Codigo::getCodigo(){
    return this->codigo;
}

#endif // CODIGO_H
