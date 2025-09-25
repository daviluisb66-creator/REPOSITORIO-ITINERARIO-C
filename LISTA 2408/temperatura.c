#include <stdio.h>

int main() {
    char medida;  
    double Celsius, Fahrenheit;

    printf("Digite 'C' para converter Celsius -> Fahrenheit\n");
    printf("Digite 'F' para converter Fahrenheit -> Celsius\n");
    printf("Opção: ");
    scanf(" %c", &medida);  // espaço antes de %c ignora enter/whitespace

    if (medida == 'F' || medida == 'f') {
        printf("Você escolheu converter Fahrenheit para Celsius!\n");
        printf("Qual a temperatura em Fahrenheit você quer converter? ");
        if (scanf("%lf", &Fahrenheit) != 1) {
            printf("Entrada inválida!\n");
            return 1;
        }
        double resultado = (Fahrenheit - 32.0) * 5.0 / 9.0;
        printf("Temperatura em Celsius: %.2lf °C\n", resultado);
    }
    else if (medida == 'C' || medida == 'c') {
        printf("Você escolheu converter Celsius para Fahrenheit!\n");
        printf("Qual a temperatura em Celsius você quer converter? ");
        if (scanf("%lf", &Celsius) != 1) {
            printf("Entrada inválida!\n");
            return 1;
        }
        double resultado = (Celsius * 9.0 / 5.0) + 32.0;
        printf("Temperatura em Fahrenheit: %.2lf °F\n", resultado);
    }
    else {
        printf("Opção inválida! Digite apenas C ou F.\n");
        return 1;
    }

    return 0;
}
