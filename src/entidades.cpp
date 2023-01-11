#include "entidades.h"

Projeto::Projeto() {
    nome = Texto();
    codigo = Codigo();
    descricao = Texto();
}

Tarefa::Tarefa(){
    nome = Texto();
    codigo = Codigo();
    inicio = Data();
    termino = Data();
    disciplina = Disciplina();
}

Usuario::Usuario(){
    nome = Nome();
    matricula = Matricula();
    senha = Senha();
};
