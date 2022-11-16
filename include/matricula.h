#ifndef MATRICULA_H
#define MATRICULA_H
#include <string>

using namespace std;

class Matricula {
    private:
        string matricula;
        void validar(string);
    public:
        void setMatricula(string);
        string getMatricula();
        Matricula();

};

#endif // MATRICULA_H
