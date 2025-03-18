#include <stdio.h>

int main() {
    int L, i, j;
    char T;
    double M[12][12], soma = 0.0, resultado;

    // Leitura da linha L e do tipo de operação T ('S' ou 'M')
    scanf("%d", &L);
    scanf(" %c", &T);

    // Leitura dos elementos da matriz 12x12
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    // Cálculo da soma dos elementos da linha L
    for (j = 0; j < 12; j++) {
        soma += M[L][j];
    }

    // Se T for 'S', o resultado é a soma. Se for 'M', calcula a média.
    if (T == 'S') {
        resultado = soma;
    } else if (T == 'M') {
        resultado = soma / 12.0;
    }

    // Exibe o resultado com uma casa decimal
    printf("%.1lf\n", resultado);

    return 0;
}