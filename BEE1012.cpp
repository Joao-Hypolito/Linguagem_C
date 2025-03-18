// BEE1012
#include <stdio.h>
#include <math.h>

int main(){
	
	double A, B, C;
	double triangulo, circulo, trapezio, quadrado, retangulo;
	
	scanf("%lf %lf %lf", &A, &B ,&C);
	
	
		circulo = 3,14 * (pow(C, 2));
	// TRIANGULO
	triangulo = (A * C) / 2;
	
	//CIRCULO
	circulo = 3.14159 * pow(C, 2);
	
	//TRAPEZIO
	trapezio = ((A + B) * C) / 2;
	
	//QUADRADO
	quadrado = B * B;
	
	//RETANGULO
	retangulo = A * B;
	
printf("TRIANGULO: %.3f\n", triangulo);
printf("CIRCULO: %.3f\n", circulo);
printf("TRAPEZIO: %.3f\n", trapezio);
printf("QUADRADO: %.3f\n", quadrado);
printf("RETANGULO: %.3f\n", retangulo);
	
	return 0;
}