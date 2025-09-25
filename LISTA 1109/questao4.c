#include <stdio.h>

int main() {
    int vet[20], i, pares = 0, impares = 0;

    for(i = 0; i < 20; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i] % 2 == 0) pares++;
        else impares++;
    }

    printf("Pares = %d\nImpares = %d\n", pares, impares);
    return 0;
}
