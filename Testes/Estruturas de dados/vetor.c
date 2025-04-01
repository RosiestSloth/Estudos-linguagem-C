#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Como alocar um vetor din�mico?
*/

int main() {
	int i, tam, *vet, num;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	srand(time(NULL));
	
	vet = malloc(tam * sizeof(int)); // Aloca o vetor dinamicamente
	
	if (vet) {
		printf("Mem�ria alocada com sucesso!\n");
		
		// Preencher o vetor
		for (i = 0; i < tam; i++) {
			//printf("Digite o %d� valor inteiro: ", i+1);
			//scanf("%d", &num);
			//vet[i] = num; // Preenche o vetor com os valores digitados
			*(vet + i) = rand() % 100; 
		}
		
		// Exibir os valores do vetor
		printf("\nValores no vetor:\n");
		for (i = 0; i < tam; i++) {
			printf("%d \n", vet[i]); // Exibe os valores do vetor
		}
			
	} else {
		printf("Erro ao alocar mem�ria!\n");
	}
	
	free(vet); // Libera a mem�ria alocada
	
	return 0;
}

