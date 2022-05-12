#include<stdio.h>

void main()
{
    int arr[10] ,max ,min;
    for (int i = 0;i < 10;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    min = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Max. of array elements = %d\n",max);
    printf("Min. of array elements = %d",min);
    
}