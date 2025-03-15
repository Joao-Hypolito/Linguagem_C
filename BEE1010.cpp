#include <stdio.h>

int main(){
	
	int cod1, cod2, num1, num2;
	float val1, val2, total1, total2, x;
	
	scanf("%d %d %f", &cod1, &num1, & val1);
	scanf("%d %d %f", &cod2, &num2, & val2);
	
	total1 = num1 * val1;
	total2 = num2 * val2;
	x = total1 + total2;
	
	printf("VALOR A PAGAR: R$ %.2f\n", x);
	
	return 0;
}

