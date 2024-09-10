#include <stdio.h>

int main() {
	int vet1[10], vet2[10], intercalado[20];
	int i, j=0, k=0;
	
	printf("\nDigite os valores do primeiro vetor a baixo: ");
	for (int i=0; i<10; i++) {
		printf("\nDigite o %d valor: ", i+1);
		scanf("%d", &vet1[i]);
	}
	
	printf("\nDigite os valores do segundo vetor a baixo: ");
	for (int i=0; i<10; i++) {
		printf("\nDigite o %d valor: ", i+1);
		scanf("%d", &vet2[i]);
	}
	
	for (int i=0; i<20; i++) {
		if (i%2 == 0) {
			intercalado[i] = vet1[j];
			j++;
		} else {
			intercalado[i] = vet2[k];
			k++;
		}
	}
	
	
	printf("Os valores interaclados são: ");
	for (int i=0; i<20; i++) {
		printf("\n\t%d ", intercalado[i]);
	}
	
	return 0;
}
