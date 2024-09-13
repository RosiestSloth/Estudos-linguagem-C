#include <stdio.h>

int main() {
    // Declaração de variáveis
    int numero = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declaração de ponteiros
    int *ptr_numero = &numero;
    float *ptr_real = &real;
    char *ptr_caractere = &caractere;

    // Impressão dos valores iniciais
    printf("Valores iniciais:\n");
    printf("Número: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificando os valores através dos ponteiros
    *ptr_numero = 20;
    *ptr_real = 2.71;
    *ptr_caractere = 'B';

    // Impressão dos valores após a modificação
    printf("\nValores após a modificação:\n");
    printf("Número: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
