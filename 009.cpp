
#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int g;
    scanf("%d",&g);
    if(g<60) printf("E");
    else if(g<70&&g>60) printf("D");
    else if(g<80&&g>70) printf("C");
    else if(g<90&&g>80) printf("B");
    else if(g<100&&g>90) printf("A");
    else printf("invaild value");
    return 0;
}