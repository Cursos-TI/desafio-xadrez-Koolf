#include <stdio.h>

/*

    Torre (recursão)
    Bispo (recursão + loops aninhados)
    Rainha (recursão)
    Cavalo (loops complexos)
*/

/* -------------------------------------------
   FUNÇÃO RECURSIVA – TORRE
   Move sempre para a DIREITA.
------------------------------------------- */
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Condição de parada
    }

    printf("Direita\n");

    moverTorre(casas - 1); // Chamada recursiva
}

/* -------------------------------------------
   FUNÇÃO RECURSIVA – BISPO (CIMA-DIREITA)
------------------------------------------- */
void moverBispoRecursivo(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Cima Direita\n");

    moverBispoRecursivo(casas - 1);
}

/* -------------------------------------------
   LOOPS ANINHADOS – BISPO
   Loop externo = vertical
   Loop interno = horizontal
------------------------------------------- */
void moverBispoLoops(int casas) {

    for (int v = 1; v <= casas; v++) {
        for (int h = 1; h <= 1; h++) {
            printf("Cima Direita (Loop)\n");
        }
    }
}

/* -------------------------------------------
   FUNÇÃO RECURSIVA – RAINHA
   Move para a ESQUERDA.
------------------------------------------- */
void moverRainha(int casas) {
    if (casas == 0) {
        return;
    }

    printf("Esquerda\n");

    moverRainha(casas - 1);
}

/* -------------------------------------------
   CAVALO – LOOPS COMPLEXOS
   Movimento solicitado:
   • 2 casas para CIMA
   • 1 casa para DIREITA
------------------------------------------- */
void moverCavalo() {

    int cima = 2;
    int direita = 1;

    printf("Movimento do Cavalo:\n");

    
    for (int i = 1; i <= cima; i++) {
        for (int j = 1; j <= 1; j++) {

            if (i == 2) {
                continue;
            }

            printf("Cima\n");
        }
        printf("Cima\n");
    }

   
    for (int k = 1; k <= 5; k++) {

        if (k > direita) {
            break; 
        }

        printf("Direita\n");
    }

    printf("\n");
}

/* -------------------------------------------
                 PROGRAMA PRINCIPAL
------------------------------------------- */

int main() {

    int casasTorre  = 5;
    int casasBispo  = 5;
    int casasRainha = 8;

    // --------------------------
    // TORRE
    // --------------------------
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);
    printf("\n");

    // --------------------------
    // BISPO – RECURSÃO
    // --------------------------
    printf("Movimento do Bispo (Recursivo):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // --------------------------
    // BISPO – LOOPS ANINHADOS
    // --------------------------
    printf("Movimento do Bispo (Loops Aninhados):\n");
    moverBispoLoops(casasBispo);
    printf("\n");

    // --------------------------
    // RAINHA
    // --------------------------
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);
    printf("\n");

    // --------------------------
    // CAVALO
    // --------------------------
    moverCavalo();

    return 0;
}
