#include <stdio.h>

int movimentobispo = 8, movimentocavalo = 1;
int i;

//função recursiva da torre
void moverTorre(int casas, int direcao) {
    if (casas == 0) {
        return;
    }

    //movimentação da torre
    if (direcao == 1) {
        printf("Direita\n");
    } else if (direcao == 2) {
        printf("Esquerda\n");
    }

    // chamada recursiva
    moverTorre(casas - 1, direcao);
}

void moverBispo(int casas, int direcao) {
    if (casas <= 0) {
        return;
    }
    // movimentação do bispo
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {


            if (direcao == 1) {
                printf("Cima\n");
                printf("Direita\n");
            } 
            else if (direcao == 2) {
                printf("Cima\n");
                printf("Esquerda\n");
            }
        }
    }
    moverBispo(casas - 1, direcao);
}


//função recursiva da rainha
void moverRainha(int casas, int direcao) {
    if (casas == 0) {
        return;
    }

    //movimentação da rainha
    if (direcao == 1) {
        printf("Direita\n");
    } else if (direcao == 2) {
        printf("Esquerda\n");
    }

    // chamada recursiva
    moverRainha(casas - 1, direcao);
}

//movimento do cavalo
void moverCavalo(int casas, int direcao) {
    if (casas == 0) {
        return;
    }
    for (int vertical = 0; vertical < 2; vertical++) {
        //movimento vertical
        if (direcao == 1 || direcao == 2) {
            printf("Cima\n");
        } 
        else if (direcao == 3 || direcao == 4) {
            printf("Baixo\n");
        }

        //movimento horizontal (só após a segunda casa vertical)
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            if (vertical == 1) {

                if (direcao == 1 || direcao == 3) {
                    printf("Direita\n");
                } 
                else if (direcao == 2 || direcao == 4) {
                    printf("Esquerda\n");
                }
            }
        }
    }
    moverCavalo(casas - 1, direcao);
}


int main() {

    int peca;
    int direcao;
    int movimentorre, movimentorainha;

    printf("--------------------------------------------------\n");
    printf("Simulação de peças de xadrez. Escolha uma peça:\n");
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("--------------------------------------------------\n");

    scanf("%d", &peca);

    switch (peca) {
        case 1:
            printf("Voce escolheu a Torre.\n");
            printf("Escolha a direcao:\n");
            printf("1. Direita\n");
            printf("2. Esquerda\n");

            scanf("%d", &direcao);

            printf("Digite o numero de casas:\n");
            scanf("%d", &movimentorre);

            moverTorre(movimentorre, direcao);
            break;
            case 2:
            printf("Voce escolheu o Bispo (ps: ele move-se obrigatoriamente 8 casas).\n");
            printf("Escolha a direcao:\n");
            printf("1. Diagonal: direita, cima\n");
            printf("2. Diagonal: esquerda, cima\n");

            scanf("%d", &direcao);

            moverBispo(movimentobispo, direcao);
            break;
        case 3:
            printf("Voce escolheu a Rainha.\n");
            printf("Escolha a direcao:\n");
            printf("1. Direita.\n");
            printf("2. Esquerda.\n");

            scanf("%d", &direcao);

            printf("Digite o numero de casas:\n");
            scanf("%d", &movimentorainha);

            moverRainha(movimentorainha, direcao);
            break;
        case 4:
            printf("Voce escolheu o Cavalo (ps: ele move-se obrigatoriamente uma vez.)\n");
            printf("Escolha a direcao:\n");
            printf("1. Duas cima, direita\n");
            printf("2. Duas cima, esquerda\n");
            printf("3. Duas baixo, direita\n");
            printf("4. Duas baixo, esquerda\n");

            scanf("%d", &direcao);

            moverCavalo(movimentocavalo, direcao);
            break;
        default:
            printf("Opção invalida.\n");
    }

    return 0;
}
