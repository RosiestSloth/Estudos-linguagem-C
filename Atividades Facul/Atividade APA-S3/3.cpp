#include <stdio.h>
#include <unistd.h>

int main() {
	int valores[8], negativos[8], positivos[8], somap=0, soman=0;
	
	printf("Digite os valores a baixo");
	for (int i=0; i<8; i++) {
		printf("Digite o valor %d: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	for (int i=0; i<8; i++) {
		if (valores[i] < 0) {
			
			printf("\n\tValor negativo adicionado!");
			negativos[soman] = valores[i];
			soman++;
		} else {
			printf("\n\tValor positivo adicionado!");
			positivos[somap] = valores[i];
			somap++;
			
		}
		sleep(1);
	}
	printf("\nForam adicionados %d valores positivos.", somap);
	printf("\nForam adicionados %d valores negativos.", soman);
	
	printf("\n---  Valores Positivos  ---");
	for (int i=0; i<somap; i++) {
		printf("\n[%d] - %d", i+1, positivos[i]);
	}
	
	printf("\n---  Valores Negativos  ---");
	for (int i=0; i<soman; i++) {
		printf("\n[%d] - %d", i+1, negativos[i]);
	}
	
	return 0;
}
