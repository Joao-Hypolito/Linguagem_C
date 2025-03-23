#include <stdio.h>

int main(){

        int opcao;
        int alcool = 0, gasolina = 0, diesel = 0;

        while(1){

            scanf("%d", &opcao);

            if(opcao == 4){
                break;
            }

            if (opcao == 1){
                alcool++;
            }else if(opcao == 2){
                gasolina++;
            }else if(opcao == 3){
                diesel++;
            }

        }

        printf("MUITO OBRIGADO\n");
        printf("Alcool: %d\n", alcool);
        printf("Gasolina: %d\n", gasolina);
        printf("Diesel: %d\n", diesel);



    return 0;
}