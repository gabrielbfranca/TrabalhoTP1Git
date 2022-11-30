#include <iostream>

#include "testes.h"

using namespace std;

int main()
{
    // teste dominio Codigo
    TUCodigo tuCodigo;

    if (tuCodigo.run())
        cout << "SUCESSO - DOMINIO CODIGO" << endl;
    else
        cout << "FALHA - DOMINIO CODIGO" << endl;


    // teste dominio Data
    TUData tuData;

    if (tuData.run())
        cout << "SUCESSO - DOMINIO DATA" << endl;
    else
        cout << "FALHA - DOMINIO DATA" << endl;


    // teste dominio Disciplina
    TUDisciplina tuDisc;

    if (tuDisc.run())
        cout << "SUCESSO - DOMINIO DISCIPLINA" << endl;
    else
        cout << "FALHA - DOMINIO DISCIPLINA" << endl;


    // teste dominio Matricula
    TUMatricula tuMat;

    if (tuMat.run())
        cout << "SUCESSO - DOMINIO MATRICULA" << endl;
    else
        cout << "FALHA - DOMINIO MATRICULA" << endl;


    // teste dominio Nome
    TUNome tuNome;

    if (tuNome.run())
        cout << "SUCESSO - DOMINIO NOME" << endl;
    else
        cout << "FALHA - DOMINIO NOME" << endl;


    // teste dominio Senha
    TUSenha tuSenha;

    if (tuSenha.run())
        cout << "SUCESSO - DOMINIO SENHA" << endl;
    else
        cout << "FALHA - DOMINIO SENHA" << endl;


    // teste dominio Texto
    TUTexto tuTexto;

    if (tuTexto.run())
        cout << "SUCESSO - DOMINIO TEXTO" << endl;
    else
        cout << "FALHA - DOMINIO TEXTO" << endl;


    // teste entidade Usuario
    TUUsuario tuUser;

    if (tuUser.run())
        cout << "SUCESSO - ENTIDADE USUARIO" << endl;
    else
        cout << "FALHA - ENTIDADE USUARIO" << endl;


    // teste entidade Usuario
    TUTarefa tuTarefa;

    if (tuTarefa.run())
        cout << "SUCESSO - ENTIDADE TAREFA" << endl;
    else
        cout << "FALHA - ENTIDADE TAREFA" << endl;


    // teste entidade Usuario
    TUProjeto tuProjeto;

    if (tuProjeto.run())
        cout << "SUCESSO - ENTIDADE PROJETO" << endl;
    else
        cout << "FALHA - ENTIDADE PROJETO" << endl;
}
