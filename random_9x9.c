#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int count,random,row,col,t;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            random = rand() % 9;
            row = random / 3;
            col = random % 3;
            t = matrix[i][j];
            matrix[i][j] = matrix[row][col];
            matrix[row][col] = t;
        }

    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}