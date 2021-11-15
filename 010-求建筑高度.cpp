#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

int main()
{
    float x,y;
    scanf("%f,%f",&x,&y);
    x=fabs(x),y=fabs(y);
    x=x-2,y=y-2;
    x=pow(x,2),y=pow(y,2);
    if((x+y)>1)
    {
        printf("0");
    }
    else
    {
        printf("10");
    }
    return 0;
}