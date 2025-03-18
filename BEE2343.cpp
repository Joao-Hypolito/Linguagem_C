#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); 
    
    
    int matriz[501][501] = {0}; 

    int x, y;
    for (int i = 0; i < N; i++) { 
        scanf("%d %d", &x, &y); 
        
        
        if (matriz[x][y] == 1) {
            printf("1\n"); 
            return 0; 
        }

        
        matriz[x][y] = 1;
    }

    
    printf("0\n");

    return 0;
}