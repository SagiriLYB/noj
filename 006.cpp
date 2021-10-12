#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float m,s;
    scanf("%f",&m);
    if(m<=10) s=m/10;
    else if(m<=20&&m>10) s=1+(m-10)*15/200.0;
    else if(m<=40&&m>20) s=1+3.0/4+(m-20)/20.0;
    else if(m<=60&&m>40) s=1+3.0/4+1+(m-40)*3/100.0;
    else if(m<=100&&m>60) s=1+3.0/4+1+3.0/5+(m-60)*3/200.0;
    else if(m>100) s=1+3.0/4+1+3.0/5+3.0/5+(m-100)/100.0;
    printf("%f\n",s);
    return 0;
}