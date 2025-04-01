#include <stdio.h>
#include <stdlib.h>

/*
Aloca��o din�mica de mem�ria com a fun��o calloc.
A diferen�a � na quantidade de par�metros 
1� param: quantidade de elementos para a aloca��o da mem�ria
2� param: definir a quantidade de bites igual na malloc()
*/

int main() {
	int *x; //ponteiro para aloca��o de mem�ria
	char *c;
	
	x = calloc(1, sizeof(int)); //utilizando 1� param, e 2� param igual o malloc
	c = calloc(1, sizeof(char)); //alocando um caractere
	
	if (x) { //Verifica��o, se retornar Null vai dar else.
		printf("Mem�ria alocada com sucesso!\n");
		printf("x: %d\n", *x); //0
		*x = 50; //adicionando valor 50 ao ponteiro
		printf("x: %d\n", *x);//50
	}
	else {
		printf("Erro ao alocar mem�ria!\n");
	}
	
	if (c) { //Verifica��o, se retornar Null vai dar else.
		printf("Mem�ria alocada com sucesso!\n");
		printf("x: %c\n", *c); // nada
		*c = 'V'; //adicionando valor 50 ao ponteiro
		printf("x: %c\n", *c);// V
	}
	else {
		printf("Erro ao alocar mem�ria!\n");
	}
	
	free(x); //Libera mem�ria alocada
	return 0;
}
