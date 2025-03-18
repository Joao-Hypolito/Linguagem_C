#include <stdio.h>
#include <math.h>

int main(){
	
int i, pulo, qtdCanos, alturaAtual, alturaProx, ganhou = 1;

scanf("%d %d", &pulo, &qtdCanos);

scanf("%d", &alturaAtual);

for(i = 1; i < qtdCanos; i++){
scanf("%d", &alturaProx);
if(abs(alturaProx-alturaAtual) > pulo){
	printf("GAME OVER\n");
	ganhou = 0;
	break;
}
	
alturaAtual = alturaProx;	

	
}	

if(ganhou == 1){
printf("YOU WIN\n");	
	
	
}
	return 0;
}