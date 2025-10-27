#include <stdio.h>

int main() {
    int vetor[15];

    printf("Digite 15 números inteiros:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &vetor[i]);
    }

    int maior = vetor[0], menor = vetor[0];
    for (int i = 1; i < 15; i++) {
        if (vetor[i] > maior) maior = vetor[i];
        if (vetor[i] < menor) menor = vetor[i];
    }

    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return 0;
}
