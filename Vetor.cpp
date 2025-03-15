#include <stdio.h>

int main(){
	
	int v[5];
	int i;
	
	for(i = 0; i < 5; i++){
		scanf( "%d", &v[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf( "numeros[%d] = %d\n", i, v[i]);
	}	
	
	return 0;
}
