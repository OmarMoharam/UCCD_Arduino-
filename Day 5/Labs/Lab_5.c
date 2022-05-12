#include<stdio.h>

int binary_search(int arr[],int element,int low ,int high);

void main()
{
    int arr[10] , temp, element, res;
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
    printf("Please Enter the value: ");
    scanf(" %d",&element);
    res = binary_search(arr,element,0 ,9);
    if (res != -1)
    {
        printf("Value Found");
    }
    else if (res == -1)
    {
        printf("Value not exist");
    }
    
}

int binary_search(int arr[],int element,int low ,int high)
{
    int mid;
    mid = low + (high - low) / 2;
    if (low > high)
    {
        return -1;
    }
    if (arr[mid] == element )
    {
        return mid;
    }
    else if (arr[mid] > element)
    {
        return binary_search(arr,element, low ,mid - 1);
    }
    else if (arr[mid] < element)
    {
        return binary_search(arr,element,mid + 1 ,high);
    }
}