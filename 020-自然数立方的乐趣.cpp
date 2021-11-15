#include <iostream>
#include <math.h>
using namespace std;

int disp(int n)
{
    int t,sum=0;
    for(t=1;t<n;t++)
    {
        sum=sum+t;
    }
    t=0;
    for(t=1;t<n;t++)
    {
       printf("%d+",2*sum+(2*t-1));
    }
    return 2*sum+(2*t-1);
}

int main()
{
    int n;
    cin>>n;
    cout<<n<<"*"<<n<<"*"<<n<<"="<<pow(n,3)<<"="<<disp(n);
    return 0;
}