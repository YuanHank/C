#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
讓使用者輸入多字串，印出使用者輸入的字串，當使用者輸入END表示結束。
*/
int main(){
    int size = 0;
    char *save = NULL;
    char input[50];
    char **str = NULL;
    int len = 0;
    while (1){
        printf("please input your word(exit() for break):");
        scanf("%s",input);
        if (strcmp(input,"exit()") == 0) break;
        size += strlen(input) + 1;
        str = realloc(str,sizeof(char)*(len +1));
        str[len] = calloc(strlen(input) + 1, sizeof(char));
        strcpy(str[len],input);
        len++;
    }
    printf("-------\n");
    int i;
    for (i =0;i<len;i++){
        printf("%s ",str[i]);
    }
    printf("\n(%d,%d)\n",len,size);
    return 0;
}

