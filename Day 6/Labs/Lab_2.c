#include <stdio.h>
#include <stdlib.h>

int sum(int *num1 ,int *num2);

int main()
{
    int x,y;
    printf("please enter number 1 :");
    scanf(" %d",&x);
    printf("please enter number 2 :");
    scanf(" %d",&y);
    sum(&x,&y);
}

int sum(int *num1 ,int *num2){
 int sum;
 sum = *num1 + *num2;
printf("the sum is : %d",sum);

}
