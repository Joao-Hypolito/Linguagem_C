//BEE1020
#include <stdio.h>

int main(){
	
	int num;
	
	scanf("%d", &num);
	
	int ano = num / 365;
	num %= 365;
	
	int meses = num / 30;
	num %= 30;
	
	int dias = num;	

	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", meses);
	printf("%d dia(s)\n", dias);
	
	
	return 0;
}