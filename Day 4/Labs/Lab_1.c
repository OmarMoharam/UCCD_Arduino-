#include<stdio.h>

void Get_MAX(int num1, int num2);

void main()
{
    int num1, num2;
    printf("Please Enter Value 1: ");
    scanf(" %d",&num1);
    printf("Please Enter Value 2: ");
    scanf(" %d",&num2);

    Get_MAX(num1,num2);
}

void Get_MAX(int num1, int num2)
{
    if (num1 > num2){
        printf("MAX. Value is : %d",num1);
    }
    else if (num1 < num2)
    {
        printf("MAX. Value is : %d",num2);
    }
}