#include <stdio.h>
#include <stdio.h>

int main() {
    double A, B, C;
    double areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite as medidas A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = ((A + B) * C) / 2.0;

    printf("AREA QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA TRAPEZIO = %.4lf\n", areaTrapezio);

    return 0;
}
