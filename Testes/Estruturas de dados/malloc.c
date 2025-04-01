#include <stdio.h>
#include <stdlib.h>

/*
Aloca��o din�mica de mem�ria com a fun��o malloc.
Retorna um ponteiro para a regi�o de mem�ria alocada ou NULL
*/

int main() {
	int *x; //ponteiro para aloca��o de mem�ria
	
	x = malloc(sizeof(int)); //comando malloc para aloca��o de mem�ria de acordo com o tamaho do int sizeof(int);
	
	if (x) { //Verifica��o, se retornar Null vai dar else.
		printf("Mem�ria alocada com sucesso!\n");
		printf("x: %d\n", *x); //lixo de mem�ria
		*x = 50; //adicionando valor 50 ao ponteiro
		printf("x: %d\n", *x); //50
	}
	else {
		printf("Erro ao alocar mem�ria!\n");
	}
	
	free(x); //Libera mem�ria alocada
	return 0;
}
