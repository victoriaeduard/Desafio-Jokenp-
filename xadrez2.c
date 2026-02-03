#include <stdio.h>

int main (){

    //introdução das variaveis
    int i = 0, i2 = 0;

printf("Simulação do movimento de peças de xadrez com a Torre:\n");
//execução do movimento da Torre com while
while (i <=5 ){
printf("A Torre se moveu %d casa(s) para direita\n", i);
i++;
}

printf("\n");
printf("Simulação do movimento de peças de xadrez com o Bispo:\n");
//execução do movimento do Bispo com do-while
do {
    printf("%d", i2);
    i++;
    if (i2 <= 5){
        printf("O bispo se moveu %d para direita\n", i2);
    }
} while (i2 <= 5);

return 0;
}