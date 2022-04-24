#include<stdio.h>

void Get_MAX(int num1, int num2, int num3, int num4);
void Get_MIN(int num1, int num2, int num3, int num4);

void main()
{
    int num1, num2, num3, num4;
    printf("Please Enter Value 1: ");
    scanf(" %d",&num1);
    printf("Please Enter Value 2: ");
    scanf(" %d",&num2);
    printf("Please Enter Value 3: ");
    scanf(" %d",&num3);
    printf("Please Enter Value 4: ");
    scanf(" %d",&num4);


    Get_MAX(num1,num2,num3,num4);
    Get_MIN(num1,num2,num3,num4);
}

void Get_MAX(int num1, int num2, int num3, int num4)
{
    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        printf("MAX. Value is : %d\n",num1);
    }
    else if (num2 > num3 && num2 > num4)
    {
        printf("MAX. Value is : %d\n",num2);
    }
    else if (num3 > num4)
    {
        printf("MAX. Value is : %d\n",num3);
    }
    else
    {
        printf("MAX. Value is : %d\n",num4);
    }
}

void Get_MIN(int num1, int num2, int num3, int num4)
{
    if (num1 < num2 && num1 < num3 && num1 < num4)
    {
        printf("MIN. Value is : %d\n",num1);
    }
    else if (num2 < num3 && num2 < num4)
    {
        printf("MIN. Value is : %d\n",num2);
    }
    else if (num3 < num4)
    {
        printf("MIN. Value is : %d\n",num3);
    }
    else
    {
        printf("MIN. Value is : %d\n",num4);
    }
}