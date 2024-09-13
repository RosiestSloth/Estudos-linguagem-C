#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipo) {
    float media;
    
    if (tipo == 'A') {
        // Média aritmética
        media = (nota1 + nota2 + nota3) / 3;
    } else if (tipo == 'P') {
        // Média ponderada
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else {
        printf("Tipo de média inválido.\n");
        return -1; // Indica erro
    }
    
    return media;
}

int main() {
    float nota1, nota2, nota3, resultado;
    char tipo;
    
    printf("Digite as três notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    printf("Digite o tipo de média (A - aritmética, P - ponderada): ");
    scanf(" %c", &tipo); // Espaço antes de %c para consumir espaços em branco
    
    resultado = calcularMedia(nota1, nota2, nota3, tipo);
    
    if (resultado != -1) {
        printf("A média do aluno é: %.2f\n", resultado);
    }
    
    return 0;
}
