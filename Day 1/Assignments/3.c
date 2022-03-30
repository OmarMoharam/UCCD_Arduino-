#include<stdio.h>

void main(){

    int num1, num2;
    printf("Please Enter number a: ");
    scanf(" %d",&num1);
    printf("Please Enter number b: ");
    scanf(" %d",&num2);
    printf("a + b = %d: \n",num1+num2);
    printf("a - b = %d: \n",num1-num2);
    printf("a & b = %d: \n",num1&num2);
    printf("a | b = %d: \n",num1|num2);
    printf("a ^ b = %d: \n",num1^num2);
}