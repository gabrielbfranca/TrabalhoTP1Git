#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>

using namespace std;

class Dominio {
    private:
        string valor;
    protected:
        virtual void validar(string) = 0;
    public:
        void setValor(string);
        string getValor() const;
};

inline void Dominio::setValor(string valor){
    validar(valor);
    this->valor = valor;
}

inline string Dominio::getValor() const {
    return valor;
}

// --------------------------------------------------

class Codigo: public Dominio{
protected:
    void validar(string);
};

class Data: public Dominio{
protected:
    void validar(string);
};

class Disciplina: public Dominio{
protected:
    void validar(string);
};

class Matricula: public Dominio{
protected:
    void validar(string);
};

class Nome: public Dominio{
protected:
    void validar(string);
};

class Senha: public Dominio{
protected:
    void validar(string);
};

class Texto: public Dominio{
protected:
    void validar(string);
};
#endif // DOMINIOS_H
