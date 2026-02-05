#include <stdio.h>

int main (){

    //introdução das variaveis
    int i = 1, i2 = 1, j = 1;

printf("Simulação do movimento de peças de xadrez com a Torre:\n");
//execução do movimento da Torre com while
while (i <=5 ){
printf("A Torre se moveu %d casa(s) horizontalmente para direita\n", i);
i++;
}

printf("\n");
printf("Simulação do movimento de peças de xadrez com o Bispo:\n");
//execução do movimento do Bispo com do-while
do {
    if (i2 <= 5){
        printf("O Bispo se moveu %d casa(s) para cima, direita\n", i2);
        i2++;
    }
} while (i2 <= 5);

printf("\n");
printf("Simulação do movimento de peças de xadrez com a Rainha:\n");
//execução do movimento da Torre com for
for (int i3 = 1; i3 <= 8; i3++){
    printf("A Rainha se moveu %d casa(s) para esquerda\n", i3);
}

printf("\n");

printf("Simulação do movimento de peças de xadrez com o Cavalo:\n");
//execução do movimento do Cavalo com aninhamento for/do-while
for (int i4 = 1; i4<=2; i4++){
printf("O Cavalo se moveu %d casa(s) para baixo\n", i4);
if (i4 ==2) {
    do { printf("O Cavalo se moveu uma  horizontalmente para esquerda.");
        j++;
    } while (j < 1);
}
}


return 0;
}