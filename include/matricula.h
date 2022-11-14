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
inline string Matricula::getMatricula() {
    return matricula;
}
inline Matricula::Matricula() {
    this->matricula = "";
}

#endif // MATRICULA_H
