#include <stdio.h>

#define ADD(x) x*x
int main( )
{
int a=4,b=6,c=7,d=ADD(a+b)*c;
printf("ADD = %d\n",ADD(a+b));
printf("d=%d",d);
return 0;
}