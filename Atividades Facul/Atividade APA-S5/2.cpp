#include <stdio.h>

int main() {
    int num1, num2;

    // Atribuindo valores às variáveis (opcional)
    num1 = 10;
    num2 = 20;

    // Obtendo os endereços das variáveis
    int *endereco_num1 = &num1;
    int *endereco_num2 = &num2;

    printf("Endereço de num1: %p\n", endereco_num1);
    printf("Endereço de num2: %p\n", endereco_num2);

    // Comparando os endereços e imprimindo o maior
    if (endereco_num1 > endereco_num2) {
        printf("O maior endereço é de num1: %p\n", endereco_num1);
    } else if (endereco_num1 < endereco_num2) {
        printf("O maior endereço é de num2: %p\n", endereco_num2);
    } else {
        printf("Os endereços são iguais.\n");
    }

    return 0;
}
