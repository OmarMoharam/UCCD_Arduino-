#include<stdio.h>

void main()
{
    int arr[10] ,sum ,avg;
    sum = 0;
    for (int i = 0;i < 10;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i];
    }
    printf("Sum of array elements = %d\n",sum);
    avg = sum / 10;
    printf("Average of array elements = %d",avg);
    
}