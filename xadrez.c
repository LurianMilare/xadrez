#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando 'for'
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando 'while'
    printf("\nMovimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando 'do-while'
    printf("\nMovimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);

    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++) { // Loop para as 2 casas para baixo
        printf("Baixo\n");
    }
    int l = 1;
    while (l <= 1) { // Loop para 1 casa para a esquerda
        printf("Esquerda\n");
        l++;
    }

    return 0;
}