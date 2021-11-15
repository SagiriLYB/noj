#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

long double N(long int t)//计算单项值
{
    long double n;
    n=1.0/pow(t,2);
    return n;
}

int main()
{
    long int n1,n2,t;long double sum=0;
    cin>>n1>>n2;
    for(t=n1;t<=n2;t++)
    {
        sum=N(t)+sum;
    }
    cout<<setprecision(5)<<sum;
    return 0;
}