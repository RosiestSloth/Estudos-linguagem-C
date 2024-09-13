#include <stdio.h>
#include <stdlib.h>

int main() {
    int numAlunos;
    float *notas;
    float soma = 0.0;
    float media;

    // Solicita a quantidade de alunos
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &numAlunos);

    // Aloca dinamicamente um vetor de notas
    notas = (float*) malloc(numAlunos * sizeof(float));

    if (notas == NULL) {
        printf("Erro ao alocar mem�ria.\n");
        return 1;
    }

    // L� as notas dos alunos
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula a m�dia
    media = soma / numAlunos;

    // Imprime a m�dia
    printf("A m�dia da turma �: %.2f\n", media);

    // Libera a mem�ria alocada
    free(notas);

    return 0;
}
