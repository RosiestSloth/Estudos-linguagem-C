#include <stdio.h>

int dobraESoma(int *a, int *b) {
    *a *= 2; // Dobra o valor de A
    *b *= 2; // Dobra o valor de B

    return *a + *b;
}

int main() {
    int num1, num2, resultado;

    printf("Digite o valor de A: ");
    scanf("%d", &num1);

    printf("Digite o valor de B: ");
    scanf("%d", &num2);

    // Chama a função para dobrar os valores e calcular a soma
    resultado = dobraESoma(&num1, &num2);

    printf("A soma do dobro de A e B é: %d\n", resultado);

    return 0;
}
