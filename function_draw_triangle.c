#include <stdio.h>

void draw_triangle(int);

int main(){
    int height;
    printf("Please insert your height for triangle:");
    scanf(" %d",&height);
    draw_triangle(height);
    return 0;
}

void draw_triangle(int a){
    int time;
    for (int i=1;i<=a;i++){
        time = 0;
        while (time != i)
        {
            printf("*");
            time += 1;
        }
        printf("\n");
    }
}