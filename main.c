#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {
    int opcao = 0;
    int menu;
    int mapa[11][11];
    char tiro_letra;
    int tiro_numero;
    int torpedos = 20;
    int x,y;
    int acertos = 0;

    do {
        int deu_certo =
        printf("1 - Novo Jogo\n");
        printf("2 - Continuar\n");
        printf("3 - Pontuação\n");
        printf("4 - Sair\n");
        printf("Escolha uma opção -->");

        deu_certo = scanf("%d", &opcao);
        if (!deu_certo) opcao = 0;
            printf("Escolha uma das opções acima\n");
        continue;
    }
        while (getchar() != '\n');
    
    switch(opcao) {
        case '1': printf("Novo Jogo"); break;
        case '2': printf("Continuar"); break;
        case '3': printf("Pontuação"); break;
        case '4': printf("Sair"); break;
        default: printf("Opção inválida, escolha uma das opções acima");
        getchar();
    }
    
    mapa [0][0] = ' ';
    mapa [0][1] = 'A';
    mapa [0][2] = 'B';
    mapa [0][3] = 'C';
    mapa [0][4] = 'D';
    mapa [0][5] = 'E';
    mapa [0][6] = 'F';
    mapa [0][7] = 'G';
    mapa [0][8] = 'H';
    mapa [0][9] = 'I';
    mapa [0][10] = 'J';

    mapa [1][0] = 1;
    mapa [2][0] = 2;
    mapa [3][0] = 3;
    mapa [4][0] = 4;
    mapa [5][0] = 5;
    mapa [6][0] = 6;
    mapa [7][0] = 7;
    mapa [8][0] = 8;
    mapa [9][0] = 9;
    mapa [10][0] = 10;

    for (x = 0; x < 9; x++)
    {
        for (y = 0; y < 9; y++)
        {
            printf ("%d\t", mapa [x][y]);
        }
        putchar ('\n');
    }
  
    while (x < 20)
    {
        int deu_certo = scanf ("%c %d", &tiro_letra, &tiro_numero);
        if ((tiro_letra == 'A' && tiro_numero == 7) || (tiro_letra == 'B' && tiro_numero == 2)||
        (tiro_letra == 'B' && tiro_numero == 7) || (tiro_letra == 'C' && tiro_numero == 2)||
        (tiro_letra == 'C' && tiro_numero == 7) || (tiro_letra == 'E' && tiro_numero == 2)||
        (tiro_letra == 'E' && tiro_numero == 5) || (tiro_letra == 'F' && tiro_numero == 2)||
        (tiro_letra == 'F' && tiro_numero == 5) || (tiro_letra == 'G' && tiro_numero == 2)||
        (tiro_letra == 'G' && tiro_numero == 5) || (tiro_letra == 'H' && tiro_numero == 2))
        {
            printf ("BOMBA!!! %d torpedos restantes! %d acertos!\n", torpedos-1, acertos+1);
            acertos = acertos+1;
            // Colocar aqui onde o tiro foi dado //
            deu_certo = scanf ("%c %d", &tiro_letra, &tiro_numero);
        }
        else
        {
            printf ("ÁGUA!!! %d torpedos restantes!\n", torpedos-1);
            // Colocar aqui onde o tiro foi dado //
            deu_certo = scanf ("%c %d", &tiro_letra, &tiro_numero);
        }
        if (acertos == 12)
        {
            printf ("Todos os navios inimigos foram afundados! Parabéns, Capitão!\n");
            return (0);
        }
        else if (torpedos == 2)
        {
            printf ("Você ficou sem torpedos! Você foi derrotado!\n");
        return (0);
        }
        x++;
        torpedos--;
    }
    return (0);
    }