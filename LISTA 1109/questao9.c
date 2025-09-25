#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[10], i, j = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o %dº numero do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(i = 0; i < 5; i++) {
        printf("Digite o %dº numero do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }

    printf("Vetor intercalado: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
