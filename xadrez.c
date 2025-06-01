#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento do Bispo com loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais == 0) return;
    for (int i = 1; i <= casasHorizontais; i++) {
        printf("Cima, Direita\n");
    }
    moverBispo(casasVerticais - 1, casasHorizontais);
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 1);

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo (2 casas para cima e 1 para a direita) usando loops complexos
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // Loop para as 2 casas para cima
        printf("Cima\n");
        for (int j = 1; j <= 1; j++) { // Loop para 1 casa para a direita
            if (i == 2) { // Condição para imprimir "Direita" apenas após o segundo movimento para cima
                printf("Direita\n");
                break;
            }
        }
    }

    return 0;
}