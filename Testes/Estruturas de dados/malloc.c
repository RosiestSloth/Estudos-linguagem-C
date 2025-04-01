#include <stdio.h>
#include <stdlib.h>

/*
Alocação dinâmica de memória com a função malloc.
Retorna um ponteiro para a região de memória alocada ou NULL
*/

int main() {
	int *x; //ponteiro para alocação de memória
	
	x = malloc(sizeof(int)); //comando malloc para alocação de memória de acordo com o tamaho do int sizeof(int);
	
	if (x) { //Verificação, se retornar Null vai dar else.
		printf("Memória alocada com sucesso!\n");
		printf("x: %d\n", *x); //lixo de memória
		*x = 50; //adicionando valor 50 ao ponteiro
		printf("x: %d\n", *x); //50
	}
	else {
		printf("Erro ao alocar memória!\n");
	}
	
	free(x); //Libera memória alocada
	return 0;
}
