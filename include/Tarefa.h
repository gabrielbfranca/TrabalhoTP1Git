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

///
/// Retorna objeto texto armazenado
///

inline Texto Tarefa::getNome()const{
    return nome;
}

///
/// Retorna objeto codigo armazenado
///

inline Codigo Tarefa::getCodigo()const{
    return codigo;
}

///
/// Retorna objeto data armazenado
///

inline Data Tarefa::getInicio()const{
    return inicio;
}

///
/// Retorna objeto data armazenado
///

inline Data Tarefa::getTermino()const{
    return termino;
}

///
/// Retorna objeto disciplina armazenado
///

inline Disciplina Tarefa::getDisciplina()const{
    return disciplina;
}

///
/// Armazena objeto nome
///

inline void Tarefa::setNome(const Texto& texto){
    this->nome = nome;
}

///
/// Armazena objeto codigo
///

inline void Tarefa::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
}

///
/// Armazena objeto data
///

inline void Tarefa::setInicio(const Data& inicio){
    this->inicio = inicio;
}

///
/// Armazena objeto data
///

inline void Tarefa::setTermino(const Data& termino){
    this->termino = termino;
}

///
/// Armazena objeto disciplina
///

inline void Tarefa::setDisciplina(const Disciplina& disciplina){
    this->disciplina = disciplina;
}

#endif // TAREFA_H
