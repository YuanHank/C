#include <stdio.h>
int main() {
    int TotalMoney = 0;
    char order ,check;
    printf(
        "| class A | NT:100|\n"
        "| class B | NT:80|\n"
        "| class C | NT:60|\n"
        "| class D | NT:40|\n"
        "| class E | NT:20|\n"
        "| class F | NT:0 |\n"
    );
    do { 
        printf("please input your order:");
        scanf(" %c",&order);
        switch (order)
        {
        case 'A'|'a':
            TotalMoney += 100; 
            break;
        case 'B'|'b':
            TotalMoney += 80;
            break;
        case 'C'|'c':
            TotalMoney += 60;
            break;
        case 'D'|'d':
            TotalMoney += 40;
            break;
        case 'E'|'e':
            TotalMoney += 20;
            break;
        case 'F'|'f':
            TotalMoney += 0;
            break;
        default:
            printf("please input the correct order");
            break;
        }
        printf("Do you have more order to input? (y/n):");
        scanf(" %c",&check);
    } while (check =='y' | check == 'Y');
    printf("your total price is: %d",TotalMoney);
    return 0;
}