#include <stdio.h>

int main(){
    int region,answer;
    printf("please input the region for the question:");
    scanf(" %d",&region);
    for (int i=0;i<=region;i++){
        if (i % 3 == 2 && i % 5 == 3 && i % 7 == 2){
            printf(" %d",i);
        }
    }
    return 0;
}