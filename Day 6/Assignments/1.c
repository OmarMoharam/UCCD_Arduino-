#include<stdio.h>
void bubble_sorting (int *ptr);

void main()
{
    int arr[5];
    for (int i = 0;i < 5;i++)
    {
        printf("Please Enter number %d:",i);
        scanf(" %d",&arr[i]);
    }
    bubble_sorting (arr);
    for (int m = 0;m < 5 ;m++)
    {
        printf("%d\n",arr[m]);
    }

}

void bubble_sorting (int *ptr){

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= 4-i; j++)
        {
            if (*(ptr + j) > *(ptr + j + 1))
            {
                //swapping elements
                *(ptr + j) = *(ptr + j + 1) + *(ptr + j);
                *(ptr + j + 1) = *(ptr + j) - *(ptr + j + 1);
                *(ptr + j) = *(ptr + j) - *(ptr + j + 1);
            }
        }

    }

}
