#include <stdio.h>

int main(){
    int input_num;
    char check = 'y';
    printf("please input the number you want to check for prime:");
    scanf(" %d",&input_num);
    for (int i = 2; i*i<input_num;i++){
        if (input_num % i == 0){
            check = 'n';
            break;
        }
    }
    if (check == 'y'){
        printf("input number is prime!");
    }
    else if (check == 'n'){
        printf("input nubmer is not prime!");
    }
    return 0;
}