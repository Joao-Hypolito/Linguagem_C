//BEE2424
#include <stdio.h>

int main() {
    int X, Y;

    // Leitura das coordenadas do ponto de contato da bola
    scanf("%d %d", &X, &Y);

    // Verificação se a bola está dentro ou fora da semi-quadra
    if (X >= 0 && X <= 432 && Y >= 0 && Y <= 468) {
        printf("dentro\n");
    } else {
        printf("fora\n");
    }

    return 0;
}