#include <stdio.h>

int main() {
    int H1, M1, H2, M2;
    int total1, total2, resultado;

    while (1) {
        
        scanf("%d %d %d %d", &H1, &M1, &H2, &M2);

        if (H1 == 0 && M1 == 0 && H2 == 0 && M2 == 0) {
            break;
        }

        total1 = H1 * 60 + M1;
        total2 = H2 * 60 + M2;

        resultado = total2 - total1;

        if (resultado < 0) {
            resultado += 1440;
        }
        
        printf("%d\n", resultado);
    }

    return 0;
}