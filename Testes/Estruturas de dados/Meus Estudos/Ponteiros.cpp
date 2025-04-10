#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void imprimirVetor(int *vet, int tam) {
    int i;
    printf("Vetor de números: ");
    for (i=0; i<tam; i++) {
        printf("%d ", *(vet+i));
    }
    printf("\n");
}

void imprimirVetorLetras(char *vet, int tam) {
    int i;
    printf("Vetor de letras:");
    for (i=0; i<tam; i++) {
        printf("%c ", *(vet+i));
    }
    printf("\n");
}

void preencherVetorInt(int *vet, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        printf("Digite um valor qualquer: ");
        scanf("%d", vet+i);
        *(vet+i) = i;
    }
}

int main() {

    setlocale(LC_ALL, "Portuguese");

    int i, vet[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    char letras[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    //printf("Endereco do vetor: %p\t%p\n", vet, &vet[0]);

    preencherVetorInt(vet, 10);
    imprimirVetor(vet, 10);
    imprimirVetorLetras(letras, 10);

    /*int *valor1, valor2 = 50;
    char *letra1, letra2 = 'g';

    valor1 = &valor2;
    letra1 = &letra2;

    printf("valor da variavel valor2: %d\n", valor2);
    printf("Endereco da variavel valor2: %p\n", &valor2);
    printf("Conteudo da variavel valor1: %p\n", valor1);
    printf("Conteudo apontado pela variavel valor1: %d\n", *valor1);

    printf("letra da variavel letra2: %c\n", letra2);
    printf("Endereco da variavel letra2: %p\n", &letra2);
    printf("Conteudo da variavel letra1: %p\n", letra1);
    printf("Conteudo apontado pela variavel letra1: %c\n", *letra1);*/

    return 0;
}