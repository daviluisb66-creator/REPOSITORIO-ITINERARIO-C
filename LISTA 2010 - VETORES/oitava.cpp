#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next;

    printf("Quantos termos da sequência de Fibonacci? ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");

    return 0;
}
