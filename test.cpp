#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    double a,b,c,x,z;
    scanf("%lf%lf%lf",&a,&b,&c);
    x=a+b+c;
    z=(a+b+c)/3;
    printf("%lf\n%lf\n",x,z);
    return 0;
}