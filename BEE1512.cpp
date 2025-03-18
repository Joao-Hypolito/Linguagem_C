#include <stdio.h>


#include <math.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int N, A, B;

    while (1) {
        
        scanf("%d %d %d", &N, &A, &B);

        
        if (N == 0 && A == 0 && B == 0) {
            break;
        }

        
        int multiplesA = N / A;
        int multiplesB = N / B;
        int multiplesLCM = N / lcm(A, B);

        
        int result = multiplesA + multiplesB - multiplesLCM;

        
        printf("%d\n", result);
    }

    return 0;
}