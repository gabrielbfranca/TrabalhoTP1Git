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
        void setNome(string);
        void setMatricula(string);
        void setSenha(string);
        string getNome();
        string getMatricula();
        string getSenha();

};

#endif // USUARIO_H
