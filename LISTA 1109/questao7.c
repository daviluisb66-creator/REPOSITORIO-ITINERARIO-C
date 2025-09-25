#include <stdio.h>

int main() {
    int vet[10], inv[10], i;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++) {
        inv[i] = vet[9 - i];
    }

    printf("Vetor invertido: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", inv[i]);
    }
    printf("\n");

    return 0;
}
