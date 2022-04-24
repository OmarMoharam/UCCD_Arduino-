#include<stdio.h>

int factorial(int num);

void main()
{
    int num, result;
    printf("Enter the number: ");
    scanf(" %d",&num);
    result = factorial(num);
    printf("The factorial of %d is : %d",num,result);
}

int factorial(int num)
{
    if (num >= 1)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}