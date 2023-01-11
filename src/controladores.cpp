#include "controladores.h"

#include <conio.h>
#include <iostream>
#include <string.h>

#define CLR_SCR system("cls");

using namespace std;

void Controlador::executar()
{
    // Mensagens a serem apresentadas na tela inicial.

    char texto1[]="Selecione um dos servicos : ";

    // A fazer depois

    bool apresentar = true;                                                                     // Controle de laço.
    int campo;

    while(apresentar){

        // Apresenta tela inicial.

        CLR_SCR;                                                                                // Limpa janela.

        cout << texto1 << endl;                                                                 // Imprime nome do campo.

        campo = getch() - 48;
    }
}
