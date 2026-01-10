#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int jogador, pc, atributo;

int populacao [3] = {214, 331, 125};
float pib [3] = {11.8, 28.6, 2.3};
float area [3] = {8516.8, 9834.4, 378.5};
int turistas [3] = {34, 41, 25};
float densidade [3] = {28.3, 38.2, 338.6};

printf("Bem-vindo ao Super Trunfo! Anter de começar, confira o funcionamento do jogo:");
printf("O jogo consiste em escolher o atributo de uma carta para compará-la a outra. Ganha a carta com valor mais alto, com exceção do atributo Densidade.");
printf("Primeiro escolha uma carta:\n");
printf("1. Carta 01: Brasil\n");
printf("2. Carta 02: Estados Unidos\n");
printf("3. Carta 03: Japão\n");
scanf("%d", &jogador);
printf("Agora escolha um Atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo);

srand (time(0));
pc = rand() % 3 + 1;

switch (jogador){
case 1:
printf("Jogador: Carta 01 Brasil - ");
    break;
    case 2:
printf("Jogador: Carta 02 Estados Unidos - ");
    break;
    case 3:
printf("Jogador Carta 03 Japão - ");
    break;
default:
printf("Escolha invalida.");
}

switch (pc){
case 1:
printf("Pc: Carta 01 Brasil - \n");
    break;
    case 2:
printf("Pc: Carta 02 Estados Unidos - \n");
    break;
    case 3:
printf("Pc: Carta 03 Japão - \n");
    break;
    default:
printf("Escolha invalida.");
}

switch (atributo){
    case 1:
printf("Atributo: População\n");
    break;
    case 2:
printf("Atributo: Área\n");
    break;
    case 3:
printf("Atributo: PIB\n");
    break;
    case 4:
printf("Atributo: Pontos Turísticos\n");
    break;
    case 5:
printf("Atributo: Densidade Demográfica\n");
    break;
default:
printf("Escolha invalida.");
}


return 0;
}
