#include <stdio.h>

int main() {
    double glicose;

    printf("Qual seu nível de glicose (mg/dL)?\n");

    // Verificação de entrada
    if (scanf("%lf", &glicose) != 1) {
        printf("Entrada inválida. Digite apenas números.\n");
        return 1; // encerra com erro
    }

    // Verificação de valor negativo
    if (glicose < 0) {
        printf("Valor inválido. Níveis de glicose não podem ser negativos.\n");
        return 1;
    }

    // Classificação dos níveis de glicose
    if (glicose < 100) {
        printf("O seu nível de glicose está NORMAL.\n");
    }
    else if (glicose < 140) {
        printf("O seu nível de glicose está ELEVADO.\n");
    }
    else {
        printf("O seu nível de glicose indica DIABETES.\n");
    }

    return 0;
}
