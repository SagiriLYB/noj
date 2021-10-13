#include<stdio.h>

void DAO(unsighed long n)
{
    if(n<10)
    {
        printf("%d",n);
    }
    else
    {
        printf("%d",n%10);
        n/=10;
        DAO(n);
    }
}