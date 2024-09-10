#include <stdio.h>
#include <unistd.h> 

int main() {
	int matriz[10][20], soma[10]={0}, c, l, s;
	
	for (c=0; c<10; c++){
		printf("Digite os valores da %dº coluna: \n", c);
		for (l=0; l<20; l++){
			printf("%d: ", l);
			scanf("%d", matriz[c][l]);
		}
	}
	
	for (c=0; c<10; c++) {
		for (l=0; l<20; l++) {
			soma[c] += matriz[c][l];
		}
	}
	
	printf("A soma das linhas são: ");
	for (s=0; s<10; s++) {
		printf("\n\tColuna %d", soma[s]);
		sleep(1);
	}
	
	return 0;
}
