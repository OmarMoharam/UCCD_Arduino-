#include<stdio.h>

void main (){

    int i;
    float sum, avg, num;
    sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Number-%d: ",i);
        scanf(" %f",&num);
        sum += num;
    }
    avg = sum/10;
    printf("The sum of 10 numbers is: %d",sum);
    printf("The average is: %f",avg);
}