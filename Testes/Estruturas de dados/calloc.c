#include <stdio.h>
#include <stdlib.h>

/*
Alocação dinâmica de memória com a função calloc.
A diferença é na quantidade de parâmetros 
1º param: quantidade de elementos para a alocação da memória
2º param: definir a quantidade de bites igual na malloc()
*/

int main() {
	int *x; //ponteiro para alocação de memória
	char *c;
	
	x = calloc(1, sizeof(int)); //utilizando 1º param, e 2º param igual o malloc
	c = calloc(1, sizeof(char)); //alocando um caractere
	
	if (x) { //Verificação, se retornar Null vai dar else.
		printf("Memória alocada com sucesso!\n");
		printf("x: %d\n", *x); //0
		*x = 50; //adicionando valor 50 ao ponteiro
		printf("x: %d\n", *x);//50
	}
	else {
		printf("Erro ao alocar memória!\n");
	}
	
	if (c) { //Verificação, se retornar Null vai dar else.
		printf("Memória alocada com sucesso!\n");
		printf("x: %c\n", *c); // nada
		*c = 'V'; //adicionando valor 50 ao ponteiro
		printf("x: %c\n", *c);// V
	}
	else {
		printf("Erro ao alocar memória!\n");
	}
	
	free(x); //Libera memória alocada
	return 0;
}
