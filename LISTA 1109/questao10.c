#include <stdio.h>

int main() {
    int v1[5], v2[5], i, produto = 0;

    for(i = 0; i < 5; i++) {
        printf("Digite o %dº numero do vetor 1: ", i+1);
        scanf("%d", &v1[i]);
    }
    for(i = 0; i < 5; i++) {
        printf("Digite o %dº numero do vetor 2: ", i+1);
        scanf("%d", &v2[i]);
    }

    for(i = 0; i < 5; i++) {
        produto += v1[i] * v2[i];
    }

    printf("Produto escalar = %d\n", produto);
    return 0;
}
