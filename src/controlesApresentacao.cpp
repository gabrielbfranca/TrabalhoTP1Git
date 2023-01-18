#include "controlesApresentacao.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <conio.h>

using namespace std;

void CntrApresentacaoControle::executar(){
    char texto1[] = "Selecione um dos servicos : ";
    char texto2[] = "1 - Acessar sistema.";
    char texto3[] = "2 - Cadastrar usuario.";
    char texto4[] = "3 - Encerrar execucao do sistema.";

    int campo;
    bool apresentar = true;

    while (apresentar){
        system("clear");
        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        campo = getch() - 48;

        switch (campo){
        case 1:
            break;
        case 2:
            break;
        case 3:
            apresentar = false;
            break;
        }
    }
    return;
}
