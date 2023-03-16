#include <stdio.h>
#include <math.h>


void bar(int []);

int main(){
    char check;
    int array_size,input_number;
    printf("This programe is used for value 0~99\nplease input your size of input array:");
    scanf("%d",&array_size);
    int count[10] ={0};
    for (int i=0;i<array_size;i++){
        printf("your %d number:",i+1);
        scanf("%d",&input_number);
        count[input_number/10] += 1;
        input_number = 0;
    }
    bar(count);
    return 0;
}

void bar(int count[]){
    for(int i=0;i<10;i++){
        int CountDown = 0;
        if (i ==0){
            printf("The amount of 00~09:");
        }
        else{
        printf("The amount of %d~%d:",i*10,(i+1)*10-1);
        }
        while (CountDown <count[i]){
            printf("*");
            CountDown++;
        }
        printf("\n");
    }
}

