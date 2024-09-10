#include <stdio.h>

int main() {
    float salario = 545.00, valorUnit[10], soma = 0, faturamento = 0;
    int vendido[10], total = 0;
    
    // Recebendo os valores unitários dos 10 objetos
    printf("Informe os valores unitários de cada objeto: \n");
    for (int i = 0; i < 10; i++) {
        printf("Objeto %d: R$ ", i + 1);
        scanf("%f", &valorUnit[i]);
    }
    
    // Recebendo a quantidade de produtos vendidos
    printf("Agora informe a quantidade total de produtos vendidos:\n");
    for (int i = 0; i < 10; i++) {
        printf("Objeto %d vendido(s): ", i + 1);
        scanf("%d", &vendido[i]);
    }
    
    // Calculando a soma do valor total faturado e o total de produtos vendidos
    for (int i = 0; i < 10; i++) {
        soma += valorUnit[i] * vendido[i];
        total += vendido[i];
    }

    printf("\nForam vendidos %d produtos.\n", total);
    printf("E foram faturados R$ %.2f.\n", soma);
    
    faturamento = soma * 0.05;
    printf("Com o salário de R$%.2f mais o faturamento de vendas de R$%.2f.", salario, faturamento);
    printf("\nO funcionário recebeu R$%.2f.", faturamento+salario);
    
    return 0;
}

