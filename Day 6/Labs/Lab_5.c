#include <stdio.h>
#include <stdlib.h>

    int multi(int *ptr1,int *ptr2);


int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    multi(arr1,arr2);

}
int multi(int *ptr1,int *ptr2){
    int mult;
    for(int i=0;i<=4;i++){
        mult+=ptr1[i]*ptr2[i];
    }
    printf("the scalar multiplication = %d",mult);

}
