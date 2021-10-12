#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    float r,h,l,s,sq,vq,vz,pi;
    scanf("%f%f",&r,&h);
    pi=3.1415926;
    l=pi*2*r;
    s=pi*r*r;
    sq=4*pi*r*r;
    vq=4.0/3*pi*r*r*r;
    vz=pi*r*r*h;
    printf("%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n",l,s,sq,vq,vz);
    return 0;
}