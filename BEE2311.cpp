#include <stdio.h>

int main()
{
    int qnt, i, j;
    char nome[1000];
    double dif, pont;
    scanf("%d", &qnt);
    for(i=1; i<=qnt; i++)
    {
        double max = -10.00, min = 100.00, ans = 0.00;
        scanf("%s", nome);
        scanf("%lf", &dif);
        for(j=1; j<=7; j++)
        {
            scanf("%lf", &pont);
            if(pont > max) max = pont;
            if(pont < min) min = pont;
            ans += pont;
        }
        ans -= (max+min);
        ans *= dif;
        printf("%s %.2lf\n", nome, ans);
    }
    return 0;
}