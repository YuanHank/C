#include <stdio.h>

int main(){
    int height;
    printf("please input your height for rectangle:");
    scanf(" %d",&height);

    for (int i=1; i<=height*height;i++){
        if (i % height == 0){
            printf("*\n");
        }
        else {
            printf("*");
        }
    }
    return 0;
}