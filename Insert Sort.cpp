#include <stdio.h>

void insertSort (int *vetor, int N) {
    int i, j, aux;

    for(i=1; i<N; i++) {
        aux = vetor[i];
        for(j=i-1; j>=0 && aux<vetor[j]; j--) {
            vetor[j+1] = vetor[j];
        }
        vetor[j+1] = aux;
    }
}

int main() {
    int vetor[] = {5, 3, 8, 4, 2};  // Vetor de exemplo
    int N = 5; // Tamanho do vetor
    int i;

    printf("Vetor antes da ordenacao:\n");
    for(i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }

    insertSort(vetor, N); // Chama a função de ordenação

    printf("\n\nVetor depois da ordenacao:\n");
    for(i=0; i<N; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}
