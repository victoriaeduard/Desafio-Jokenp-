#include <stdio.h>

int movimentobispo;
int i;

//função recursiva da torre
void moverTorre(int casas, int direcao) {
    if (casas == 0) {
        return;
    }

    //movimentação da torre
    if (direcao == 1) {
        printf("Torre moveu 1 casa para a Direita\n");
    } else if (direcao == 2) {
        printf("Torre moveu 1 casa para a Esquerda\n");
    }

    // chamada recursiva
    moverTorre(casas - 1, direcao);
}

void moverBispo(int casas, int direcao) {
    if (casas <= 0) {
        return;
    }

    //movimentação do bispo
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            if (direcao == 1) printf("O Bispo se moveu para Cima, Direita.\n");
            else printf("O Bispo se moveu para Cima, Esquerda");
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
        printf("Rainha moveu 1 casa para a Direita\n");
    } else if (direcao == 2) {
        printf("Bispo moveu 1 casa para a Esquerda\n");
    }

    // chamada recursiva
    moverRainha(casas - 1, direcao);
}

int main() {

    int peca;
    int direcao;
    int movimentorre,  movimentobispo, movimentorainha;

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

            moverBispo(movimentorainha, direcao);
            break;
        default:
            printf("Opção invalida.\n");
    }

    return 0;
}
