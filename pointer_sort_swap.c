#include <stdio.h>

void swap(int *a,int *b), sort(int *a,int *b);

int main(){
    int a,b;
    printf("please input your first and second number:");
    scanf(" %d%d",&a,&b);
    sort(&a,&b);
    printf("your smaller number is %d,the bigger number is %d",a,b);
    return 0;
}

void sort(int *a,int*b){
    if (*a > *b){
        swap(a,b);//注意這邊的傳入值，不能只傳入&a,&b，因為這兩個值存的是記憶體位置，因此需要先用間接運算子，touch到原本的值再傳送該值的記憶體，or 直接傳入a,b(因為已經是記憶體位置)
    };
}

void swap(int *a,int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}