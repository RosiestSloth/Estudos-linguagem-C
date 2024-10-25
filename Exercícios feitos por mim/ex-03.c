// Exercício 03

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int *vet1, *vet2, num, l, tam;
	
	printf("Digite o tamanho do Vetor desejado: ");
	scanf("%d", &tam);
	
	vet1 = malloc(tam*sizeof(int));
	vet2 = malloc(tam*sizeof(int));
	
	if (vet1) {
		printf("Primeiro vetor alocado com SUCESSO!!\n");
		if (vet2) {
			printf("Segundo vetor alocado com SUCESSO!!\n");
			
			for (l=0; l < tam; l++) {
				printf("Digite o %dº valor: ", l+1);
				scanf("%d", &num);
				*(vet1 + l) = num;
			}
			
			printf("Valores do primeiro vetor adicionados com SUCESSO!!\n");
			
			for (l=0; l < tam; l++) {
				printf("%d\n", vet1[l]);
				*(vet2 + l) = vet1[l];
			}
			
			printf("Valores do segundo vetor adicionados com SUCESSO!!\n");
			
			printf("Valores do segundo vetor: \n");
			
			for (l=0; l < tam; l++) {
				printf("%d \n", vet2[l]);
			}
			free(vet2);
			printf("Memória vet2 limpada com SUCESSO!\n");
			
		}
		free(vet1);
		printf("Memória vet1 limpada com SUCESSO!\n");
		
	}
	
	return 0;
}
