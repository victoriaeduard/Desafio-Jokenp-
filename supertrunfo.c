#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

int jogador, pc, atributo;

// população
int pop_brasil = 214;
int pop_eua = 331;
int pop_japao = 125;

// PIB
float pib_brasil = 11.8;
float pib_eua = 28.6;
float pib_japao = 2.3;

// área 
float area_brasil = 8516.8;
float area_eua = 9834.4;
float area_japao = 378.5;

//pontos turisticos
int turis_brasil = 34;
int turis_eua = 41;
int turis_japao = 25;

//densidade
float densi_brasil = 28.3;
float densi_eua = 38.2;
float densi_japao = 338.6;

printf("Bem-vindo ao Super Trunfo! Anter de começar, confira o funcionamento do jogo:");
printf("O jogo consiste em escolher o atributo de uma carta para compará-la a outra. Ganha a carta com valor mais alto, com exceção do atributo Densidade.");
printf("Primeiro escolha uma carta:\n");
printf("1. Brasil\n");
printf("2. Estados Unidos\n");
printf("3. Japão\n");
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
printf("Jogador: Brasil - ");
    break;
    case 2:
printf("Jogador: Estados Unidos - ");
    break;
    case 3:
printf("Jogador: Japão - ");
    break;
default:
printf("Escolha invalida.");
}

switch (pc){
case 1:
printf("Pc: Brasil - \n");
    break;
    case 2:
printf("Pc: Estados Unidos - \n");
    break;
    case 3:
printf("Pc: Japão - \n");
    break;
default:
printf("Escolha invalida.");
}

printf("Atributo: %d", jogador);



return 0;
}
