#include <stdio.h>

int main() {
    int T, B, Ad, Dd, Ld, Ag, Dg, Lg;
    int golpeDabriel, golpeGuarte;

    scanf("%d", &T); // número de instâncias

    for (int i = 0; i < T; i++) {
        scanf("%d", &B); // valor do bônus

        // Leitura dos valores de Dabriel
        scanf("%d %d %d", &Ad, &Dd, &Ld);

        // Leitura dos valores de Guarte
        scanf("%d %d %d", &Ag, &Dg, &Lg);

        // Cálculo do golpe de Dabriel
        golpeDabriel = (Ad + Dd) / 2;
        if (Ld % 2 == 0) { // Se o nível é par, adiciona o bônus
            golpeDabriel += B;
        }

        // Cálculo do golpe de Guarte
        golpeGuarte = (Ag + Dg) / 2;
        if (Lg % 2 == 0) { // Se o nível é par, adiciona o bônus
            golpeGuarte += B;
        }

        // Verificação do vencedor
        if (golpeDabriel > golpeGuarte) {
            printf("Dabriel\n");
        } else if (golpeGuarte > golpeDabriel) {
            printf("Guarte\n");
        } else {
            printf("Empate\n");
        }
    }

    return 0;
}