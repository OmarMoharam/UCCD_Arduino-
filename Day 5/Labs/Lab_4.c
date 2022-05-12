#include<stdio.h>

void main()
{
    int arr[10] ,value ,count ,cond;
    cond = 0;
    count = 0;
    for (int i = 0;i < 10;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    printf("Enter the value you want to search: ");
    scanf(" %d",&value);

    while (cond<10)
    {
        if (arr[cond] == value)
        {
            count++;
        }

        cond++;
    }
    if (count == 0)
    {
        printf("Value doesn't exist");
    }
    else
    {
        printf("Value exist %d times",count);
    }
    
}