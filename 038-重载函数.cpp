#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::pow;

double fun(double x,double a0,double a1=0,double a2=0,double a3=0)
{
    return a0+a1*x+a2*pow(x,2)+a3*pow(x,3);
}

int main()
{
    double x,a0,a1,a2,a3;int n;
    cin>>x>>n;
    switch(n)
    {
        case 0:
        cin>>a0;
        cout<<fun(x,a0);
        break;
        case 1:
        cin>>a0>>a1;
        cout<<fun(x,a0,a1);
        break;
        case 2:
        cin>>a0>>a1>>a2;
        cout<<fun(x,a0,a1,a2);
        break;
        case 3:
        cin>>a0>>a1>>a2>>a3;
        cout<<fun(x,a0,a1,a2,a3);
        break;
    }
    return 0;
}