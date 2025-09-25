#include <stdio.h>

int main() {
    double distancia, combustivel, consumo;

    printf("Digite a distancia percorrida (km): ");
    scanf("%lf", &distancia);

    printf("Digite o total de combustivel gasto (litros): ");
    scanf("%lf", &combustivel);

    consumo = distancia / combustivel;

    printf("Consumo medio = %.3lf km/l\n", consumo);

    return 0;
}
