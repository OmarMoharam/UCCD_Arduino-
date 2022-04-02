#include<stdio.h>


void main()
{
    int grade;
    printf("Enter your grade: ");
    scanf(" %d",&grade);
    if (grade >= 0 && grade < 50)
    {
        printf("Your rating is Faild");
    }
    else if (grade >= 50 && grade < 65)
    {
        printf("Your rating is Normal");
    }
    else if (grade >= 65 && grade < 75)
    {
        printf("Your rating is Good");
    }
    else if (grade >= 75 && grade < 85)
    {
        printf("Your rating is Very Good");
    }
    else
    {
        printf("Your rating is Excellent");
    }
}