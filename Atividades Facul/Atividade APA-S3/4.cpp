#include <stdio.h>
#include <unistd.h> 

int main() {
    int c, l, p;
    float preco[8][4];
    char lojas[8][50], produtos[4][50];
    
    for (c = 0; c < 8; c++) {
        printf("Digite o nome da %dª loja: ", c + 1);
        scanf("%s", lojas[c]);
    }
    
    printf("\nDigite os nomes dos produtos.\n");
    for (c = 0; c < 4; c++) {
        printf("Digite o nome do %dº produto: ", c + 1);
        scanf("%s", produtos[c]);
    }
 
    for (l = 0; l < 8; l++) {
        printf("\nDigite os valores da Loja %s:\n", lojas[l]);
        for (p = 0; p < 4; p++) {
            printf("Digite o valor do produto %s: ", produtos[p]);
            scanf("%f", &preco[l][p]);
        }
    }

    printf("\nRecebendo valores...\n");
    sleep(1.5);
    
    for (l = 0; l < 8; l++) {
        printf("\nOs valores da loja %s:\n", lojas[l]);
        for (p = 0; p < 4; p++) {
            printf("Produto %s: R$ %.2f\n", produtos[p], preco[l][p]);
            sleep(0.5);
        }
    }
    
    printf("\nObrigado por utilizar :)\n");
    sleep(3);
    
    return 0;
}

