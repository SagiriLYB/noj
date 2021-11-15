
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    float d,p,dr;
    scanf("%f",&d);
    if(d<=2&&d>0) p=7;
    else if(d<=15&&d>2) p=1.5*(ceil(d)-2)+7;
    else if(d>15) p=2.1*(ceil(d)-15)+7+1.5*13;
    printf("%f\n",p);
    return 0;
}