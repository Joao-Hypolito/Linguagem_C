#include <stdio.h>

int main() {
   
    int C;
    int poder;

    scanf("%d", &C);

    for(int i = 0; i < C; i++){
        scanf("%d", &poder);

        if(poder > 8000){
            printf("Mais de 8000!\n");
        }else{
            printf("Inseto!\n");
        }


    }


    return 0;
}
