#include <iostream>
#include <math.h>
using namespace std;

int cal(int n)
{
    int t;
    for(t=0;n!=0;t++)
    {
        n/=10;
    }
    return t;
}

int main()
{
    int n;
    cin>>n;
    printf("%d\n",cal(n));
    return 0;
}