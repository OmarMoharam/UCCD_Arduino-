#include<stdio.h>

void main()
{
    int num;
    printf("Please enter number: ");
    scanf(" %d",&num);

    if ((num%2) == 0)
    {
        printf("Number is EVEN");
    }
    else
    {
        printf("Number is ODD");
    }



}