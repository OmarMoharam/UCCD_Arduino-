#include<stdio.h>

void main (){

    int multi, counter;
    printf("Enter the number to display its multiplivation table: ");
    scanf(" %d",&multi);
    counter = 1;

    while (counter <= multi)
    {
        printf("%d x %d = %d\n",multi, counter, multi*counter);
        counter++;
    }
}