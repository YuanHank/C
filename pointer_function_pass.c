#include <stdio.h>

void pass_pointer(int *n){//這邊的星號為告知資料型態
    *n += 1; //這邊的星號為間接運算子
}

int main(){
    int a = 3;
    pass_pointer(&a);//函式所需要的變數為指標變數，因此傳入address
    printf("%d",a);
    return 0;
}