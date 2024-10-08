/*Fa�a um Algoritmo que solicite ao usu�rio a quantidade de itens que deseja inserir na lista. 
O Algoritmo dever� armazenar o c�digo do item, 
o nome do item a quantidade em estoque e o valor do item. 
O algoritmo dever� armazenar esses dados em uma estrutura de lista encadeada
e dever� imprimir todos os dados e o valor total de cada item inserido na lista. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um item
typedef struct Item {
    int codigo;
    char nome[50];
    int quantidade;
    float valor;
    struct Item *proximo;
} Item;

// Fun��o para criar um novo n� (item)
Item* criar_item(int codigo, char *nome, int quantidade, float valor) {
    Item *novo = (Item*) malloc(sizeof(Item));
    if (novo == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        exit(1);
    }
    novo->codigo = codigo;
    strcpy(novo->nome, nome);
    novo->quantidade = quantidade;
    novo->valor = valor;
    novo->proximo = NULL;
    return novo;
}

// Fun��o para inserir um item no in�cio da lista
void inserir_inicio(Item **lista, Item *novo) {
    novo->proximo = *lista;
    *lista = novo;
}

// Fun��o para imprimir a lista
void imprimir_lista(Item *lista) {
    Item *atual = lista;
    while (atual != NULL) {
        printf("C�digo: %d\nNome: %s\nQuantidade: %d\nValor unit�rio: %.2f\nValor total: %.2f\n\n",
               atual->codigo, atual->nome, atual->quantidade, atual->valor, atual->quantidade * atual->valor);
        atual = atual->proximo;
    }
}

int main() {
    int qtd_itens;
    Item *lista = NULL;

    printf("Digite a quantidade de itens: ");
    scanf("%d", &qtd_itens);

    for (int i = 0; i < qtd_itens; i++) {
        int codigo, quantidade;
        float valor;
        char nome[50];

        printf("\nItem %d:\n", i + 1);
        printf("C�digo: ");
        scanf("%d", &codigo);
        printf("Nome: ");
        scanf("%s", nome);
        printf("Quantidade: ");
        scanf("%d", &quantidade);
        printf("Valor: ");
        scanf("%f", &valor);

        Item *novo = criar_item(codigo, nome, quantidade, valor);
        inserir_inicio(&lista, novo);
    }

    printf("\nLista de itens:\n");
    imprimir_lista(lista);

    // Liberando a mem�ria
    Item *atual = lista;
    while (atual != NULL) {
        Item *proximo = atual->proximo;
        free(atual);
        atual = proximo;
    }

    return 0;
}
