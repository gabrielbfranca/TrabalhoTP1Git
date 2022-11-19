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
    Codigo code1;
    Data data1;
    Matricula mat1;
    Nome nome1;
    Senha senha1;
    Texto texto1;
    Disciplina disc1;


    data1.setData("data");
    disc1.setDisciplina("disciplina");
    mat1.setMatricula("matricula");
    nome1.setNome("nome");
    senha1.setSenha("senha");
    texto1.setTexto("texto");

     try{
         //valor_valido => 12345678917
        code1.setCodigo("12345678917");
    }
    catch(invalid_argument &excecao){
        cout<<"erro"<<endl;
    }
    cout << code1.getCodigo() << endl;
    cout << data1.getData() << endl;
    cout << disc1.getDisciplina() << endl;
    cout << mat1.getMatricula() << endl;
    cout << nome1.getNome() << endl;
    cout << senha1.getSenha() << endl;
    cout << texto1.getTexto() << endl;

    cout << "\nHello world!" << endl;

    Usuario usuario1;
    usuario1.setMatricula("teste");
    usuario1.setNome("teste");
    usuario1.setSenha("teste");
    cout << usuario1.getMatricula() << endl;
    cout << usuario1.getNome() << endl;
    cout << usuario1.getSenha() << endl;

    return 0;
}
