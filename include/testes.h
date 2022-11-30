#ifndef TESTES_H
#define TESTES_H

#include "codigo.h"
#include "data.h"
#include "disciplina.h"
#include "matricula.h"
#include "nome.h"
#include "senha.h"
#include "texto.h"
#include "usuario.h"
#include "tarefa.h"
#include "projeto.h"

class TUCodigo
{
    private:
        Codigo *codigo;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();

};

class TUData
{
    private:
        Data *data;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();
};

class TUDisciplina
{
    private:
        Disciplina *disc;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();
};

class TUMatricula
{
    private:
        Matricula *mat;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();
};

class TUNome
{
    private:
        Nome *nome;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();
};
class TUSenha
{
    private:
        Senha *senha;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();
};

class TUTexto
{
    private:
        Texto *texto;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
        void testeFalha();
    public:
        bool run();
};

class TUUsuario{
    private:
        Usuario *usuario;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
    public:
        bool run();
};

class TUTarefa{
    private:
        Tarefa *tarefa;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
    public:
        bool run();
};

class TUProjeto{
    private:
        Projeto *projeto;
        bool estado;
        void setUp();
        void tearDown();
        void testeSucesso();
    public:
        bool run();
};

#endif // TESTES_H
