#include "entidades.h"

Projeto::Projeto() {
    nome = Texto();
    codigo = Codigo();
    descricao = Texto();
    matUsuario = Matricula();
}

Tarefa::Tarefa(){
    nome = Texto();
    codigo = Codigo();
    inicio = Data();
    termino = Data();
    disciplina = Disciplina();
    codProjeto = Codigo();
}

Usuario::Usuario(){
    nome = Nome();
    matricula = Matricula();
    senha = Senha();
};
