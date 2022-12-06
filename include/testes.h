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

// Classe TUCodigo feita por Henrique Valente Mat: 211055380

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

// Classe TUData feita por Henrique Valente Mat: 211055380
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

// Classe TUDisciplina feita por Henrique Valente Mat: 211055380
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

// Classe TUMAtricula feita por Henrique Valente Mat: 211055380

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

// Classe TUNome feita por Henrique Valente Mat: 211055380

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

// Classe TUSenha feita por Henrique Valente Mat: 211055380
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

// Classe TUTexto feita por Henrique Valente Mat: 211055380

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

// Classe TUUsuario feita por Henrique Valente Mat: 211055380

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

// Classe TUTarefa feita por Henrique Valente Mat: 211055380

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

// Classe TUProjeto feita por Henrique Valente Mat: 211055380

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
