#include <stdio.h>

int Fibonaccic(int);
int main(){
    int number;
    printf("please input your number for Fibonaccic:");
    scanf("%d",&number);
    printf("the answer is %d",Fibonaccic(number));
    return 0;
}

int Fibonaccic(int a){
    if (a<3){
        return 1;
    }
    return Fibonaccic(a-1)+Fibonaccic(a-2);
}