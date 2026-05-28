#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//função para guardar as informações dos territorios
typedef struct{
    char nome[30];
    char cor[10];
    int tropa;
} territorio;

void atacar (territorio* atacante, territorio* defensor){
   //rolagem de dados
   int dado_atacante = rand () % 6 + 1;
   int dado_defensor = rand () % 6 +1;
   printf("O atacante rolou os dados e tirou: %d\n", dado_atacante);
   printf("O defensor rolou os dados e tirou: %d\n", dado_defensor);

   //determina o vencedor
   if (dado_atacante >= dado_defensor){
    printf("O Exército ATACANTE venceu a batalha!\n");
    defensor->tropa--;
    atacante->tropa++;

    } else {
        printf("O Exército DEFENSOR venceu a batalha!\n");
        defensor->tropa++;
        atacante->tropa--;
    }
      if (defensor->tropa <= 0){
        printf("O Exército %s foi CONQUISTADO pelo Exército %s\n", defensor->cor, atacante->cor);
    }}

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
    j++;}

i = 0;
//imprimindo os territorios
while (i < n){
    printf("------------------------------------\n");
    printf("Território %d: %s\n", i + 1, mundo[i].nome);
    printf("Cor do Exército: %s\n", mundo[i].cor);
    printf("Número de Tropas: %d\n", mundo[i].tropa);
    i++;}

int escolha_atacante, escolha_defensor;
int opcao;

//começando o jogo
printf("===============\n");
printf("HORA DO JOGO\n");

//loop para o jogo
do{
    printf("Escolha o território atacante:");
    scanf("%d", &escolha_atacante);
    printf("Escolha o território defensor:");
    scanf("%d", &escolha_defensor);
    atacar(&mundo[escolha_atacante - 1], &mundo[escolha_defensor - 1]);
    
    i = 0;
    //exibição do mundo
    printf("====================\n");
    printf("ATUALIZAÇÃO DO MUNDO\n");
    while (i < n){
    printf("====================\n");
    printf("Território %d: %s\n", i + 1, mundo[i].nome);
    printf("Cor do Exército: %s\n", mundo[i].cor);
    printf("Número de Tropas: %d\n", mundo[i].tropa);
    i++;}
    printf("---------------------\n");

printf("Deseja continuar o jogo?.\n1. SIM.\n2. NÂO.");
scanf("%d", &opcao);
printf("------------------------");
    } while (opcao == 1);
    printf("Programa Fechado, Espaço Liberado.");

return 0;
}