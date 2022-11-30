#ifndef TAREFA_H
#define TAREFA_H

#include "texto.h"
#include "codigo.h"
#include "data.h"
#include "disciplina.h"

class Tarefa
{
    private:
        Texto nome;
        Codigo codigo;
        Data inicio;
        Data termino;
        Disciplina disciplina;
    public:
        Tarefa();
        void setNome(const Texto&);
        void setCodigo(const Codigo&);
        void setInicio(const Data&);
        void setTermino(const Data&);
        void setDisciplina(const Disciplina&);
        Texto getNome() const;
        Codigo getCodigo() const;
        Data getInicio() const;
        Data getTermino() const;
        Disciplina getDisciplina() const;
};

inline Texto Tarefa::getNome()const{
    return nome;
}

inline Codigo Tarefa::getCodigo()const{
    return codigo;
}

inline Data Tarefa::getInicio()const{
    return inicio;
}

inline Data Tarefa::getTermino()const{
    return termino;
}

inline Disciplina Tarefa::getDisciplina()const{
    return disciplina;
}

inline void Tarefa::setNome(const Texto& texto){
    this->nome = nome;
}

inline void Tarefa::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

inline void Tarefa::setInicio(const Data& inicio){
    this->inicio = inicio;
}

inline void Tarefa::setTermino(const Data& termino){
    this->termino = termino;
}

inline void Tarefa::setDisciplina(const Disciplina& disciplina){
    this->disciplina = disciplina;
}

#endif // TAREFA_H
