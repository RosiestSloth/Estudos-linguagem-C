#include<stdio.h>
#include<stdlib.h>

/* Como inserir no in�cio de uma lista?*/

typedef struct no {
	int valor;
	struct no *proximo;	
}No;

//Procedimento para inserir do in�cio
void inserir_no_inicio (No **lista, int num) {
	No *novo = malloc(sizeof(No));
	
	if (novo) {
		novo->valor = num;
		novo->proximo = *lista;
		*lista = novo;
	}
	else {
		printf("ERRO ao alocar mem�ria\n");
	}
}

//inserir no final da lista
void inserir_no_fim (No **lista, int num) {
	No *novo = malloc(sizeof(No));
	
	if (novo) {
		novo->valor = num;
		novo->proximo = NULL;
		
		// � o primeiro?
		if (*lista == NULL) {
			*lista = novo;
		}
		else {
			aux = *lista;
			while(aux->proximo) {
				aux = aux->proximo;
			}
			aux->proximo - novo;
		}
	}
	else {
		printf("ERRO ao alocar mem�ria\n");
	}
}

int main() {
	
	
	return 0;
}
