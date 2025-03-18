#include <stdio.h>

int main() {
    int X;

    // Loop para ler números até encontrar o 0
    while (1) {
        scanf("%d", &X);
        
        // Verifica se o valor é 0, encerra o programa
        if (X == 0) {
            break;
        }

        // Imprime a sequência de 1 até X
        for (int i = 1; i <= X; i++) {
            // Imprime o número atual
            printf("%d", i);
            // Se não for o último número, imprime o espaço
            if (i < X) {
                printf(" ");
            }
        }
        
        // Quebra de linha após imprimir a sequência
        printf("\n");
    }

    return 0;
}