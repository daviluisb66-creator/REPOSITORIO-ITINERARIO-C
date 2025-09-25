#include <stdio.h>

int main() {
    int primeironumero, segundonumero;

    printf("Digite o primeiro número: ");
    if (scanf("%d", &primeironumero) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("Digite o segundo número: ");
    if (scanf("%d", &segundonumero) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    if (segundonumero == 0 || primeironumero == 0) {
        printf("Não é possível verificar múltiplos com zero.\n");
    }
    else if (primeironumero % segundonumero == 0 || segundonumero % primeironumero == 0) {
        printf("%d e %d são múltiplos.\n", primeironumero, segundonumero);
    }
    else {
        printf("%d e %d não são múltiplos.\n", primeironumero, segundonumero);
    }

    return 0;
}
