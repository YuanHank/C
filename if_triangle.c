#include <stdio.h>

int main(){
    int length1,length2,length3;
    printf("please input the lengths:");
    scanf("%d%d%d",&length1,&length2,&length3);
    if (length1 ==length2 && length1==length3){

        printf("this is regular triangle");
    }
    else{
        printf("this is not regular triangle");
    }
    return 0;
}