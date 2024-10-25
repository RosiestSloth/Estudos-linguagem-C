//Ecercício 02

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
		printf("Memória alocada com SUCESSO!\n");
		
		for (l = 0; l < tam; l++) {
			printf("Digite o %dº valor: ", l+1); 
			scanf("%d", &num);
			*(vet + l) = num;
		} 
		
		for (l = 0; l < tam; l++) {
			printf("%d \n", vet[l]);
		}
		free(vet);
		printf("Memória liberada com SUCESSO!\n");
	}
	else {
		printf("ERRO ao alocar memória!\n");
	}
	
}
