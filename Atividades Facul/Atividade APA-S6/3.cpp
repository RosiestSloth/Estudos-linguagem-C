#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um aluno
typedef struct {
    int matricula;
    char nome[50];
    int anoNascimento;
} Aluno;

int main() {
    int numAlunos, i;
    Aluno *alunos;

    // Lendo o n�mero de alunos
    printf("Digite o n�mero de alunos: ");
    scanf("%d", &numAlunos);

    // Alocando mem�ria para os alunos
    alunos = (Aluno *)malloc(numAlunos * sizeof(Aluno));

    if (alunos == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // Lendo os dados dos alunos
    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matr�cula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Ano de nascimento: ");
        scanf("%d", &alunos[i].anoNascimento);
    }

    // Imprimindo os dados dos alunos
    printf("\nDados dos alunos:\n");
    for (i = 0; i < numAlunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matr�cula: %d\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Ano de nascimento: %d\n", alunos[i].anoNascimento);
        printf("\n");
    }

    // Liberando a mem�ria alocada
    free(alunos);

    return 0;
}
