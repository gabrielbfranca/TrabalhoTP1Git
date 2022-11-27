#include <iostream>

#include "codigo.h"
#include "data.h"
#include "matricula.h"
#include "nome.h"
#include "senha.h"
#include "texto.h"
#include "disciplina.h"
#include "usuario.h"


using namespace std;

int main()
{
    // teste do dominio Codigo
    Codigo code1;
    code1.setCodigo("12345678917");
    cout << code1.getCodigo() << endl;

    cout << "" << endl;

    // teste de dominio Data (incompleto)
    Data data1;
    data1.setData("data");
    cout << data1.getData() << endl;

    cout << "" << endl;

    // teste de dominio Disciplina
    Disciplina disc1;
    disc1.setDisciplina("Arquitetura");
    cout << disc1.getDisciplina() << endl;

    cout << "" << endl;

    // teste de dominio Matricula
    Matricula mat1;
    mat1.setMatricula("ABCD1234");
    cout << mat1.getMatricula() << endl;

    cout << "" << endl;

    // teste de dominio Nome (incompleto)
    Nome nome1;
    nome1.setNome("nome");
    cout << nome1.getNome() << endl;

    cout << "" << endl;

    // teste de dominio Senha
    Senha senha1;
    senha1.setSenha("1234AB");
    cout << senha1.getSenha() << endl;

    cout << "" << endl;

    // teste de dominio Texto (incompleto)
    Texto texto1;
    texto1.setTexto("texto");
    cout << texto1.getTexto() << endl;

    cout << "" << endl;

    // teste de entidade Usuario
    Usuario usuario1;
    usuario1.setMatricula(mat1);
    usuario1.setNome(nome1);
    usuario1.setSenha(senha1);

    return 0;
}
