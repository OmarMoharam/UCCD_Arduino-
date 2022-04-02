#include<stdio.h>

void main()
{
    int num1, num2, sum;
    while (1)
    {
        printf("Please Enter the first number: ");
        scanf(" %d",&num1);
        printf("Please Enter the second number: ");
        scanf(" %d",&num2);
        sum = num1 + num2;
        printf("The result is %d\n\n",sum);
    }
    
}