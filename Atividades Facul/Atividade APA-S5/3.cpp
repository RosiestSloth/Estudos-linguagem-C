#include <stdio.h>

int main() {
    int num1, num2;
    int *endereco_maior;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // Obtendo os endere�os das vari�veis
    int *ptr_num1 = &num1;
    int *ptr_num2 = &num2;

    // Comparando os endere�os e atribuindo o maior endere�o ao ponteiro
    if (ptr_num1 > ptr_num2) {
        endereco_maior = ptr_num1;
    } else {
        endereco_maior = ptr_num2;
    }

    // Imprimindo o conte�do do maior endere�o
    printf("O conte�do do maior endere�o �: %d\n", *endereco_maior);

    return 0;
}
