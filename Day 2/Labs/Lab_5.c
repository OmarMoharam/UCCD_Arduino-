#include<stdio.h>

void main()
{
    int ID;
    printf("Enter Your ID: ");
    scanf(" %d",&ID);

    switch (ID)
    {
    case 1234:
        printf("Ahmed");
        break;
    case 5678:
        printf("Youssef");
        break;
    case 1145:
        printf("Mina");
        break;
    default:
        printf("Wrong ID");
        break;
    }
}