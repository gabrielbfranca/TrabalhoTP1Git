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

#endif // DISCIPLINA_H
