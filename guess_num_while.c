#include <stdio.h>
#include <stdlib.h>
#include <time.h>   /* 時間相關函數 */
int main() {
      /* 設定亂數種子 */
    srand( time(NULL) );
    int x = rand();
    int input;
    int count = 0;
    printf("%d\n",x);
    while(1){
        printf("please input the number you guess:");
        scanf("%d",&input);
        count += 1;
        if (input > x){
            printf("your input number is too large!\n");
            continue;
        }
        else if( input <x){
            printf("your input number is too small!\n");
            continue;
        }
        else if (input == x ){
            printf("you got the correct number!\n");
            break;
        }
    }
    printf("you use totoal %d times to guess",count);
    return 0;
}