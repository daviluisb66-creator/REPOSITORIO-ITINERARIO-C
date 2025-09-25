#include <stdio.h>

int main() {
    double r, area;

    printf("Digite o raio do circulo: ");
    scanf("%lf", &r);

    area = 3.14159 * r * r;

    printf("Area = %.3lf\n", area);

    return 0;
}
