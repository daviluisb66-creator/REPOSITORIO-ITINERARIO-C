#include <stdio.h>

int main() {
    int m[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int somaP=0, somaS=0;

    for(int i=0;i<3;i++){
        somaP += m[i][i];
        somaS += m[i][2-i];
    }

    printf("Diagonal Principal = %d\n", somaP);
    printf("Diagonal Secundaria = %d\n", somaS);
    return 0;
}