#include "controladores.h"

#include <conio.h>
#include <iostream>
#include <string.h>
#include "dominios.h"

#define CLR_SCR system("cls");

using namespace std;

void CntrApresentacaoControle::executar()
{
    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos: ";
    char texto2[]="1 - Entrar no sistema.";
    char texto3[]="2 - Cadastrar usuario.";
    char texto4[]="3 - Encerrar sessao.";

    // A fazer depois

    bool apresentar = true;                                                                     // Controle de laço.
    int campo;

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;
        cout << texto2 << endl;
        cout << texto3 << endl;
        cout << texto4 << endl;

        campo = getch() - 48;

        switch(campo){
        case 1: // ainda sera implementada: tela de autenticacao
            break;
        case 2: // ainda sera implementada: tela de cadastro
            break;
        case 3: apresentar = false;
            break;
        }
    }
    return;
}
