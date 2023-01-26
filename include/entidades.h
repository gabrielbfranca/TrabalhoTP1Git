#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"

using namespace std;

class Projeto {
    private:
        Texto nome;
        Codigo codigo;
        Texto descricao;
        Matricula matUsuario;
    public:
        Projeto();
        void setNome(const Texto&);
        void setCodigo(const Codigo&);
        void setDescricao(const Texto&);
        void setMatUsuario(const Matricula&);

        Texto getNome() const;
        Codigo getCodigo() const;
        Texto getDescricao() const;
        Matricula getMatUsuario() const;
};

///
/// Retorna objeto texto armazenado
///

inline Texto Projeto::getNome() const{
    return nome;
};

///
/// Retorna objeto codigo armazenado
///

inline Codigo Projeto::getCodigo() const{
    return codigo;
};

///
/// Retorna objeto texto armazenado
///

inline Texto Projeto::getDescricao() const{
    return descricao;
};

inline Matricula Projeto::getMatUsuario() const{
    return matUsuario;
}
///
/// Retorna objeto texto armazenado
///

inline void Projeto::setNome(const Texto& nome){
    this->nome = nome;
};

///
/// Retorna objeto codigo armazenado
///

inline void Projeto::setCodigo(const Codigo& codigo){
    this->codigo = codigo;
};

///
/// Retorna objeto texto armazenado
///

inline void Projeto::setDescricao(const Texto& descricao){
    this->descricao = descricao;
};

inline void Projeto::setMatUsuario(const Matricula& matUsuario){
    this->matUsuario = matUsuario;
}

// -----------------------------------------------------------------

class Tarefa
{
    private:
        Texto nome;
        Codigo codigo;
        Data inicio;
        Data termino;
        Disciplina disciplina;
        Codigo codProjeto;
    public:
        Tarefa();

        void setNome(const Texto&);
        void setCodigo(const Codigo&);
        void setInicio(const Data&);
        void setTermino(const Data&);
        void setDisciplina(const Disciplina&);
        void setCodProjeto(const Codigo&);

        Texto getNome() const;
        Codigo getCodigo() const;
        Data getInicio() const;
        Data getTermino() const;
        Disciplina getDisciplina() const;
        Codigo getCodProjeto() const;
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

inline Codigo Tarefa::getCodProjeto() const{
    return codProjeto;
}

///
/// Armazena objeto nome
///

inline void Tarefa::setNome(const Texto& texto){
    this->nome = texto;
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

inline void Tarefa::setDisciplina(const Disciplina& disc){
    this->disciplina = disc;
}

inline void Tarefa::setCodProjeto(const Codigo& codProjeto){
    this->codProjeto = codProjeto;
}

// ----------------------------------------------------------------

class Usuario
{
    private:
        Nome nome;
        Matricula matricula;
        Senha senha;

    public:
        Usuario();
        void setNome(const Nome&);
        void setMatricula(const Matricula&);
        void setSenha(const Senha&);
        Nome getNome() const;
        Matricula getMatricula() const;
        Senha getSenha() const;

};

///
/// retorna nome armazenado
///

inline Nome Usuario::getNome() const{
    return nome;
};

///
/// retorna matricula armazenada
///

inline Matricula Usuario::getMatricula() const{
    return matricula;
};

///
/// retorna senha armazenada
///

inline Senha Usuario::getSenha() const{
    return senha;
};

///
/// armazena um objeto nome
///

inline void Usuario::setNome(const Nome& nome){
    this->nome = nome;
};

///
/// armazena um objeto matricula
///

inline void Usuario::setMatricula(const Matricula& matricula){
    this->matricula = matricula;
};

///
/// armazena um objeto senha
///

inline void Usuario::setSenha(const Senha& senha){
    this->senha = senha;
};

#endif // ENTIDADES_H
