#include <stdio.h>

int conta(int m[4][4], int num) {
    int c=0;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(m[i][j]==num) c++;
    return c;
}

int main() {
    int matriz[4][4] = {{1,2,3,4},{5,1,6,7},{8,9,1,10},{11,12,13,1}};
    int num = 1;
    printf("O numero %d aparece %d vezes\n", num, conta(matriz,num));
    return 0;
}