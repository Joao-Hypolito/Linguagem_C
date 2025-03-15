#include <stdio.h>
 
int main() {
 
   int num, h;
   float total, salario;
   
   scanf("%d %d %f", &num, &h, &salario);
   
   total = h * salario;
   
   printf("NUMBER = %d\n", num);
   printf("SALARY = U$ %.2f\n", total);
 
    return 0;
}
