#include <stdio.h>

int main() {
    int m[2][2];
    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++){
            printf("Digite m[%d][%d]: ", i,j);
            scanf("%d",&m[i][j]);
        }

    printf("Matriz:\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
    return 0;
}