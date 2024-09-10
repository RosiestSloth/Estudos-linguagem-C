#include <stdio.h>
#include <unistd.h>

int ehPrimo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int vet[15], i;

    printf("Seja bem-vindo!\n");
    for (i = 0; i < 15; i++) {
        printf("Digite o %dº valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("\nPosições dos números primos:\n");
    for (i = 0; i < 15; i++) {
        if (ehPrimo(vet[i])) {
            printf("Número primo encontrado na posição %d: %d\n", i, vet[i]);
            sleep(1);
        }
    }

    return 0;
}

