#include <stdio.h>

int main() {
    int vetor[10], soma = 0;

    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    printf("Soma dos elementos: %d\n", soma);
    return 0;
}
