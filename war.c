#include <stdio.h>
#include <string.h>

int main (){

//função para guardar as informações dos territorios
typedef struct{
    char nome[30];
    char cor[10];
    int tropa;
} territorio;

//define tamanho
territorio mundo[5];
int i = 0;
int j = 1;

//introdução
printf("================================\n");
printf("Construção dos Cinco Territórios\n");
printf("================================\n");

//loop para criar os territorios
while (i < 5){
    printf("Digite o nome do território %d: ", j);
    scanf(" %s", mundo[i].nome);

    printf("Digite a cor do território %d: ", j);
    scanf(" %s", mundo[i].cor);

    printf("Digite o número de tropas do território %d: ", j);
    scanf(" %d", &mundo[i].tropa);
    i++;
    j++;
}

//zera o valor de i para iniciar outro loop
i = 0;
//imprimindo os territorios
while (i < 5){
    printf("------------------------------------\n");
    printf("Território %d: %s\n", i + 1, mundo[i].nome);
    printf("Cor: %s\n", mundo[i].cor);
    printf("Tropas: %d\n", mundo[i].tropa);
    i++;}

return 0;
}