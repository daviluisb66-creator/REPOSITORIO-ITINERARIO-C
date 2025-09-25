#include <stdio.h>

int main() {
    double l1, l2, l3;

    printf("Qual foi a distância do seu primeiro lançamento? ");
    if (scanf("%lf", &l1) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("Qual foi a distância do seu segundo lançamento? ");
    if (scanf("%lf", &l2) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("Qual foi a distância do seu terceiro lançamento? ");
    if (scanf("%lf", &l3) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    // Verificação de valores negativos
    if (l1 < 0 || l2 < 0 || l3 < 0) {
        printf("As distâncias não podem ser negativas.\n");
        return 1;
    }

    // Descobrir o maior lançamento
    if (l1 >= l2 && l1 >= l3) {
        if (l1 == l2 && l1 == l3) {
            printf("Todos os lançamentos tiveram a mesma distância.\n");
        } else if (l1 == l2) {
            printf("O primeiro e o segundo lançamentos foram os maiores (%.2f m).\n", l1);
        } else if (l1 == l3) {
            printf("O primeiro e o terceiro lançamentos foram os maiores (%.2f m).\n", l1);
        } else {
            printf("O primeiro lançamento foi o maior (%.2f m).\n", l1);
        }
    }
    else if (l2 >= l1 && l2 >= l3) {
        if (l2 == l3) {
            printf("O segundo e o terceiro lançamentos foram os maiores (%.2f m).\n", l2);
        } else {
            printf("O segundo lançamento foi o maior (%.2f m).\n", l2);
        }
    }
    else {
        printf("O terceiro lançamento foi o maior (%.2f m).\n", l3);
    }

    return 0;
}
