#include<stdio.h>

void main()
{
    int ID, pass;
    int arr[3]={1234,5678,1478};
    printf("Enter Your ID: ");
    scanf(" %d",&ID);
    if (ID == arr[0] || ID == arr[1] || ID == arr[2] )
    {
        printf("Enter The Password: ");
        scanf(" %d",&pass);

        switch (pass)
        {
        case 0000:
            printf("Ahmed");
            break;
        case 1111:
            printf("Hani");
            break;
        case 2222:
            printf("Mina");
            break;
        default:
            printf("Incorrect Password");
            break;
        }
    }
    else
    {
        printf("Incorrect ID");
    }
    

}