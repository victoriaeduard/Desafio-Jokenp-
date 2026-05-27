#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void atacar (territorio* atacante, territorio* defensor){
   //rolagem de dados
   int dado_atacante = rand () % 6 + 1;
   int dado_defensor = rand () % 6 +1;
   printf("O atacante rolou os dados e tirou: %d", dado_atacante);
   printf("O defensor rolou os dados e tirou: %d", dado_defensor);

   //determina o vencedor
   if (dado_defensor >= dado_atacante){
    printf("O ATACANTE venceu a batalha!\n");
    defensor->tropa = atacante->tropa - 1;

    } else {
        printf("O DEFENSOR venceu a batalha!\n");
        atacante->tropa--;
}}

//função para guardar as informações dos territorios
typedef struct{
    char nome[30];
    char cor[10];
    int tropa;
} territorio;

int main (){

//define número de territórios e posições
int i = 0;
int j = 1;
int n;

srand(time(NULL));
territorio *mundo = NULL;

//introdução
printf("================================\n");
printf("CONSTRUINDO O MUNDO\n");
printf("================================\n");
printf("Digite o número desejado de territórios:");
scanf("%d", &n);

//define quantidade de territorios e aloca a quantidade
mundo = calloc(n, sizeof(territorio));

//loop para criar os territorios
while (i < n){
    printf("Digite o nome do território %d: ", j);
    scanf(" %s", mundo[i].nome);

    printf("Digite a cor do território %d: ", j);
    scanf(" %s", mundo[i].cor);

    printf("Digite o número de tropas do território %d: ", j);
    scanf(" %d", &mundo[i].tropa);
    i++;
    j++;
}

i = 0;
//imprimindo os territorios
while (i < n){
    printf("------------------------------------\n");
    printf("Território %d: %s\n", i + 1, mundo[i].nome);
    printf("Cor do Exercíto: %s\n", mundo[i].cor);
    printf("Número de Tropas: %d\n", mundo[i].tropa);
    i++;}

int escolha_atacante, escolha_defensor, vencedor;

//começando o jogo
printf("===============\n");
printf("HORA DO JOGO\n");

do {
printf("Escolha o território atacante:");
scanf("%d", &escolha_atacante);
printf("Escolha o território defensor:");
scanf("%d", &escolha_defensor);
atacar(&mundo[escolha_atacante], &mundo[escolha_defensor]);

//exibição do mundo
printf("---------------------\n");
printf("ATUALIZAÇÃO DO MUNDO");
printf("---------------------\n");

int opcao;

printf("Selecione uma opção.\n1. Continuar Jogo.\n2. Sair.");
scanf("%d", &opcao);

    printf("Programa Fechado, Espaço Liberado.");


return 0;
}