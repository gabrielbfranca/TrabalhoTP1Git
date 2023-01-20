#include "controlesApresentacao.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <conio.h>

using namespace std;

// ---------------------------------------------------------

void CntrApresentacaoControle::executar(){
    char texto1[] = "Selecione um dos servicos (apenas numeros) : ";
    char texto2[] = "1 - Acessar sistema.";
    char texto3[] = "2 - Cadastrar usuario.";
    char texto4[] = "3 - Encerrar execucao do sistema.";

    char texto5[] = "Selecione um dos servicos : ";
    char texto6[] = "1 - Selecionar servicos de usuarios.";
    char texto7[] = "2 - Selecionar servicos relacionados a projetos.";
    char texto8[] = "3 - Encerrar sessao.";

    char texto9[] = "Falha na autenticacao. Digite algo para voltar.";
    char texto10[] = "Digite uma das opcoes acima. Aperte enter para continuar.";

    int campo;
    bool apresentar = true;
    bool apresentar2 = true;

    while (apresentar){
        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        cin >> campo;

        switch (campo){
        case 1:
            apresentar2 = true;
            while(apresentar2){
                if(cntrApresentacaoAutenticacao->autenticar(&mat)){
                    system("CLS");

                    cout << texto5 << endl;
                    cout << texto6 << endl;
                    cout << texto7 << endl;
                    cout << texto8 << endl;

                    int campo;
                    cin >> campo;
                    switch(campo){
                    case 1:
                        cntrApresentacaoUsuario->executar(&mat);
                        break;
                    case 2:
                        cntrApresentacaoProjeto->executar(&mat);
                        break;
                    case 3:
                        apresentar2 = false;
                        break;
                    }
                }
                else {
                    system("CLS");
                    cout << texto9 << endl;
                    cin.ignore();
                    cin.ignore();
                    apresentar2 = false;
                }
            }
            break;
        case 2:
            if(cntrApresentacaoUsuario->cadastrar()){
                system("CLS");
                cout << "Cadastrado com sucesso. Aperte enter para voltar." << endl;
                cin.ignore();
            }
            else{
                system("CLS");
                cout << "Erro no cadastro. Aperte enter para voltar." << endl;
            }
            cin.ignore();
            break;
        case 3:
            apresentar = false;
            break;
        default:
            cout << texto10 << endl;
            cin.ignore();
            cin.ignore();
            break;
        }
    }
}

// ---------------------------------------------------------

bool CntrApresentacaoAutenticacao::autenticar(Matricula *mat){
    char texto1[] = "Digite a matricula: ";
    char texto2[] = "Digite a senha: ";
    char texto3[] = "Dado em formato incorreto. Digite algo.";

    char campo1[80];
    char campo2[80];

    Senha senha;

    while (true){
        system("CLS");

        cout << texto1 << " ";
        cin >> campo1;
        cout << texto2 << " ";
        cin >> campo2;

        try{
            mat->setValor(string(campo1));
            senha.setValor(string(campo2));
            break;
        }
        catch(invalid_argument &exp){
            system("CLS");
            cout << texto3 << endl;
            getchar();
            break;
        }
    }
    return (cntr->autenticar(mat, &senha));
}

// ---------------------------------------------------------

bool CntrApresentacaoUsuario::cadastrar(){
    string texto1 = "Preencha os seguintes campos: ";
    string texto2 = "Primeiro nome: ";
    string texto3 = "Primeiro sobrenome: ";
    string texto4 = "Segundo sobrenome: ";
    string texto5 = "Matricula: ";
    string texto6 = "Senha: ";
    string texto7 = "Dados em formato incorreto. Digite algo.";

    string dado1, dado2, dado3, dado4, dado5;

    Usuario usuario;
    Nome nome;
    Matricula mat;
    Senha senha;

    system("CLS");

    cout << texto1 << endl;
    cout << texto2 << endl;
    cin >> dado1;
    cout << texto3 << endl;
    cin >> dado2;
    cout << texto4 << endl;
    cin >> dado3;
    cout << texto5 << endl;
    cin >> dado4;
    cout << texto6 << endl;
    cin >> dado5;

    try{
        string temp = dado1 + " " + dado2 + " " + dado3;
        nome.setValor(temp);
    }
    catch(invalid_argument &exp){
        cout << "Nome invalido. Aperte enter para voltar" << endl;
        cin.ignore();
        cin.ignore();
        return false;
    }
    try{
        mat.setValor(dado4);
    }
    catch(invalid_argument &exp){
        cout << "Matricula invalida. Aperte enter para voltar." << endl;
        cin.ignore();
        cin.ignore();
        return false;
    }
    try{
        senha.setValor(dado5);
    }
    catch(invalid_argument &exp){
        cout << "Senha invalida. Aperte enter para voltar." << endl;
        cin.ignore();
        cin.ignore();
        return false;
    }

    usuario.setNome(nome);
    usuario.setMatricula(mat);
    usuario.setSenha(senha);

    return (cntr->cadastrar(&usuario));
}

void CntrApresentacaoUsuario::executar(Matricula *mat){
    char texto1[] = "Selecione um dos servicos : ";
    char texto2[] = "1 - Editar Dados do Usuario.";
    char texto3[] = "2 - Excluir Cadastro do Usuario.";
    char texto4[] = "3 - Retornar.";
    string texto6 = "Usuario descadastrado com sucesso.";
    string texto7 = "Falha em descadastrar o usuario.";

    int campo2;
    bool apresentar = true;
    CntrApresentacaoUsuario cntrApresentacaoUsuario;

    while (apresentar)
    {
        system("CLS");
        cout << texto1 << endl; // Imprime nome do campo.
        cout << texto2 << endl; // Imprime nome do campo.
        cout << texto3 << endl; // Imprime nome do campo.
        cout << texto4 << endl; // Imprime nome do campo.

        cin >> campo2;
        switch (campo2)
        {
        case 1:
            cntrApresentacaoUsuario.editar(mat);
            break;
        case 2:
            cntr->descadastrar(mat);
            system("CLS");
            cout << "Usuario descadastrado. Aperte enter para voltar." << endl;
            cin.ignore();
            cin.ignore();
            apresentar = false;
            break;
        case 3:
            apresentar = false;
            break;
        }
    }
}

bool CntrApresentacaoUsuario::editar(Matricula *mat) {
    string texto1 = "Preencha os seguintes campos: ";
    string texto2 = "Novo nome: ";
    string texto3 = "Nova senha: ";
    string texto4 = "Dados em formato incorreto. Digite algo.";

    string dado1, dado2;

    Usuario usuario;
    Nome nome;
    Senha senha;

    system("CLS");

    cout << texto1 << endl;
    cout << texto2;
    cin >> dado1;
    cout << texto3;
    cin >> dado2;

    try{
        nome.setValor(dado1);
        senha.setValor(dado2);
    }
    catch(invalid_argument &exp){
        cout << texto4 << endl;
        cin.ignore();
        cin.ignore();
        return false;
    }

    usuario.setNome(nome);
    usuario.setSenha(senha);

    return (cntr->alterar(&usuario));
}

// ---------------------------------------------------------

void CntrApresentacaoProjeto::executar(){

    char texto1[] = "Selecione um dos servicos: ";
    char texto2[] = "1 - Consultar Projetos.";
    char texto3[] = "2 - Retornar.";

    int campo;

    bool apresentar = true;

    while(apresentar){

        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;

        campo = getch() - 48;

        switch(campo){
        case 1:
            cout << cntrProjeto->listar() << endl;
            getchar();
            break;
        case 2:
            apresentar = false;
            break;
        }
    }
}

bool CntrApresentacaoProjeto::editarProjeto(){
        char texto1[] = "Preencha os seguintes campos: ";
        char texto2[] = "Codigo da hospedagem que você quer editar:";
        char texto3[] = "Nome: ";
        char texto4[] = "Descricao:";
        char texto5[] = "Dados em formato incorreto. Digite algo.";
        char texto6[] = "Sucesso no cadastramento. Digite algo.";
        char texto7[] = "Falha no cadastramento. Digite algo.";

        char campo1[80], campo2[80], campo3[80];

        Codigo codigo;
        Texto nome;
        Texto descricao;

        system("CLS");

        cout << texto1 << endl;
        cout << texto2 << endl;
        cin >> campo1;
        cout << texto3 << endl;
        cin >> campo2;
        cout << texto4 << endl;
        cin >> campo3;

        try {
            codigo.setValor(campo1);
            nome.setValor(campo2);
            descricao.setValor(campo3);
        }
        catch(invalid_argument &exp) {
            cout << texto5 << endl;
            getchar();
        }

        Projeto projeto;

        projeto.setNome(nome);
        projeto.setDescricao(descricao);

        if (cntrProjeto->editar(&projeto)){
            cout << texto6 << endl;
            getchar();
        }
        else {
            cout << texto7 << endl;
            getchar();
        }
}

bool CntrApresentacaoProjeto::editarTarefa(){
    char texto1[] = "Preencha os seguintes campos: ";
        char texto2[] = "Codigo da avaliacao que você quer editar: ";
        char texto3[] = "Nome: ";
        char texto4[] = "Data de inicio: ";
        char texto5[] = "Data de termino: ";
        char texto6[] = "Disciplina: ";
        char texto7[] = "Dados em formato incorreto. Digite algo.";
        char texto8[] = "Sucesso no cadastramento. Digite algo.";
        char texto9[] = "Falha no cadastramento. Digite algo.";

        char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];

        Codigo codigo;
        Texto nome;
        Data inicio;
        Data termino;
        Disciplina disc;

        system("CLS");

        cout << texto1 << endl;
        cout << texto2 << endl;
        cin >> campo1;
        cout << texto3 << endl;
        cin >> campo2;
        cout << texto4 << endl;
        cin >> campo3;
        cout << texto5 << endl;
        cin >> campo4;
        cout << texto6 << endl;
        cin >> campo5;

        try{
            codigo.setValor(campo1);
            nome.setValor(campo2);
            inicio.setValor(campo3);
            termino.setValor(campo4);
            disc.setValor(campo5);
        }
        catch(invalid_argument &exp) {
            cout << texto7 << endl;
            getchar();
        }

        Tarefa tarefa;

        tarefa.setCodigo(codigo);
        tarefa.setNome(nome);
        tarefa.setInicio(inicio);
        tarefa.setTermino(termino);
        tarefa.setDisciplina(disc);

        if (cntrTarefa->editar(&tarefa)){
            cout << texto8 << endl;
            getchar();
        }
        else {
            cout << texto9 << endl;
            getchar();
        }
}

void CntrApresentacaoProjeto::editar(){
    string texto1 = "Selecione um dos servicos : ";
    string texto2 = "1 - Editar Projeto";
    string texto3 = "2 - Editar Tarefa";
    string texto4 = "3 - Voltar.";
    string texto5 = "Projeto modificado com sucesso.";
    string texto6 = "Tarefa modificada com sucesso.";
    string texto7 = "Falha em modificar Projeto.";
    string texto8 = "Falha em modificar Tarefa.";

    string codigo;
    int campo;
    bool apresentar = true;

    while(apresentar){

        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        cin >> campo;
        switch(campo){
        case 1:
            if(editarProjeto())
                cout << texto5 << endl;
            else
                cout << texto7 << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 2:
            if(editarTarefa())
                cout << texto6 << endl;
            else
                cout << texto8 << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 3:
            cin.ignore();
            cin.ignore();
            break;
        case 4:
            apresentar = false;
            break;
        }
    }
}

bool CntrApresentacaoProjeto::incluirProjeto(){
    char texto1[] = "Preencha os seguintes campos: ";
    char texto2[] = "Codigo: ";
    char texto3[] = "Nome:";
    char texto4[] = "Descricao:";
    char texto5[] = "Dados em formato incorreto. Digite algo.";
    char texto6[] = "Sucesso no cadastramento. Digite algo.";
    char texto7[] = "Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80];

    Codigo codigo;
    Texto nome;
    Texto descricao;

    system("CLS");

    cout << texto1 << endl;
    cout << texto2 << endl;
    cin >> campo1;
    cout << texto3 << endl;
    cin >> campo2;
    cout << texto4 << endl;
    cin >> campo3;

    try {
        codigo.setValor(campo1);
        nome.setValor(campo2);
        descricao.setValor(campo3);
    }
    catch(invalid_argument &exp){
        cout << texto5 << endl;
        getchar();
    }

    Projeto projeto;

    projeto.setCodigo(codigo);
    projeto.setNome(nome);
    projeto.setDescricao(descricao);

    if(cntrProjeto->incluir(&projeto)){
        cout << texto6 << endl;
        getchar();
        return true;
    }
    else {
        cout << texto7 << endl;
        getchar();
    }
}

bool CntrApresentacaoProjeto::incluirTarefa(){
    char texto1[] = "Preencha os seguintes campos: ";
    char texto2[] = "Codigo: ";
    char texto3[] = "Nome: ";
    char texto4[] = "Data de inicio: ";
    char texto5[] = "Data de termino: ";
    char texto6[] = "Disciplina: ";
    char texto7[] = "Dados em formato incorreto. Digite algo.";
    char texto8[] = "Sucesso no cadastramento. Digite algo.";
    char texto9[] = "Falha no cadastramento. Digite algo.";

    char campo1[80], campo2[80], campo3[80], campo4[80], campo5[80];

    Codigo codigo;
    Texto nome;
    Data inicio;
    Data termino;
    Disciplina disc;

    system("CLS");

    cout << texto1 << endl;
    cout << texto2 << endl;
    cin >> campo1;
    cout << texto3 << endl;
    cin >> campo2;
    cout << texto4 << endl;
    cin >> campo3;
    cout << texto5 << endl;
    cin >> campo4;
    cout << texto6 << endl;
    cin >> campo5;

    try{
        codigo.setValor(campo1);
        nome.setValor(campo2);
        inicio.setValor(campo3);
        termino.setValor(campo4);
        disc.setValor(campo5);
    }
    catch(invalid_argument &exp){
        cout << texto7 << endl;
        getchar();
    }

    Tarefa tarefa;
    tarefa.setCodigo(codigo);
    tarefa.setNome(nome);
    tarefa.setInicio(inicio);
    tarefa.setTermino(termino);
    tarefa.setDisciplina(disc);

    if (cntrTarefa->incluir(&tarefa)){
        cout << texto8 << endl;
        getchar();
        return true;
    }
    else {
        cout << texto9 << endl;
        getchar();
    }
}

void CntrApresentacaoProjeto::incluir(){
    string texto1 = "Selecione um dos servicos : ";
    string texto2 = "1 - Cadastrar Projeto.";
    string texto3 = "2 - Cadastrar Tarefa.";
    string texto4 = "3 - Voltar.";
    string texto5 = "Projeto cadastrado com sucesso.";
    string texto6 = "Tarefa cadastrada com sucesso.";
    string texto7 = "Falha em cadastrar projeto.";
    string texto8 = "Falha em cadastrar tarefa.";

    int campo;
    bool apresentar = true;

    while(apresentar){
        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        cin >> campo;
        switch(campo){
        case 1:
            if(incluirProjeto())
                cout << texto5 << endl;
            else
                cout << texto7 << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 2:
            if(incluirTarefa())
                cout << texto6 << endl;
            else
                cout << texto8 << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 3:
            apresentar = false;
            break;
        }
    }
}

void CntrApresentacaoProjeto::excluir(){
    string texto1 = "Selecione um dos servicos : ";
    string texto2 = "1 - Descadastrar Projeto.";
    string texto3 = "2 - Descadastrar Tarefa.";
    string texto4 = "3 - Voltar.";
    string texto5 = "Projeto descadastrada com sucesso.";
    string texto6 = "Tarefa descadastrada com sucesso.";
    string texto7 = "Falha em descadastrar projeto.";
    string texto8 = "Falha em descadastrar tarefa.";

    int campo;
    bool apresentar = true;

    while (apresentar){

        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        cin >> campo;

        switch(campo){
        case 1:
            if(excluirProjeto())
                cout << texto5 << endl;
            else
                cout << texto7 << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 2:
            if(excluirTarefa())
                cout << texto6 << endl;
            else
                cout << texto8 << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 3:
            apresentar = false;
            break;
        }
    }
}

bool CntrApresentacaoProjeto::excluirProjeto(){
    char texto1[] = "Descadastrar projeto: ";
    char texto2[] = "Codigo do projeto: ";
    char texto3[] = "Dado em formato incorreto. Digite algo.";
    char texto4[] = "Sucesso no descadastramento. Digite algo.";
    char texto5[] = "Falha no descadastramento. Digite algo.";

    char campo[80];

    Codigo codigo;

    system("CLS");
    cout << texto1 << endl;
    cout << texto2 << endl;
    cin >> campo;

    try{
        codigo.setValor(campo);
    }
    catch(invalid_argument &exp){
        cout << texto3 << endl;
        getchar();
    }

    if (cntrProjeto->excluir(&codigo)){
        cout << texto4 << endl;
        getchar();
    }
    else
        cout << texto5 << endl;
        getchar();
}

bool CntrApresentacaoProjeto::excluirTarefa(){
    char texto1[] = "Descadastrar tarefa: ";
    char texto2[] = "Codigo da tarefa: ";
    char texto3[] = "Dado em formato incorreto. Digite algo.";
    char texto4[] = "Sucesso no descadastramento. Digite algo.";
    char texto5[] = "Falha no descadastramento. Digite algo.";

    char campo[80];

    Codigo codigo;

    system("CLS");
    cout << texto1 << endl;
    cout << texto2 << endl;
    cin >> campo;

    try {
        codigo.setValor(campo);
    }
    catch(invalid_argument &exp){
        cout << texto3 << endl;
        getchar();
    }

    if (cntrTarefa->excluir(&codigo)){
        cout << texto4 << endl;
        getchar();
    }
    else {
        cout << texto5 << endl;
        getchar();
    }
}

void CntrApresentacaoProjeto::visualizar(){
    string texto1 = "Selecione um dos servicos : ";
    string texto2 = "1 - Visualizar Projetos";
    string texto3 = "2 - Visualizar Tarefas";
    string texto4 = "3 - Voltar";
    string texto6 = "Digite o código dos Projetos que deseja visualizar: ";
    string texto7 = "Digite o código das Tarefas que deseja visualizar: ";

    string cod;
    Codigo codigo;
    int campo;
    bool apresentar = true;

    while(apresentar){

        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        cin >> campo;
        switch(campo){
        case 1:
            cout << texto6 << endl;
            cin >> cod;
            codigo.setValor(cod);
            cout << cntrProjeto->visualizar(&codigo) << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 2:
            cout << texto7 << endl;
            cin >> cod;
            codigo.setValor(cod);
            cout << cntrTarefa->visualizar(&codigo) << endl;
            cin.ignore();
            cin.ignore();
            break;
        case 3:
            apresentar = false;
            break;
        }
    }
}

void CntrApresentacaoProjeto::executar(Matricula *mat){
    string texto1 = "Selecione um dos servicos : ";
    string texto2 = "1 - Cadastrar projeto ou tarefa.";
    string texto3 = "2 - Excluir projeto ou tarefa.";
    string texto4 = "3 - Editar projeto ou tarefa.";
    string texto5 = "4 - Visualizar projeto ou tarefa";
    string texto6 = "5 - Listar projeto ou tarefa";
    string texto7 = "6 - Voltar.";

    int campo;
    bool apresentar = true;

    while(apresentar){

        system("CLS");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;
        cout << texto5 << endl;
        cout << texto6 << endl;

        cin >> campo;

        switch(campo){
        case 1:
            incluir();
            cin.ignore();
            break;
        case 2:
            excluir();
            cin.ignore();
            break;
        case 3:
            editar();
            cin.ignore();
            break;
        case 4:
            visualizar();
            cin.ignore();
            break;
        case 5:
            executar();
            cin.ignore();
            break;
        case 6:
            apresentar = false;
            break;
        }
    }
}
