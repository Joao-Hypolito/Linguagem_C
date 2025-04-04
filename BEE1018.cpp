#include <stdio.h>

int main() {
    int N, valor;
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1;

    // Leitura do valor
    scanf("%d", &N);
    
    // Armazena o valor original para impressão
    valor = N;

    // Cálculo da quantidade de notas necessárias
    notas100 = N / 100;
    N = N % 100;

    notas50 = N / 50;
    N = N % 50;

    notas20 = N / 20;
    N = N % 20;

    notas10 = N / 10;
    N = N % 10;

    notas5 = N / 5;
    N = N % 5;

    notas2 = N / 2;
    N = N % 2;

    notas1 = N;  // O restante será a quantidade de notas de 1

    // Impressão do valor original e da quantidade de notas
    printf("%d\n", valor);
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00\n", notas2);
    printf("%d nota(s) de R$ 1,00\n", notas1);

    return 0;
}