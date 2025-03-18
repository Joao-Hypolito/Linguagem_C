//BEE1015
#include <stdio.h>
#include <math.h>

int main(){
	
	double x1, x2, y1, y2;
	double p1, p2, total, raiz;
	
	
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	p1 = pow((x2 - x1), 2);
	p2 = pow((y2 - y1), 2);
	total = p1 + p2;
	raiz = sqrt(total);
	
	printf("%.4lf\n", raiz);
	
	return 0;
}