//Ecerc�cio 02

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int tam, *vet, l, num;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vet = malloc(tam*sizeof(int));
	
	if (vet) {
		printf("Mem�ria alocada com SUCESSO!\n");
		
		for (l = 0; l < tam; l++) {
			printf("Digite o %d� valor: ", l+1); 
			scanf("%d", &num);
			*(vet + l) = num;
		} 
		
		for (l = 0; l < tam; l++) {
			printf("%d \n", vet[l]);
		}
		free(vet);
		printf("Mem�ria liberada com SUCESSO!\n");
	}
	else {
		printf("ERRO ao alocar mem�ria!\n");
	}
	
}
