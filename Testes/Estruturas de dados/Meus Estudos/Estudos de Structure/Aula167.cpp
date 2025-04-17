#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>

typedef struct {
    char nome[100];
    char sexo[1];
    int idade;
} Pessoa;

struct Pessoa2 {
    int idade;
    char sexo[1];
    char nome[100];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    Pessoa pessoa;

    struct Pessoa2 pessoa2;

    pessoa.idade = 35;
    strcpy(pessoa.nome, "Vinicius");
    strcpy(pessoa.sexo, "M");

    printf("Nome: %s\nIdade: %d\nSexo: %s\n", pessoa.nome, pessoa.idade, pessoa.sexo);

    return 0;
}