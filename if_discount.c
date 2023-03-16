# include <stdio.h>

int main(){
    int costumer;
    float cost;
    printf("please input the costumer number:");
    scanf("%d",&costumer);
    if (costumer*300>=3000){
        cost = costumer *300 * 0.8;
    }
    else if (costumer*300<3000){
        cost = costumer*300.0;
    }
    printf("total cost is %f",cost);
    return 0;
}