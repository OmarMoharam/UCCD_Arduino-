#include<stdio.h>

void main()
{
    int arr[10] , temp;
    for (int i = 0;i < 10;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    for (int m = 0; m < 10; m++)
    {
        for (int j = 1; j <= 9; j++)
        {
            if (arr[j-1] > arr[j])
            {
            temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            }
        }
        
    }
    for (int k = 0;k < 10;k++)
    {
        printf("%d\n",arr[k]);
    }
    
}