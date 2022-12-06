#ifndef USUARIO_H
#define USUARIO_H

#include "nome.h"
#include "matricula.h"
#include "senha.h"

using namespace std;

// Classe Usuario feita por Henrique Valente Mat: 211055380

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

#endif // USUARIO_H
