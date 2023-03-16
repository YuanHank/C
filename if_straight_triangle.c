#include <stdio.h>
int main(){
    int length1,length2,length3;
    printf("print insert three lengths for triangle:");
    scanf("%d%d%d",&length1,&length2,&length3);
    if (length1^2+length2^2 == length3^2 || length1^2+length3^2 == length2^2 || length2^2+length3^2 == length1^2){
        printf("this triangle is straight triangle!");
    }
    else {
        printf("this triangle is not straight triangle!");
    }
    return 0;
}