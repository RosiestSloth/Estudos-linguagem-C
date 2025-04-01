#include <stdio.h>

void insertionSort(int *vet, int tam) {
    int i, j;
    for (i=1; i<tam; i++) {
        int aux, j = i;
        aux = vet[j];
        while (j>0 && aux<vet[j-1]) {
            vet[j] = vet[j-1];
            j--;
        }
        vet[j] = aux;
    }
}

void insertionSortRecursivo(int vet[], int fim, int tam) {
    if (fim >= tam) return; //Encerra a recursão
    int aux, j = fim;
    aux = vet[j];
    while(j>0 && aux<vet[j-1]) { //Ordenando valores
        vet[j] = vet[j-1];
        j--;
    }
    vet[j] = aux; //Colocando o aux na posição correta
    insertionSortRecursivo(vet, fim+1, tam);
}

void imprimir(int *vet, int tam) {
    int i;
    for (i=0; i<tam; i++) {
        printf("%d, ", vet[i]);
    }
    printf("\n");
}

int main() {
    int vet[] = {7, 5, 10, 3, 9, 8, 1, 4, 2, 0, 6};
    int tam = 11;
    
    imprimir(vet, tam);
    //insertionSort(vet, tam);
    insertionSortRecursivo(vet, 1, tam);
    imprimir(vet, tam);
    
    return 0;
}