//BEE1117
#include <stdio.h>

int main() {
    double nota1, nota2;
    int validas = 0;  
    double soma = 0.0; 
    
    while (validas < 2) {
        double nota;
        scanf("%lf", &nota);  
        
        
        if (nota >= 0 && nota <= 10) {
            soma = soma + nota;  
            validas++;  
        } else {
            printf("nota invalida\n");  
        }
    }
    
   
    printf("media = %.2f\n", soma / 2);
    
    return 0;
}