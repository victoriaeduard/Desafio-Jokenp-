#include <stdio.h>

int main() {

// letras A até J
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

//tabuleiro 10x10
    int tabuleiro[10][10];

//inicializa do mar
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

//navio horizontal
    tabuleiro[3][3] = 3;
    tabuleiro[3][4] = 3;
    tabuleiro[3][5] = 3;

//navio vertical
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

    printf("Tabuleiro Batalha Naval:\n\n");

//imprime letras
    printf("  ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

//imprime matriz
    for(int i = 0; i < 10; i++) {
        printf("%d ", i);

        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
