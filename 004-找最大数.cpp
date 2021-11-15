#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A>B)A=B;
    if(C>A)A=C;
    printf("%d",C);
    return 0;
}