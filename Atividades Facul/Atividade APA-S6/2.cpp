#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, i, pares = 0, impares = 0;
    int *vetor;

    // Lendo o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // Alocando memória dinamicamente para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));

    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lendo os valores do vetor
    printf("Digite os valores do vetor:\n");
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprimindo o vetor
    printf("Vetor lido:\n");
    for (i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Contando pares e ímpares
    for (i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    // Imprimindo a quantidade de pares e ímpares
    printf("Quantidade de números pares: %d\n", pares);
    printf("Quantidade de números ímpares: %d\n", impares);

    // Liberando a memória alocada
    free(vetor);

    return 0;
}
