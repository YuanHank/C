#include <stdio.h>
#include <stdlib.h>




int print_two_dimensional(int **p,int height,int wide){
    for (int i = 0;i<height;i++){
        for (int j = 0; j<wide;j++){
            printf("%d",p[i][j]);
        }
    printf("\n");
    }

};

int main(){
    int A[2][3] = {{1,2,3},{4,5,6}};
    int *p[2] = {A[0],A[1]};
    //printf("%d",*p[0]);
    print_two_dimensional(p,2,3);
    return 0;
}