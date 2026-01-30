#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

//variaveis
int jogador, pc, atributo, atributo2;
int resultado1, resultado2;
//variaveis de acordo com a escolha, valores 0,1 e 2
float populacao [3] = {220.05, 341.96, 123.20};
float pib [3] = {11.8, 28.6, 2.3};
float area [3] = {8516.8, 9834.4, 378.5};
int turistas [3] = {34, 41, 25};
float densidade [3] = {28.3, 38.2, 338.6};
float trunfo [3];

trunfo[0] = populacao[0] + area[0] + pib[0] + turistas[0] + densidade[0];
trunfo[1] = populacao[1] + area[1] + pib[1] + turistas[1] + densidade[1];
trunfo[2] = populacao[2] + area[2] + pib[2] + turistas[2] + densidade[2];

//inicio do jogo e coleta de informações
printf("Bem-vindo ao Super Trunfo! Anter de começar, confira o funcionamento do jogo:");
printf("O jogo consiste em escolher dois atributos de uma carta para compará-la a outra. Ganha a carta com valor mais alto, com exceção do atributo Densidade.");
printf("Primeiro escolha uma carta:\n");
printf("1. Carta 01B\n");
printf("2. Carta 02E\n");
printf("3. Carta 03J\n");
scanf("%d", &jogador);
printf("\n\n");

//gerador de numero aleatório
srand (time(0));
pc = rand() % 3 + 1;

//variaveis para "colar" as informações de cada carta
int idjogador = jogador - 1;
int idpc = pc - 1;
printf("\n\n");
//apresentação da carta do jogador
if (jogador == 1){
    printf("--Você escolheu a Carta 01B--\nBrasil\nPopulação: %f\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\nDensidade Demográfica: %f\nSuper Trunfo: %f\n", populacao [idjogador], area [idjogador], pib [idjogador], turistas [idjogador], densidade [idjogador], trunfo [idjogador]);
}
if (jogador == 2){
    printf("--Você escolheu a Carta 02E--\nEstados Unidos\nPopulação: %f\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\nDensidade Demográfica: %f\nSuper Trunfo: %f\n", populacao [idjogador], area [idjogador], pib [idjogador], turistas [idjogador], densidade [idjogador], trunfo [idjogador]);
}
if (jogador == 3){
    printf("--Você escolheu a Carta 03J--\nJapão\nPopulação: %f\nÁrea: %f\nPIB: %f\nPontos Turísticos: %d\nDensidade Demográfica: %f\nSuper Trunfo: %f\n", populacao [idjogador], area [idjogador], pib [idjogador], turistas [idjogador], densidade [idjogador], trunfo [idjogador]);
}
printf("\n\n");

printf("Agora escolha o primeiro Atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo);

switch (atributo == 1){
    case 1:
printf("Agora escolha o segundo Atributo para comparar:\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo2);
break;
}
switch (atributo == 2){
    case 1:
printf("Agora escolha o segundo Atributo para comparar:\n");
printf("1. População\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo2);
break;
}
switch (atributo == 3){
    case 1:
printf("Agora escolha o segundo Atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo2);
break;
}
switch (atributo == 4){
    case 1:
printf("Agora escolha o segundo Atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("5. Densidade Demográfica\n");
scanf("%d", &atributo2);
break;
}
switch (atributo == 5){
    case 1:
printf("Agora escolha o segundo Atributo para comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
scanf("%d", &atributo2);
break;
}
printf("\n\n");

//apresentação da escolha da carta do jogador e computador
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

printf("\n\n");
//exibição do atributo escolhido
printf("--Hora da batalha!--\n");
switch (atributo){
    case 1:
printf("Atributo: População\nJogador: %f - Computador: %f\n", populacao [idjogador], populacao [idpc]);
    break;
    case 2:
printf("Atributo: Área\nJogador: %f - Computador: %f", area [idjogador], area [idpc]);
    break;
    case 3:
printf("Atributo: PIB\nJogador: %f - Computador: %f", pib [idjogador], pib [idpc]);
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

printf("\n");
switch (atributo2){
    case 1:
printf("Segundo Atributo: População\nJogador: %f - Computador: %f\n", populacao [idjogador], populacao [idpc]);
    break;
    case 2:
printf("Segundo Atributo: Área\nJogador: %f - Computador: %f", area [idjogador], area [idpc]);
    break;
    case 3:
printf("Segundo Atributo: PIB\nJogador: %f - Computador: %f", pib [idjogador], pib [idpc]);
    break;
    case 4:
printf("Segundo Atributo: Pontos Turísticos\nJogador: %d - Computador: %d", turistas [idjogador], turistas [idpc]);
    break;
    case 5:
printf("Segundo Atributo: Densidade Demográfica\nJogador: %f - Computador: %f\n", densidade [idjogador], densidade [idpc]);
    break;
default:
printf("Escolha invalida.");
}

printf("\n\n");
//resultado definitivo
printf("--Resultado final--\n");

if (idjogador == idpc){
    printf("Cartas iguais. Empate!");
}
return 0;

if (atributo == 1) {
populacao [idjogador] > populacao [idpc] ? printf("###Primeiro atributo: Você venceu!###\n") : printf("###Você perdeu!###\n"); }

if (atributo == 2){
area [idjogador] > area [idpc] ? printf("###Primeiro atributo: Você venceu!###\n") : printf("###Primeiro atributo: Você perdeu!###\n"); }

if (atributo == 3){
pib [idjogador] > pib [idpc] ? printf("###Primeiro atributo: Você venceu!###\n") : printf("###Primeiro atributo: Você perdeu!###\n"); }

if (atributo == 4){
turistas [idjogador] > turistas [idpc] ? printf("###Primeiro atributo: Você venceu!###\n") : printf("###Primeiro atributo: Você perdeu!###\n"); }

if (atributo == 5){
densidade [idjogador] < densidade [idpc] ? printf("###Primeiro atributo: Você venceu!###\n") : printf("###Primeiro atributo: Você perdeu!###\n"); }

if (atributo == atributo2){ printf ("Atributo repetido. Jogo encerrado.");
}
return 0;

if (atributo2 == 1){
populacao [idjogador] > populacao [idpc] ? printf("###Você venceu!###\n") : printf("###Segundo Atributo: Você perdeu!###");
}

if (atributo2 == 2){
area [idjogador] > area [idpc] ? printf("###Segundo atributo: Você venceu!###\n") : printf("###Segundo atributo: Você perdeu!###\n"); }

if (atributo2 == 3){
pib [idjogador] > pib [idpc] ? printf("###Segundo atributo: Você venceu!###\n") : printf("###Segundo atributo: Você perdeu!###\n"); }

if (atributo2 == 4){
turistas [idjogador] > turistas [idpc] ? printf("###Segundo atributo: Você venceu!###\n") : printf("###Segundo atributo: Você perdeu!###\n"); }

if (atributo2 == 5){
densidade [idjogador] < densidade [idpc] ? printf("###Segundo atributo: Você venceu!###\n") : printf("###Segundo atributo: Você perdeu!###\n"); }

return 0;
}