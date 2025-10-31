#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // 1. TORRE (5 casas para a Direita) - Usando 'for'
    printf("=== Torre (for) ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // 2. BISPO (5 casas Cima, Direita) - Usando 'while'
    printf("\n=== Bispo (while) ===\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    // 3. RAINHA (8 casas para a Esquerda) - Usando 'do-while'
    printf("\n=== Rainha (do-while) ===\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8); // Condição: Repete até fazer 8 movimentos

    return 0;

}
