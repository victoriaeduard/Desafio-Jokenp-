#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

//variaveis
int jogador, pc, atributo;
//variaveis de acordo com a escolha, valores 0,1 e 2
int populacao [3] = {220.05, 341.96, 123.20};
float pib [3] = {11.8, 28.6, 2.3};
float area [3] = {8516.8, 9834.4, 378.5};
int turistas [3] = {34, 41, 25};
float densidade [3] = {28.3, 38.2, 338.6};
float trunfo [3] = {8.804, 10.273, 869.4};

//inicio do jogo e coleta de informações
printf("Bem-vindo ao Super Trunfo! Anter de começar, confira o funcionamento do jogo:");
printf("O jogo consiste em escolher o atributo de uma carta para compará-la a outra. Ganha a carta com valor mais alto, com exceção do atributo Densidade.");
printf("Primeiro escolha uma carta:\n");
printf("1. Carta 01B\n");
printf("2. Carta 02E\n");
printf("3. Carta 03J\n");
scanf("%d", &jogador);
printf("Agora escolha um Atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo);
printf("\n\n");

//gerador de numero aleatório
srand (time(0));
pc = rand() % 3 + 1;

//apresentação da escola da carta do jogador e computador
switch (jogador){
case 1:
printf("Jogador: Carta 01B ");
    break;
    case 2:
printf("Jogador: Carta 02E ");
    break;
    case 3:
printf("Jogador Carta 03J ");
    break;
default:
printf("Escolha invalida.");
}

switch (pc){
case 1:
printf("Computador: Carta 01B \n");
    break;
    case 2:
printf("Computador: Carta 02E \n");
    break;
    case 3:
printf("Computador: Carta 03J \n");
    break;
    default:
printf("Escolha invalida.");
}

//variaveis para "colar" as informações de cada carta
int idjogador = jogador - 1;
int idpc = pc - 1;

//apresentação da carta do jogador
if (jogador == 1){
    printf("--Você escolheu a Carta 01B--\nBrasil\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\nDensidade Demográfica: %f\nSuper Trunfo: %f\n", populacao [idjogador], area [idjogador], pib [idjogador], turistas [idjogador], densidade [idjogador], trunfo [idjogador]);
}
if (jogador == 2){
    printf("--Você escolheu a Carta 02E--\nEstados Unidos\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\nDensidade Demográfica: %f\nSuper Trunfo: %f\n", populacao [idjogador], area [idjogador], pib [idjogador], turistas [idjogador], densidade [idjogador], trunfo [idjogador]);
}
if (jogador == 3){
    printf("--Você escolheu a Carta 03J--\nJapão\nPopulação: %d\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\nDensidade Demográfica: %f\nSuper Trunfo: %f\n", populacao [idjogador], area [idjogador], pib [idjogador], turistas [idjogador], densidade [idjogador], trunfo [idjogador]);
}

printf("\n\n");
//exibição do atributo escolhido
printf("--Hora da batalha!--\n");
switch (atributo){
    case 1:
printf("Atributo: População\nJogador: %d - Computador: %d\n", populacao [idjogador], populacao [idpc]);
    break;
    case 2:
printf("Atributo: Área\nJogador: %f - Computador: %f", area [idjogador], area [idpc]);
    break;
    case 3:
printf("Atributo: PIB\nJogador: %f - Computador: %f", pib [idjogador], area [idpc]);
    break;
    case 4:
printf("Atributo: Pontos Turísticos\nJogador: %d - Computador: %d", turistas [idjogador], turistas [idpc]);
    break;
    case 5:
printf("Atributo: Densidade Demográfica\nJogador: %f - Computador: %f\n", densidade [idjogador], densidade [idpc]);
    break;
default:
printf("Escolha invalida.");
}

printf("\n\n");
//resultado definitivo
printf("--Resultado final--\n");
if (atributo == 1){
    if (populacao [idjogador] > populacao [idpc]){
        printf("###Você venceu!###\n");
    } else if (populacao [jogador - 1] < (populacao [pc - 1])){
        printf("###Você perdeu!###\n");
    } else printf ("###Jogo empatado!###");
}

if (atributo == 2){
    if (area [idjogador] > area [idpc]){
        printf("###Você venceu!###\n");
    } else if (area [jogador - 1] < (area [pc - 1])){
        printf("###Você perdeu!###\n");
    } else printf ("###Jogo empatado!###");
}

if (atributo == 3){
    if (pib [idjogador] > pib [idpc]){
        printf("###Você venceu!###\n");
    } else if (pib [jogador - 1] < (pib [pc - 1])){
        printf("###Você perdeu!###\n");
    } else printf ("###Jogo empatado!###");
}

if (atributo == 4){
    if (turistas [idjogador] > turistas [idpc]){
        printf("###Você venceu!###\n");
    } else if (turistas [jogador - 1] < (turistas [pc - 1])){
        printf("###Você perdeu!###\n");
    } else printf ("###Jogo empatado!###");
}

if (atributo == 5){
    if (densidade [idjogador] < densidade [idpc]){
        printf("###Você venceu!###\n");
    } else if (densidade [jogador - 1] > (densidade [pc - 1])){
        printf("###Você perdeu!###\n");
    } else printf ("###Jogo empatado!###");
}

return 0;
}
