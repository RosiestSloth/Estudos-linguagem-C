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
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Lê as notas dos alunos
    printf("Digite as notas dos alunos:\n");
    for (int i = 0; i < numAlunos; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula a média
    media = soma / numAlunos;

    // Imprime a média
    printf("A média da turma é: %.2f\n", media);

    // Libera a memória alocada
    free(notas);

    return 0;
}
