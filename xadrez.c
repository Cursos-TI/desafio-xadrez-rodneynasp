#include <stdio.h>

/*
 * Função recursiva da Torre
 * Movimento: Direita
 */
void moverTorre(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Direita\n");
    moverTorre(casas - 1);
}

/*
 * Função recursiva da Rainha
 * Movimento: Esquerda
 */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");
    moverRainha(casas - 1);
}

/*
 * Função recursiva do Bispo
 * Movimento: Diagonal (Cima + Direita)
 *
 * Utiliza loops aninhados:
 * - for externo = movimento vertical
 * - while interno = movimento horizontal
 */
void moverBispo(int casas) {
    if (casas == 0) {
        return;
    }

    int vertical;
    int horizontal;

    /* Loop externo: vertical */
    for (vertical = 1; vertical <= 1; vertical++) {

        horizontal = 1;

        /* Loop interno: horizontal */
        while (horizontal <= 1) {
            printf("Cima\n");
            printf("Direita\n");
            horizontal++;
        }
    }

    moverBispo(casas - 1);
}

int main() {

    /* Quantidade de movimentos */
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    /*
     * CAVALO
     * Movimento em "L":
     * 2 casas para Cima
     * 1 casa para Direita
     *
     * Loops aninhados com múltiplas variáveis,
     * utilizando continue e break.
     */
    printf("Movimento do Cavalo:\n");

    int linha;
    int coluna;

    for (linha = 1; linha <= 2; linha++) {

        /* Exemplo de uso do continue */
        if (linha == 0) {
            continue;
        }

        printf("Cima\n");

        for (coluna = 1; coluna <= 1; coluna++) {

            printf("Direita\n");

            /* Exemplo de uso do break */
            break;
        }
    }

    return 0;
}