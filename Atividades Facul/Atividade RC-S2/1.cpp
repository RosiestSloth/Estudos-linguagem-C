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

void calcula_delta() {
	float delta, a, b, c, raiz1, raiz2;
	
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	
	printf("Digite o valor de c: ");
	scanf("%f", &c);
	
	
	delta = b*b -4 * a * c;
	
	if (delta < 0) {
		printf("As raizes sao complexas.\n");
	} else if (delta == 0) {
		//Uma raíz real
		raiz1 = -a / (2 * a);
		printf("ha uma raiz irreal: %.2f\n", raiz1);
	} else {
		//Duas raízes reais
		raiz1 = (-b + sqrt(delta)) / (2 * a);
		raiz2 = (-b - sqrt(delta)) / (2 * a);
		printf("As raizes reais sao: %.2f e %.2f. \n", raiz1, raiz2);
	}
}

void Area_Tri(int base, int altura) {
	int resp;
	
	resp = (base*altura) / 2;
	printf("\n\tA area do triangulo e %d\n", resp);
}


int main() {
	int num1, num2, num3, resp;
	float raiz1, raiz2, delta, Res;
	
	printf("Analise as opções a seguir: "
		"\n\t Digite 1 para calcular a área do triangulo"
		"\n\t Digite 2 para ordenar os números"
		"\n\t Digite 3 para calcular a raiz quadrada dos valores"
		"\n\t Digite 4 para encerrar o programa");
	printf("\n\t: ");
	scanf("%d", &resp);
	
	if (resp == 1) {
		printf("Digite o valor da Base: ");
		scanf("%d", &num1);
		
		printf("\nDigite o valor da altura: ");
		scanf("%d", &num2);
		
		Area_Tri(num1, num2);
	} else if (resp == 2) {
		printf("Digite o primeiro valor: ");
		scanf("%d", &num1);
		
		printf("Digite o segundo valor: ");
		scanf("%d", &num2);
		
		printf("Digite o terceiro valor: ");
		scanf("%d", &num3);
		
		crescente(&num1, &num2, &num3);
		printf("\n\tOs numeros em forma crescente ficam: [%d] [%d] [%d]", num1, num2, num3);
		
		decrescente(&num1, &num2, &num3);
		printf("\n\tOs números em ordem decrescente ficam: [%d] [%d] [%d]", num1, num2, num3);
		
	} else if (resp == 3) {
		calcula_delta();
	} else {
		printf("Você encerrou o programa");
	}
	
	return 0;
}

