#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], intercalado[10];

    printf("Digite 5 números para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 números para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < 5; i++) {
        intercalado[2 * i] = vetor1[i];
        intercalado[2 * i + 1] = vetor2[i];
    }

    printf("Vetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", intercalado[i]);
    }
    printf("\n");

    return 0;
}
