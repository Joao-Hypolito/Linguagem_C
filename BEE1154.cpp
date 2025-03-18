//BEE1154
#include <stdio.h>

int main() {
    int idade, totalIdades = 0, contador = 0;
    double media;

    while (1) {
        scanf("%d", &idade);
        
        
        if (idade < 0) {
            break;
        }

        
        totalIdades += idade;
        contador++;
    }

    
    if (contador > 0) {
        media = (double)totalIdades / contador;
        printf("%.2lf\n", media);
    }

    return 0;
}