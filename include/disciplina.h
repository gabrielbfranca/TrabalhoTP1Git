#ifndef DISCIPLINA_H
#define DISCIPLINA_H
#include <string>

using namespace std;

class Disciplina {
    private:
        string disciplina;
        void validar(string);
    public:
        void setDisciplina(string);
        string getDisciplina();
        Disciplina();

};
inline string Disciplina::getDisciplina() {
    return disciplina;
}
inline Disciplina::Disciplina() {
    this->disciplina = "";
}

#endif // DISCIPLINA_H
