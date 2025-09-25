#include <stdio.h>

int main() {
    int vet[15], i, maior, menor;

    for(i = 0; i < 15; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &vet[i]);
    }

    maior = menor = vet[0];

    for(i = 1; i < 15; i++) {
        if(vet[i] > maior) maior = vet[i];
        if(vet[i] < menor) menor = vet[i];
    }

    printf("Maior = %d\nMenor = %d\n", maior, menor);
    return 0;
}
