#include <stdio.h>

int main() {
    int num1, num2;

    // Atribuindo valores �s vari�veis (opcional)
    num1 = 10;
    num2 = 20;

    // Obtendo os endere�os das vari�veis
    int *endereco_num1 = &num1;
    int *endereco_num2 = &num2;

    printf("Endere�o de num1: %p\n", endereco_num1);
    printf("Endere�o de num2: %p\n", endereco_num2);

    // Comparando os endere�os e imprimindo o maior
    if (endereco_num1 > endereco_num2) {
        printf("O maior endere�o � de num1: %p\n", endereco_num1);
    } else if (endereco_num1 < endereco_num2) {
        printf("O maior endere�o � de num2: %p\n", endereco_num2);
    } else {
        printf("Os endere�os s�o iguais.\n");
    }

    return 0;
}
