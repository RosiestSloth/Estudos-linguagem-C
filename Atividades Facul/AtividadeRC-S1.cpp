#include <stdio.h>
#include <math.h>


void decrescente(int *num1, int *num2, int *num3) {
	int temp;
	
	if (*num1 < *num2){
		temp = *num1;
		*num1 = *num2;
		*num2 = temp;
	}
	
	if (*num1 < *num3) {
		temp = *num1;
		*num1 = *num3;
		*num3 = temp;
	}
	
	if (*num2 < *num3) {
		temp = *num2;
		*num2 = *num3;
		*num3 = temp;
	}
}

void crescente(int *num1, int *num2, int *num3) {
	int temp;
	
	if (*num1 > *num2){
		temp = *num1;
		*num1 = *num2;
		*num2 = temp;
	}
	
	if (*num1 > *num3) {
		temp = *num1;
		*num1 = *num3;
		*num3 = temp;
	}
	
	if (*num2 > *num3) {
		temp = *num2;
		*num2 = *num3;
		*num3 = temp;
	}
}

float calcula_delta(int a, int b, int c) {
	float delta;
	
	delta = b*b -4 * a * c;
	
	return delta;
}


int main() {
	
	int num1, num2, num3;
	float raiz1, raiz2, delta;
	
	printf("Seja bem vindo a nossa calculadora");
	
	printf("\nDigite o valor da base: ");
	scanf("%d", &num1);
	
	printf("\nDigite o valor da altura: ");
	scanf("%d", &num2);
	
	num3 = (num1 * num2)/ 2;
	
	printf("A area do triangulo e %d\n", num3);
	
	printf("Os numeros recebidos foram: %d, %d, %d.", num1, num2, num3);
	printf( "\nDigite 1 para continuar: ");
	scanf("%d");
	
	crescente(&num1, &num2, &num3);
	
	printf("Os numeros em ordem crescente sao: %d, %d, %d.\n", num1, num2, num3);
	
	decrescente(&num1, &num2, &num3);
	
	printf("Os numeros em ordem decrescente sao: %d, %d, %d.\n", num1, num2, num3);
	
	printf("Vamos calcular bhaskara com os valores: %d, %d, %d\n", num1, num2, num3);
	printf("Digite 1 para continuar\n");
	scanf("%d"); //confirmação
	
	//calcular o valor de delta
	delta = calcula_delta(num1, num2, num3);
	
	if (delta < 0) {
		printf("As raizes sao complexas.\n");
	} else if (delta == 0) {
		//Uma raíz real
		raiz1 = -num2 / (2 * num1);
		printf("ha uma raiz irreal: %.2f\n", raiz1);
	} else {
		//Duas raízes reais
		raiz1 = (-num2 + sqrt(delta)) / (2 * num1);
		raiz2 = (-num2 - sqrt(delta)) / (2 * num1);
		printf("As raizes reais sao: %.2f e %.2f. \n", raiz1, raiz2);
	}
	
	printf("Digite 0 para encerrar: ")
	scanf("%d")
	
	return 0;
}

