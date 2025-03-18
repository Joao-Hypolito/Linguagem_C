//AULA 06 - EX.1
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    
    char palavra[101];
    int meio, total, vezes, i, j, k;
	
	scanf("%d", &vezes);
	getchar();
	for(i = 1; i <= vezes; i++){
		gets(palavra);
		total = strlen(palavra);
		meio = total/2;
		for(j = meio - 1; j >= 0; j--){
			printf("%c", palavra[j]);
		}
	
		for(j = total - 1; j >= meio - 1; j--){
			  if(j == meio - 1){
			  	   printf("\n");
		}
		else{
			 printf("%c", palavra[j]);
		}
	}
}
	
	    return 0;
}