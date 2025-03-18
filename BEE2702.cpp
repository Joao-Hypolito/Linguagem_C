//BEE2702
#include <stdio.h>

int main() {

	int F, B, M;
	int Fr, Br, Mr;
	int Faltam = 0;
	
	scanf("%d %d %d", &F, &B, &M);
	scanf("%d %d %d", &Fr, &Br, &Mr);
	
	if(Fr > F){
	Faltam += Fr - F;	
	}

	if(Br > B){
	Faltam += Br - B;	
	}

	if(Mr > M){
	Faltam += Mr - M;	
	}

	printf("%d\n", Faltam);

return 0;

}