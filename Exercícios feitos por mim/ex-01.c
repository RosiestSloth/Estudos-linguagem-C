// Exerc�cio - 01
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//fun��o para aloca��o de ponteiros

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, *soma;
	
	soma = malloc(sizeof(int)); //Alocar valor de acordo com o tamanho de um inteiro
	
	if (soma) { //Condi��o de aloca��o de mem�ria
		printf("Mem�ria reservada com sucesso!!\n");
		
		printf("Digite o primeiro valor da soma: ");
		scanf("%d", &num1);
		
		printf("Agora digite o segundo valor: ");
		scanf("%d", &num2);
		*soma = num1 + num2; //Aloca a soma dos valores
		
		printf("A soma dos valores %d + %d � %d", num1, num2, *soma);
		free(soma); //Libera mem�ria
	}
	else {
		printf("n�o foi poss�vel alocar o valor.");
	}
	
}
