# include <stdio.h>

int main(){
    char ch,ch_change;
    printf("please input your character:");
    scanf("%c",&ch);
    if (ch<91 & ch>64){
        ch_change = ch + 32;
    }
    else if (ch>96 & ch<123){
        ch_change = ch - 32;
    }
    printf("the character before change is:%c\n",ch);
    printf("the character after change is:%c\n",ch_change);
}