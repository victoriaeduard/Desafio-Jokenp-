#include <stdio.h>

int main() {

//letras A até J
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

//tabuleiro 10x10
    int tabuleiro[10][10];
    int linha, coluna;
    int navios = 6;
    int cruz[5][5];
    int cone [5][5];
    int octaedro [5][5];

//inicializa tudo com 0
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

//preenche a cruz
    for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
        if(i == 2 || j == 2) {
            cruz[i][j] = 1;
        } else {
            cruz[i][j] = 0;
        }
    }
}

//preenche o cone


for (int i = 0; i < 5; i++){
    for (int j = 0; j <5; j++){
        if (cruz [i][j] == 1){
            tabuleiro [i][j] = 5;
        }
    }
}

//navio horizontal
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[2][5] = 3;

//navio vertical
    tabuleiro[5][7] = 3;
    tabuleiro[6][7] = 3;
    tabuleiro[7][7] = 3;

printf("Bem-vindo ao Batalha Naval!\n Neste modelo usamos um tabuleiro 10x10, portanto é necessário dois números para diferenciar linha a coluna.\n");
do {
printf("Escolha uma linha entre 1 e 10:\n");
scanf("%d", &linha);
linha--;
printf("Agora escolha uma coluna entre 1 e 10:\n");
scanf("%d", &coluna);
coluna--;

    if(tabuleiro[linha][coluna] == 3) {
    printf("Você acertou\n");
    navios--;
    tabuleiro[linha][coluna] = 2; //marca como navio atingido
}
else if(tabuleiro[linha][coluna] == 0) {
    printf("Você errou\n");
    tabuleiro[linha][coluna] = 1; //marca como água atingida
}
else {
    printf("Você já atacou essa posição\n");
}
printf("Você escolheu a linha %d e a coluna %d.\n", linha, coluna);

    printf("\n\n");

//imprime letras
    printf("  ");
    for(int i = 0; i < 10; i++) {
        printf("%c ", letras[i]);
    }
    printf("\n");

//imprime matriz
    for(int i = 0; i < 10; i++) {
        printf("%d ", i + 1); //número da linha

        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }} while (navios > 0);
    printf("Você venceu!\n");

    return 0;
}
