#include <stdio.h>

int main() {

    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

//inicializa tabuleiro com 0
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

//posição dos navios
    tabuleiro[4][4] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[4][6] = 3;

    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;
    tabuleiro[8][7] = 3;

//matrizes com as habilidades
    int cruz[5][5];
    int cone[5][5];
    int octaedro[5][5];

//cruz
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 2 || j == 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

//cone
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i <= 2 && j >= (2 - i) && j <= (2 + i))
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

//octaedro
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
        }
    }

//pontos de origem
    int origemLinha, origemColuna;

//origem da cruz
    origemLinha = 2;
    origemColuna = 2;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int linhaTab = origemLinha - 2 + i;
            int colunaTab = origemColuna - 2 + j;

            if(linhaTab >= 0 && linhaTab < 10 &&
               colunaTab >= 0 && colunaTab < 10){

                if(cruz[i][j] == 1)
                    tabuleiro[linhaTab][colunaTab] = 5;
            }
        }
    }

//ponto de origem do cone
    origemLinha = 4;
    origemColuna = 7;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int linhaTab = origemLinha - 2 + i;
            int colunaTab = origemColuna - 2 + j;

            if(linhaTab >= 0 && linhaTab < 10 &&
               colunaTab >= 0 && colunaTab < 10){

                if(cone[i][j] == 1)
                    tabuleiro[linhaTab][colunaTab] = 5;
            }
        }
    }

//ponto de origem do octaedro
    origemLinha = 7;
    origemColuna = 4;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){

            int linhaTab = origemLinha - 2 + i;
            int colunaTab = origemColuna - 2 + j;

            if(linhaTab >= 0 && linhaTab < 10 &&
               colunaTab >= 0 && colunaTab < 10){

                if(octaedro[i][j] == 1)
                    tabuleiro[linhaTab][colunaTab] = 5;
            }
        }
    }

//tabuleiro
    printf("\nTabuleiro:\n\n");

    printf("   ");
    for(int i = 0; i < 10; i++){
        printf("%c ", letras[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%2d ", i + 1);

        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

