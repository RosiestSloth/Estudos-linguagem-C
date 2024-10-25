// Exercício - 01
#include <stdio.h>
#include <stdlib.h>

//função para alocação de ponteiros

void soma(int num1, int num2) {
	*soma = num1 + num2
}

int main() {
	int num1, num2, *soma;
	
	soma = malloc(sizeof(int))
	
	if (soma) {
		printf("Memória reservada com sucesso!!");
		
		printf("Digite o primeiro valor da soma: ");
		scanf("%d", &num1);
		
		printf("Agora digite o segundo valor: ");
		scanf("%d", &num2);
		
		soma(num1, num2);
		
		printf("A soma dos valores %d + %d é %d", num1, num2, *soma)
		
		
		
	}
	
}
