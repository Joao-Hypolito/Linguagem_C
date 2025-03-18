//BEE1005
#include <stdio.h>

int main(){
	
	float A, B, total;
	
	scanf("%f %f", &A, &B);
	total= ((A * 3.5) + (B * 7.5)) / 11;
	
	printf("MEDIA = %.5f\n", total);
	
	return 0;
}