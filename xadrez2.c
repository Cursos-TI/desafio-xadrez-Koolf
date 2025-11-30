#include <stdio.h>

// Desafio de Xadrez - Movimentação das Peças
// Nível Novato + Nível Aventureiro
// Torre, Bispo, Rainha e Cavalo (com loops aninhados)

int main() {

    // -------------------------------------
    // MOVIMENTO DA TORRE – 5 casas à direita
    // -------------------------------------
    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // -------------------------------------
    // MOVIMENTO DO BISPO – 5 casas diagonal cima-direita
    // -------------------------------------
    int casasBispo = 5;
    int contadorBispo = 1;

    printf("Movimento do Bispo:\n");

    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // -------------------------------------
    // MOVIMENTO DA RAINHA – 8 casas à esquerda
    // -------------------------------------
    int casasRainha = 8;
    int contadorRainha = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    printf("\n");

    // -------------------------------------
    // MOVIMENTO DO CAVALO
    // Movimento em "L": 2 para BAIXO e 1 para ESQUERDA
    // -------------------------------------

    int passosBaixo = 2;    
    int passosEsquerda = 1;   

    printf("Movimento do Cavalo:\n");

   
    for (int i = 1; i <= passosBaixo; i++) {

        int contadorBaixo = 1;
        while (contadorBaixo <= 1) {
            printf("Baixo\n");
            contadorBaixo++;
        }
    }

    int contadorLateral = 1;
    while (contadorLateral <= passosEsquerda) {
        printf("Esquerda\n");
        contadorLateral++;
    }

    printf("\n");

    return 0;
}