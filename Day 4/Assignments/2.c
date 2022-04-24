#include<stdio.h>

void main()
{
    int OprID,Op1,Op2,and,or,xor;
    float res;
    printf("Enter the operation ID: ");
    scanf(" %d",&OprID);
    if (OprID == 1 || OprID == 2 || OprID == 3 || OprID == 4 || OprID == 5 || OprID == 6 || OprID == 8 || OprID == 9)
    {
        printf("Enter the first operand:");
        scanf(" %d",&Op1);
        printf("Enter the first operand:");
        scanf(" %d",&Op2);
        if(OprID == 1)
        {
            printf("The result of Add is: %d",Op1 + Op2);
        }
        else if(OprID == 2)
        {
            printf("The result of Subtract is: %d",Op1 - Op2);
        }
        else if(OprID == 3)
        {
            printf("The result of Multiply is: %d",Op1 * Op2);
        }
        else if(OprID == 4)
        {
            printf("The result of Divide is: %d",Op1 / Op2);
        }
        else if(OprID == 5)
        {
            and = Op1 & Op2;
            printf("The result of AND is: %d",and);
        }
        else if(OprID == 6)
        {
            or = Op1 | Op2;
            printf("The result of OR is: %d",or);
        }
        else if(OprID == 8)
        {
            xor = Op1 ^ Op2;
            printf("The result of XOR is: %d",xor);
        }
        else if(OprID == 9)
        {
            printf("The result of Reminder is: %d",Op1 % Op2);
        }
        
    }
    else if (OprID == 7 || OprID == 10 || OprID == 11)
    {
        printf("Enter the operand: ");
        scanf(" %d",&Op1);
        if(OprID == 7)
        {
            printf("The result of NOT is: %d",~Op1);
        }
        else if(OprID == 10)
        {
            printf("The Operand is: %d\n",Op1--);
            printf("The result of Decrement is: %d",Op1);
        }
        else if(OprID == 11)
        {
            printf("The Operand is: %d\n",Op1++);
            printf("The result of Increment is: %d",Op1);
        }
    }
    else
    {
        printf("Invalid opration ID");
    }
}