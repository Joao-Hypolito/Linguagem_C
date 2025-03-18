//BEE2414
#include <stdio.h>

int main (){
	
	int numero, maior = 0;
	
	while(1){
 
	scanf("%d", &numero);
	
	if(numero == 0){
	  break;
	} 	
	
	if (numero > maior) {
		maior = numero;
		
		} 
	}	
	
	printf("%d\n", maior);
	return 0;
}