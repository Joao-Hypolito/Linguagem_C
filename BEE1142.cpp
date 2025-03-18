//BEE1142
#include <stdio.h>

int main() {
	
	int N, cont = 1;
	
	scanf("%d", &N);
	
	for(int i = 0; i < N ; i++){
		
		printf("%d %d %d PUM\n", cont, cont + 1, cont + 2);
		cont += 4;
		
}	
	
	return 0;
	
}