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


     printf("\n--- Movimento do Cavalo ---\n");
    
    // 1. Movimento vertical (2 casas para baixo) - Usando loop FOR
    // Note que o valor '2' é usado diretamente.
    for (int i = 0; i < 2; i++) { 
        printf("Baixo\n");
    }
    
    // 2. Movimento perpendicular (1 casa para a esquerda) - Usando loop WHILE
    // Note que o valor '1' é usado diretamente.
    int l = 0;
    while (l < 1) { 
        printf("Esquerda\n");
        l++;
    }

    return 0;

}
