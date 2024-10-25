#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	Como alocar um vetor dinâmico?
*/

int main() {
	int i, tam, *vet, num;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tam);
	srand(time(NULL));
	
	vet = malloc(tam * sizeof(int)); // Aloca o vetor dinamicamente
	
	if (vet) {
		printf("Memória alocada com sucesso!\n");
		
		// Preencher o vetor
		for (i = 0; i < tam; i++) {
			//printf("Digite o %dº valor inteiro: ", i+1);
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
		printf("Erro ao alocar memória!\n");
	}
	
	free(vet); // Libera a memória alocada
	
	return 0;
}

