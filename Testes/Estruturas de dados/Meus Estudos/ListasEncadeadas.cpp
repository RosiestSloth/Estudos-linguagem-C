#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Toda lista vai ter um Nó
typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct  {
    No *inicio;
    int tam;
} Lista;

// Inserção no início da lista
void inserirInicio(Lista *lista, int valor) {
    No *novo = (No*)malloc(sizeof(No));
    novo->valor = valor; // (*novo).valor = valor
    (*novo).proximo = lista->inicio; // novo->valor = NULL
    lista->inicio = novo;
    lista->tam++;
}

//Imprimir a lista
void imprimir(Lista*lista) {
    No *inicio = lista->inicio;
    while(inicio != NULL) {
        printf("%d ", inicio->valor);
        inicio = inicio->proximo;
    }
    printf("\n\n");
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    Lista lista;
    int opcao, valor;

    do {
        printf("1 - Inserir no início\n2 - Imprimir\n5 - Sair");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite o valor a ser inserido: ");
            scanf("%d", &valor);
            inserirInicio(&lista, valor);
            break;
        case 2:
            imprimir(&lista);
            break;
        case 5:
            printf("Finalizando...\n");
            break;
        default:
            printf("Opção invalida!\n");
        }
    } while (opcao != 5);

    lista.inicio = NULL;
    lista.tam = 0;



    return 0;
}