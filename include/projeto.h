#ifndef PROJETO_H_INCLUDED
#define PROJETO_H_INCLUDED

#include "texto.h"
#include "codigo.h"


using namespace std;
class Projeto {
    private:
        Texto nome;
        Codigo codigo;
        Texto descricao;
    public:
        Projeto();
        void setNome(const Texto&);
        void setCodigo(const Codigo&);
        void setDescricao(const Texto&);

        Texto getNome() const;
        Codigo getCodigo() const;
        Texto getDescricao() const;
};

inline Texto Projeto::getNome() const{
    return nome;
};

inline Codigo Projeto::getCodigo() const{
    return codigo;
};

inline Texto Projeto::getDescricao() const{
    return descricao;
};

inline void Projeto::setNome(const Texto& nome){
    this->nome = nome;
};

inline void Projeto::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
};

inline void Projeto::setDescricao(const Texto& descricao){
    this->descricao = descricao;
};

#endif // PROJETO_H_INCLUDED
