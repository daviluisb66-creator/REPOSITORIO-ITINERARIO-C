#include <stdio.h>

int main() {
    int vet[10], i, busca, achou = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Digite o numero para buscar: ");
    scanf("%d", &busca);

    for(i = 0; i < 10; i++) {
        if(vet[i] == busca) {
            achou = 1;
            break;
        }
    }

    if(achou) printf("Numero encontrado!\n");
    else printf("Numero nao encontrado!\n");
    return 0;
}
