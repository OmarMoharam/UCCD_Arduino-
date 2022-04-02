#include<stdio.h>

void main()
{
    int arr[3], max;
    for (int i = 0 ; i < 3 ; i++)
    {
        printf("Enter number %d: ",i+=1);
        i-=1;
        scanf(" %d",&arr[i]);
    }
    if (arr[0]>arr[1] && arr[0]>arr[2])
    {
        printf("Maximum number is %d",arr[0]);
    }
    else if (arr[1]>arr[0] && arr[1]>arr[2])
    {
        printf("Maximum number is %d",arr[1]);
    }
    else
    {
        printf("Maximum number is %d",arr[2]);
    }
}