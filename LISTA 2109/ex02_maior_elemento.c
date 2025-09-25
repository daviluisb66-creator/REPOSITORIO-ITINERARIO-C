#include <stdio.h>

int main() {
    int m[4][4] = {{3,2,7,9},{5,1,0,4},{6,11,8,10},{12,13,14,15}};
    int maior = m[0][0];

    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            if(m[i][j] > maior)
                maior = m[i][j];

    printf("Maior elemento = %d\n", maior);
    return 0;
}