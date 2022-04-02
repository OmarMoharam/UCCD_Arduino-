#include<stdio.h>

void main (){

    int num,factoril,counter;
    printf("Enter an integer: ");
    scanf(" %d",&num);

    counter = 1;
    factoril = 1;
    while (num >= counter)
    {
        factoril = factoril*counter;
        counter++;
    }
    printf("Factorial = %d",factoril);
}