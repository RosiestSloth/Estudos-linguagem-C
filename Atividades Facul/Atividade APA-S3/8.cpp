#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipo) {
    float media;
    
    if (tipo == 'A') {
        // M�dia aritm�tica
        media = (nota1 + nota2 + nota3) / 3;
    } else if (tipo == 'P') {
        // M�dia ponderada
        media = (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else {
        printf("Tipo de m�dia inv�lido.\n");
        return -1; // Indica erro
    }
    
    return media;
}

int main() {
    float nota1, nota2, nota3, resultado;
    char tipo;
    
    printf("Digite as tr�s notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    
    printf("Digite o tipo de m�dia (A - aritm�tica, P - ponderada): ");
    scanf(" %c", &tipo); // Espa�o antes de %c para consumir espa�os em branco
    
    resultado = calcularMedia(nota1, nota2, nota3, tipo);
    
    if (resultado != -1) {
        printf("A m�dia do aluno �: %.2f\n", resultado);
    }
    
    return 0;
}
