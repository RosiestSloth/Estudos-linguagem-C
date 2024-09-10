#include <stdio.h>
#include <unistd.h>
#include <math.h>

int main() {
	
	int c, l;
	double soma=0;
	double num[10][20];
	
	for (c=0; c<10; c++) {
		for (l=0; l<20; l++) {
			printf("Digite um número a baixo: ");
			num[c][l] = 12.5;
			num[c+1][l+1] = 9;
		}
	}
	
	for (c=0; c<10; c++) {
		for (l=0; l<20; l++) {
			if (floor(num[c][l]) == num[c][l]){
				printf("O número %.2f é inteiro.");
				soma += num[c][l];
				sleep(1);
			} else {
				printf("O número %.2f não é inteiro.");
				sleep(1);
			}
		}
	}
	printf("A soma dos valores inteiros digitados é: %d", soma);

	
	return 0;
	
}
