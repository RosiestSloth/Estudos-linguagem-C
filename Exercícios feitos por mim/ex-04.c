#include <stdio.h>
#include <string.h>

int main() {
    char src[10] = "Exemplo";
    char dest[10];

    // Copia 8 bytes de src para dest (7 caracteres + '\0')
    memcpy(dest, src, 8);

    printf("Cópia de src para dest: %s\n", dest);
    return 0;
}

