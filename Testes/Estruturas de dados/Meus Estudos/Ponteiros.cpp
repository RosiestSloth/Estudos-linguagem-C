#include <stdio.h>
#include <stdlib.h>

int main() {

    int *valor1, valor2 = 50;
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
    printf("Conteudo apontado pela variavel letra1: %c\n", *letra1);

    return 0;
}