//BEE1006
#include <stdio.h>

int main(){
	
	double A, B, C, total;
	
	scanf("%lf %lf %lf", &A, &B , &C);
	total = ((A * 2) + (B * 3) + (C * 5)) / 10;
	
	printf("MEDIA = %.1f\n", total);
	
	return 0;
}