#include<stdio.h>

void main (){

    int res;
    printf("Enter the answer of 3 x 4 = ");
    scanf(" %d",&res);
    while (res != 12)
    {
        printf("Not Correct. please try again: ");
        scanf(" %d",&res);
    }
    printf("Thank You.");
}