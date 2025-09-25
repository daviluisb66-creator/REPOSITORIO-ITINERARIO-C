#include <stdio.h>

int main() {
    int codigo, quantidade;
    double valordopagamento;

    printf("=== CARDÁPIO ===\n");
    printf("1 - Cachorro quente   R$ 5.00\n");
    printf("2 - X-Salada          R$ 3.50\n");
    printf("3 - X-Bacon           R$ 4.80\n");
    printf("4 - Torrada simples   R$ 8.90\n");
    printf("5 - Refrigerante      R$ 7.32\n\n");

    printf("Digite o código do produto: ");
    if (scanf("%d", &codigo) != 1) {
        printf("Entrada inválida!\n");
        return 1;
    }

    printf("Digite a quantidade: ");
    if (scanf("%d", &quantidade) != 1 || quantidade <= 0) {
        printf("Quantidade inválida!\n");
        return 1;
    }

    switch (codigo) {
        case 1:
            valordopagamento = 5.00 * quantidade;
            break;
        case 2:
            valordopagamento = 3.50 * quantidade;
            break;
        case 3:
            valordopagamento = 4.80 * quantidade;
            break;
        case 4:
            valordopagamento = 8.90 * quantidade;
            break;
        case 5:
            valordopagamento = 7.32 * quantidade;
            break;
        default:
            printf("Código inexistente!\n");
            return 1;
    }

    printf("Você irá pagar: R$ %.2lf\n", valordopagamento);
    return 0;
}
