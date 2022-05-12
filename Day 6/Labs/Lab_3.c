#include <stdio.h>
#include <stdlib.h>

int Sum (int *num1,int *num2);
int Sub (int *num3,int *num4);



int main()
{
    int x ,y ;
    printf("enter value 1 :");
    scanf(" %d",&x);
    printf("enter value 2 :");
    scanf(" %d",&y);
    Sum(&x,&y);
    Sub(&x,&y);


}
int Sum (int *num1,int *num2){
    int sum;
    sum = *num1 +*num2;
    printf("the result of sum is = %d\n",sum);

}
int Sub (int *num3,int *num4){
    int sub;
    sub = *num3 -*num4;
    printf("the result of sub is = %d\n",sub);

}
