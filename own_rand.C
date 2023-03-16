#include <stdio.h>
#include <time.h>

unsigned int __next;

int rand(void){

    __next = __next * 1103515245 + 12345;
    return (__next/65536 % 32768);
}

void srand(unsigned int seed){
    __next = seed;
}

int main(){
    srand(time(NULL));
    for (int i = 0;i<10;i++){
        printf("%d\n",rand());
    }
    return 0;
}
