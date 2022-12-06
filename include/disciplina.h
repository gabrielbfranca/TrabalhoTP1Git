#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <string>

using namespace std;


// Classe Disciplina feita por Gabriel França Mat: 211020867
class Disciplina {
    private:
        string disciplina;
        void validar(string);
    public:
        void setDisciplina(string);
        string getDisciplina();
        Disciplina();

};

///
/// Retorna valor armazenado
///
inline string Disciplina::getDisciplina(){
    return this->disciplina;
}
#endif // DISCIPLINA_H
