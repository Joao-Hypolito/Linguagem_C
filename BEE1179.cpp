#include <stdio.h>

int main() {
	
    int par[5], impar[5];
    int num, i, j = 0, k = 0;

    for (i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            par[j] = num;
            j++;

            if (j == 5) {
                for (j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                j = 0; 
            }
        } else {
            impar[k] = num;
            k++;

            if (k == 5) {
                for (k = 0; k < 5; k++) {
                    printf("impar[%d] = %d\n", k, impar[k]);
                }
                k = 0; 
            }
        }
    }

    for (i = 0; i < k; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (i = 0; i < j; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}

