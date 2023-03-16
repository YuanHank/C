// not finished yet
#include <stdio.h>
#include <stdbool.h>

int maximum(int arr[],int size){
    bool k = true;
    int count = 0;
    bool loop = false;
    int save = 0;
    while (k == true){
        if (count > size){
            count = 0;
            loop = true;
            continue;
        }
        else{
            if (loop==false && count ==0){
                save = arr[count];
            }

        }

    }
    return 0;
}

int main(){
    int numbers;
    printf("please input the amount of number you want to input:");
    scanf(" %d",&numbers);
    int arr[numbers];
    for (int i=0;i<numbers;i++){
        printf("please insert your %d number:",i+1);
        scanf(" %d",&arr[i]);

    } 
    
    return 0;
}