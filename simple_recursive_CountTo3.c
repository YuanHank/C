#include <stdio.h>

void count(int,int);


int main(){
    int start,end;
    printf("Please input your start and end numbers:\nstart:");
    scanf("%d",&start);
    printf("end:");
    scanf("%d",&end);
    printf("start counting:\n");
    count(start,end);
    return 0;
}

void count(int start, int end){
    if (start > end){
        printf("end!!");
        return;
    }
    printf("%d\n",start);
    count(start += 1,end);
}