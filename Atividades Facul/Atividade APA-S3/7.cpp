#include <stdio.h>

int somaDivisiveis(int a, int b, int c) {
    int soma = 0;
    
    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }
    
    return soma;
}

int main() {
    int num1, num2, num3;
    
    printf("Digite três números inteiros (a, b, c): ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int resultado = somaDivisiveis(num1, num2, num3);
    
    printf("A soma dos números entre %d e %d que são divisíveis por %d é: %d\n", num2, num3, num1, resultado);
    
    return 0;
}
