#include <stdio.h>
 
int main() {
 
    int X;
    double Y, total;
    
    scanf("%d %lf", &X, &Y);
 
 	total = X / Y;
 	
 	printf("%.3lf km/l\n", total);
 
    return 0;
}
