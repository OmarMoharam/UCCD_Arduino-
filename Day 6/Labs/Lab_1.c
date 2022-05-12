#include<stdio.h>

void main()
{
    int x = 10;
    int * ptr =&x;
    printf("X before change is %d\n",x);
    * ptr = 20;
    printf("X after change is %d",x);
}