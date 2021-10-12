#include <iostream>
#include <math.h>
using namespace std;

float An(int n)
{
    float a,b,c;
    a=pow((-1),n-1)*pow(2,n);
    b=pow(2,n)+pow((-1),n);
    c=pow(2,n+1)+pow((-1),n+1);
    return a/b/c;
}

int main()
{
    int N,t;float sum;
    cin>>N;
    for(t=1;t<=N;t++)
    {
        sum=sum+An(t);
    }
    printf("%f\n",sum);
    return 0;
}