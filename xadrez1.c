#include <stdio.h>

// Desafio de Xadrez - Movimentação das Peças
// Esse programa simula o movimento da Torre, Bispo e Rainha
// usando as estruturas de repetições pedidas na aula.

int main() {

    // ------------------------------
    // Movimento da TORRE – 5 casas para a direita
    // ------------------------------
    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ------------------------------
    // Movimento do BISPO – 5 casas em diagonal cima direita 
    // ------------------------------
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");  // Movimento diagonal = combinando as direções
        contadorBispo++;
    }

    printf("\n");

    // ------------------------------
    // Movimento da RAINHA – 8 casas para a esquerda
    // ------------------------------
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n"); 
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    return 0;
}
