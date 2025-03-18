//BEE1019
#include <stdio.h>

int main(){
	
	int num;

	scanf("%d", &num);
	
	int hor = num / 3600;
	num %= 3600;
	
	int min = num / 60;
	num %= 60;
	
	int segs = num;
	
	
	
	printf("%d:%d:%d\n", hor, min, segs);
	
	return 0;
}