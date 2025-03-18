#include <stdio.h>

int main()
{
    int i, n, qtd, coelhos = 0, ratos = 0, sapos = 0, total = 0;
    char tipo;

    scanf("%d\n", &n);

    coelhos = 0, ratos = 0, sapos = 0;
    
    for(i = 0; i < n; i++){
        scanf("%d %c\n", &qtd, &tipo);

        switch (tipo)
        {
        case 'C':
            coelhos += qtd;
            break;
        case 'R':
            ratos += qtd;
            break;
        case 'S':
            sapos += qtd;
            break;
        }
    }
    total = coelhos + ratos + sapos;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2f %%\n", (float)coelhos / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)ratos / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)sapos / total * 100);

    return 0;
}