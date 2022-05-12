#include<stdio.h>

void main()
{
    int st_class[10] = {15,50,78,60,56,89,56,10,89,92};
    int nd_class[10] = {99,62,54,65,37,98,65,25,17,25};
    int rd_class[10] = {73,56,18,73,64,28,73,90,28,73};
    int pass=0, faild=0, high=0, low=100, avg=0, sum=0;
    
    for (int i = 0; i < 10; i++)
    {
        if (st_class[i] >= 50)
        {
            pass++;
        }
        else
        {
            faild++;
        }
        if (nd_class[i] >= 50)
        {
            pass++;
        }
        else
        {
            faild++;
        }
        if (rd_class[i] >= 50)
        {
            pass++;
        }
        else
        {
            faild++;
        }
    }


    for (int i = 0; i < 10; i++)
    {
        if (high < st_class[i])
        {
            high = st_class[i];
        }
        if (high < nd_class[i])
        {
            high = nd_class[i];
        }
        if (high < rd_class[i])
        {
            high = rd_class[i];
        }
    }


    for (int i = 0; i < 10; i++)
    {
        if (low > st_class[i])
        {
            low = st_class[i];
        }
        if (low > nd_class[i])
        {
            low = nd_class[i];
        }
        if (low > rd_class[i])
        {
            low = rd_class[i];
        }
    }


    for (int i = 0; i < 10; i++)
    {
        sum += st_class[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum += nd_class[i];
    }

    for (int i = 0; i < 10; i++)
    {
        sum += rd_class[i];
    }

    avg = sum / 30;
    
    printf("Number of passed students: %d\n",pass);
    printf("Number of faild students: %d\n",faild);
    printf("Highest Grade: %d\n",high);
    printf("Lowest Grade: %d\n",low);
    printf("Average Grade: %d\n",avg);
}
