#include <stdio.h>

int main() {
    // Número de casas para mover cada peça
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;

    // Movimentação da Torre - usando for
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    printf("\n");

    // Movimentação do Bispo - usando while
    printf("Movimento do Bispo (5 casas na diagonal para cima e direita):\n");
    int casas_movidas = 0;
    while (casas_movidas < casas_bispo) {
        casas_movidas++;
        printf("Casa %d: Cima, Direita\n", casas_movidas);
    }

    printf("\n");

    // Movimentação da Rainha - usando do-while
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int casas_feitas = 0;
    do {
        casas_feitas++;
        printf("Casa %d: Esquerda\n", casas_feitas);
    } while (casas_feitas < casas_rainha);

    return 0;
}
