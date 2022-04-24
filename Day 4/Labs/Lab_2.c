#include<stdio.h>

int x, y;

void swap(int x,int y);

void main()
{
    printf("Enter the first value: ");
    scanf(" %d",&x);
    printf("Enter the second value: ");
    scanf(" %d",&y);
    printf("before swaping: x = %d   y = %d\n",x,y);
    swap(x,y);
}

void swap(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y;
    printf("after swaping x = %d   y = %d",x,y);
}