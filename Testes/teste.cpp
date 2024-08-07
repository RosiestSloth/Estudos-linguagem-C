#include <stdio.h>

int main() {
	//Variáveis que vou utilizar
	int nome, idade, tamanho, num1, num2, soma;
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	
	printf("Seja bem vindo %s \n", &nome);
	
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Voce tem %d anos \n", idade);
	
	printf("Digite o primeiro numero que voce quer calcular: ");
	scanf("%d", &num1);
	
	printf("Digite o segundo: ");
	scanf("%d", &num2);

	
	printf("A soma dos valores é %d\n", num1 + num2);
	
	return 0;
	
}
