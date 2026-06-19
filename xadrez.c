#include <stdio.h>

int main() {

    // Quantidade de casas que cada peça irá se mover
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    int i;

    /*
     * TORRE
     * Movimento: 5 casas para a direita
     * Estrutura utilizada: FOR
     */
    printf("Movimento da Torre:\n");

    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    /*
     * BISPO
     * Movimento: 5 casas na diagonal
     * (Cima e Direita)
     * Estrutura utilizada: WHILE
     */
    printf("Movimento do Bispo:\n");

    i = 1;

    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    /*
     * RAINHA
     * Movimento: 8 casas para a esquerda
     * Estrutura utilizada: DO-WHILE
     */
    printf("Movimento da Rainha:\n");

    i = 1;

    do {
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

    printf("\n");

    /*
     * CAVALO
     * Movimento em "L":
     * 2 casas para Baixo e 1 casa para Esquerda.
     *
     * Estruturas utilizadas:
     * - FOR (loop externo)
     * - WHILE (loop interno)
     *
     * O FOR controla a etapa vertical do movimento.
     * O WHILE executa as duas movimentações para baixo.
     * Após concluir as duas casas para baixo,
     * o programa move uma casa para a esquerda.
     */
    printf("Movimento do Cavalo:\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;
    int contador;

    for (i = 1; i <= 1; i++) {

        contador = 1;

        while (contador <= casasBaixo) {
            printf("Baixo\n");
            contador++;
        }

        printf("Esquerda\n");
    }

    return 0;
}