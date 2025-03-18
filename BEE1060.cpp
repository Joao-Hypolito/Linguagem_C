#include <stdio.h>

int main() {
    int i, count = 0;
    double valor;
    
    for(i = 0; i < 6; i++){
    	scanf("%d", &valor);
	
		if(valor > 0){
			count++;
		}
	}
    
    
    printf("%d valores positivos\n", count);
    
    return 0;
}

