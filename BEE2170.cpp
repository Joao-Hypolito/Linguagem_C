#include <stdio.h>

int main() {
    double X, Y;
    int projeto = 1;

    while (scanf("%lf %lf", &X, &Y) != EOF) {
     
        double juros = ((Y - X) / X) * 100;
    
        printf("Projeto %d:\n", projeto);
        printf("Percentual dos juros da aplicacao: %.2lf %%\n\n", juros);

        projeto++;
    }

    return 0;
}