#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int Cal(int value,int n)//循环移位
{
    if(n<0)
    {
        n=-n;
        value=(value<<n|value>>(32-n));
    }
    else

        value=(value>>n|value<<(32-n));
    return(value);
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<Cal(a,b);
    return 0;
}