#ifndef USUARIO_H
#define USUARIO_H

#include "nome.h"
#include "matricula.h"
#include "senha.h"

using namespace std;

class Usuario
{
    public:
        Usuario();
        void setNome(string);
        void setMatricula(string);
        void setSenha(string);
        string getNome();
        string getMatricula();
        string getSenha();

    private:
        Nome nome;
        Matricula matricula;
        Senha senha;
};

#endif // USUARIO_H
