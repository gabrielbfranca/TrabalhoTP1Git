#ifndef USUARIO_H
#define USUARIO_H

#include "nome.h"
#include "matricula.h"
#include "senha.h"

using namespace std;

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

inline Nome Usuario::getNome() const{
    return nome;
};

inline Matricula Usuario::getMatricula() const{
    return matricula;
};

inline Senha Usuario::getSenha() const{
    return senha;
};

inline void Usuario::setNome(const Nome& nome){
    this->nome = nome;
};

inline void Usuario::setMatricula(const Matricula& matricula){
    this->matricula = matricula;
};

inline void Usuario::setSenha(const Senha& senha){
    this->senha = senha;
};

#endif // USUARIO_H
