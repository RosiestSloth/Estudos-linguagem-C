// Exerc�cio - 01
#include <stdio.h>
#include <stdlib.h>

//fun��o para aloca��o de ponteiros

void soma(int num1, int num2) {
	*soma = num1 + num2;
}

int main() {
	int num1, num2, *soma;
	
	soma = malloc(sizeof(int));
	
	if (soma) {
		printf("Mem�ria reservada com sucesso!!");
		
		printf("Digite o primeiro valor da soma: ");
		scanf("%d", &num1);
		
		printf("Agora digite o segundo valor: ");
		scanf("%d", &num2);
		
		soma(num1, num2);
		
		printf("A soma dos valores %d + %d � %d", num1, num2, *soma);
		
		
		
	}
	
}
