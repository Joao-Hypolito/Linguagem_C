//BEE1011
#include <stdio.h>
#include <math.h>

int main(){

	double R, vol;
	
	scanf("%lf", &R);
	vol = (4.0/3.0) * 3.14159 * pow(R, 3);
	
printf("VOLUME = %.3lf\n", vol);
	
	return 0;
}