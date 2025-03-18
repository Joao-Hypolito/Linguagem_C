//BEE1983
#include <stdio.h>

int main() {
    int n, matricula, matriculaMaiorNota;
    float nota, maiorNota = -1.0;

  
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
       
        scanf("%d %f", &matricula, &nota);

        
        if (nota > maiorNota) {
            maiorNota = nota;
            matriculaMaiorNota = matricula;
        }
    }

    
    if (maiorNota >= 8.0) {
        printf("%d\n", matriculaMaiorNota);
    } else {
        printf("Minimum note not reached\n");
    }

    return 0;
}