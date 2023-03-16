#include <stdio.h>

int main(){
    int id;
    printf("please input your ID:");
    scanf("%d",&id);
    switch (id){
        case 1:
        case 2:
        case 3:
            printf("group 1");
            break;
        case 4:
            printf("group 2");
            break;
        case 5:
            printf("group 3");
            break;
        default:
            printf("not in group");
            break;
    }
    return 0;
}