#include <stdio.h>

int main() {
    int N;  
    double V1, V2, V3; 
    double media;  
    
    scanf("%d", &N);
    

    for (int i = 0; i < N; i++) {
        scanf("%lf %lf %lf", &V1, &V2, &V3);
        
        media = (V1 * 2 + V2 * 3 + V3 * 5) / 10;
        printf("%.1f\n", media);
    }
    
    return 0;
}

