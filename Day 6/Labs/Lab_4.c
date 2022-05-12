#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={14,5,1,14,2,14};
    int sum = 0,*p;

    for (p=&a;p<=&a[5];p++){
        sum += *p;
    }
    printf("the sum is %d",sum);
}
