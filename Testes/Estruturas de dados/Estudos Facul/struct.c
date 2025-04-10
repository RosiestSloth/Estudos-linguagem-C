#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Existem dois tipos de estrutura em C

// Com typedef
typedef struct {
    int idade;
    char sexo;
    char nome[100];
} Pessoa;

// Sem typedef
struct Pessoa2 {
    int idade;
    char sexo;
    char nome[100];
};

int main() {
    // Exemplos de tipos primitivos
    int numero; // Número inteiro
    float numeroDecimal; // Decimal de menor precisão (32 bits)
    double numeroPrecisao; // Decimal de maior precisão (64 bits)
    char letra; // Um único caractere
    
    // Diferença entre as structs
    Pessoa pessoa1; // Usando typedef
    struct Pessoa2 pessoa2; // Usando struct sem typedef
    
    // Atribuição de valores à struct Pessoa (com typedef)
    pessoa1.idade = 35; // Atribuindo idade
    pessoa1.sexo = 'M'; // Atribuindo sexo
    strcpy(pessoa1.nome, "Vinicius Santos"); // Atribuindo nome (usando strcpy)

    // Atribuição de valores à struct Pessoa2 (sem typedef)
    pessoa2.idade = 40;
    pessoa2.sexo = 'M';
    strcpy(pessoa2.nome, "Luiz Filipe");

    // Imprimindo os valores da struct Pessoa (com typedef)
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);
    
    // Imprimindo os valores da struct Pessoa2 (sem typedef)
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa2.nome, pessoa2.idade, pessoa2.sexo);
    
    return 0;
}

