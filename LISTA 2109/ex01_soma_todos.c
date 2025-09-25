#include <stdio.h>

int somaMatriz(int m[3][3]) {
    int soma = 0;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            soma += m[i][j];
    return soma;
}

int main() {
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    printf("Soma = %d\n", somaMatriz(matriz));
    return 0;
    
}
