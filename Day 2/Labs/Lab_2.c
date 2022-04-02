#include<stdio.h>

void main()
{
    float salary, working_hours;
    printf("Please Enter Your working hours: ");
    scanf(" %f",&working_hours);
    salary = working_hours * 50;
    
    if (working_hours < 40)
    {
        salary = salary - (salary*0.1);
    }
    printf("Your Salary is %0.3f",salary);
    



}