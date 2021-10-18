#include <iostream>
#include <cmath>
using namespace std;

int num(int a)
{
    int n;
    if(a<3) n=0;
    else if(a==3) n=1;
    else if(a==4) n=3;
    else n=2*num(a-1)+pow(2,a-4)-num(a-4);
    return n;
}

int main()
{
    int n;
    cin>>n;
    cout<<num(n);
    return 0;
}