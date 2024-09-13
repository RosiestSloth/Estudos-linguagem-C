#include <stdio.h>

int main() {
    int num1, num2;
    int *endereco_maior;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Obtendo os endereços das variáveis
    int *ptr_num1 = &num1;
    int *ptr_num2 = &num2;

    // Comparando os endereços e atribuindo o maior endereço ao ponteiro
    if (ptr_num1 > ptr_num2) {
        endereco_maior = ptr_num1;
    } else {
        endereco_maior = ptr_num2;
    }

    // Imprimindo o conteúdo do maior endereço
    printf("O conteúdo do maior endereço é: %d\n", *endereco_maior);

    return 0;
}
