#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float math,english,c,total,average;
    scanf("%f%f%f",&math,&english,&c);
    total=math+english+c;
    average=math/3+english/3+c/3;
    printf("%.6f\n%.6f\n%",total,average);
    return 0;
}