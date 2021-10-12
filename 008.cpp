
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int Y,M,D,d;
    scanf("%d-%d-%d",&Y,&M,&D);
    switch(M){
        case 1:d=0;break;
        case 2:d=31;break;
        case 3:d=59;break;
        case 4:d=90;break;
        case 5:d=120;break;
        case 6:d=151;break;
        case 7:d=181;break;
        case 8:d=212;break;
        case 9:d=243;break;
        case 10:d=273;break;
        case 11:d=304;break;
        case 12:d=334;break;
        default:printf("wrong date");
    }
    d=d+D;
    if(Y%400==0||(Y%4==0&&Y%100!=0))
    {
        if(M>2)
        {
            d++;
        }
    }
    printf("%d",d);
    return 0;
}