//bee 2238

#include <math.h>
#include <stdio.h>

int main() {
	
    int i, a, b, c, d;
    
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    int teto = ceil(sqrt(c) + 10.0);
    
    for (i = a; i <= teto; i += a) {
        if (i % b == 0) continue;
        if (d % i == 0) continue;
        if (c % i != 0) continue;
        printf("%d\n", i);
        return 0;
    }
    
    i = c / 2;
    
    if (i % a == 0 && i % b != 0 && d % i != 0 && c % i == 0) {
        printf("%d\n", i);
        return 0;
    }
    
    i = c;
    
    if (i % a == 0 && i % b != 0 && d % i != 0 && c % i == 0) {
        printf("%d\n", i);
        return 0;
    }
    
    printf("-1\n");
    
   return 0;
}