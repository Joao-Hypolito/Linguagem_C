//BEE1021
#include <stdio.h>

int main() {
    float num;
    
 
    scanf("%f", &num);
    
   
    int valor = (int)(num * 100 + 0.5);
    
    // CÉDULAS
    int notas100 = valor / 10000;
    valor = valor % 10000;
    
    int notas50 = valor / 5000;
    valor = valor % 5000;
    
    int notas20 = valor / 2000;
    valor = valor % 2000;
    
    int notas10 = valor / 1000;
    valor = valor % 1000;
    
    int notas5 = valor / 500;
    valor = valor % 500;
    
    int notas2 = valor / 200;
    valor = valor % 200;
    
    // MOEDAS
    int moeda1 = valor / 100;
    valor = valor % 100;
    
    int moeda050 = valor / 50;
    valor = valor % 50;
    
    int moeda025 = valor / 25;
    valor = valor % 25;
    
    int moeda010 = valor / 10;
    valor = valor % 10;
    
    int moeda005 = valor / 5;
    valor = valor % 5;
    
    int moeda001 = valor;  
    
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notas100);
    printf("%d nota(s) de R$ 50.00\n", notas50);
    printf("%d nota(s) de R$ 20.00\n", notas20);
    printf("%d nota(s) de R$ 10.00\n", notas10);
    printf("%d nota(s) de R$ 5.00\n", notas5);
    printf("%d nota(s) de R$ 2.00\n", notas2);
    
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda050);
    printf("%d moeda(s) de R$ 0.25\n", moeda025);
    printf("%d moeda(s) de R$ 0.10\n", moeda010);
    printf("%d moeda(s) de R$ 0.05\n", moeda005);
    printf("%d moeda(s) de R$ 0.01\n", moeda001);
    
    return 0;
}