#include<stdio.h>

void main()
{
    int arr[10];
    for (int i = 0;i < 10;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    for (int j = 9;j >= 0;j--)
    {
        printf("%d\n",arr[j]);
    }
}