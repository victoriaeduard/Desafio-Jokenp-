#include <stdio.h>

int main (){

    //introdução das variaveis
    int peca;
    int movimento;
    int i = 0;


//introdução para escolher qual peça de xadrez mover
printf("Modelo teste para reproduzir os movimentos de peças de xadrez. Escolha uma peça:\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
scanf("%d", peca);

switch (peca)
{
case 1:
    printf("Você escolheu a Torre, agora escolha o movimento:\n");
    printf("1. Direita\n");
    printf("2. Esquerda\n");
    scanf("%d", movimento);
    break;
case 2:
    printf("Você escolheu o Bispo, agora escolha o movimento:\n");
    printf("1. Cima, direita\n");
    printf("2. Cima, esquerda\n");
    scanf("%d", movimento);
    break;
case 3:
    printf("Você escolheu a Rainha, agora escolha o movimento:\n");
    printf("1. Diagonal, direita\n");
    printf("2. Diagonal, esquerda\n");
    printf("3.Cima, direita\n");
    printf("4.. Cima, esquerda\n");
    printf("5. Direita apenas\n");
    printf("6. Esquerda apenas\n")
    scanf("%d", movimento);
    break;
}


return 0;
}