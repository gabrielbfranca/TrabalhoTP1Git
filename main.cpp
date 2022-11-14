#include <iostream>

#include "codigo.h"
#include "data.h"
#include "matricula.h"
#include "nome.h"
#include "senha.h"
#include "texto.h"
#include "disciplina.h"


using namespace std;

int main()
{
    Codigo code1;
    Data data1;
    Matricula mat1;
    Nome nome1;
    Senha senha1;
    Texto texto1;
    Disciplina disc1;

    code1.setCodigo("codigo");
    data1.setData("data");
    mat1.setMatricula("matricula");
    nome1.setNome("nome");
    senha1.setSenha("senha");
    texto1.setTexto("texto");
    disc1.setDisciplina("disciplina");

    cout << code1.getCodigo() << endl;
    cout << data1.getData() << endl;
    cout << mat1.getMatricula() << endl;
    cout << nome1.getNome() << endl;
    cout << senha1.getSenha() << endl;
    cout << texto1.getTexto() << endl;
    cout << disc1.getDisciplina() << endl;

    cout << "\nHello world!" << endl;

    return 0;
}
