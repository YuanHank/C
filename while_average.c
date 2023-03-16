#include <stdio.h>
int main(){
    int InputNumber;
    double average;
    double sum = 0.0;
    int Count = 0;
    char Check  = 'y';

    while(Check != 'n'){
        printf("please input your number:");
        scanf(" %d",&InputNumber);
        sum = sum + InputNumber;
        Count += 1;
        printf("Is there more Numbers to sum up? (y/n)\n");
        scanf(" %c",&Check);  
    }
    average = sum / Count;
    printf("your average of input numbers is %f",average);
    return 0;
}