#include <stdio.h>

int main() {
    // Declara��o de vari�veis
    int numero = 10;
    float real = 3.14;
    char caractere = 'A';

    // Declara��o de ponteiros
    int *ptr_numero = &numero;
    float *ptr_real = &real;
    char *ptr_caractere = &caractere;

    // Impress�o dos valores iniciais
    printf("Valores iniciais:\n");
    printf("N�mero: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    // Modificando os valores atrav�s dos ponteiros
    *ptr_numero = 20;
    *ptr_real = 2.71;
    *ptr_caractere = 'B';

    // Impress�o dos valores ap�s a modifica��o
    printf("\nValores ap�s a modifica��o:\n");
    printf("N�mero: %d\n", numero);
    printf("Real: %.2f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}
