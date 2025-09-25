#include <stdio.h>

int main() {
    int vet[10], i, soma = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }

    printf("Soma = %d\n", soma);
    return 0;
}
