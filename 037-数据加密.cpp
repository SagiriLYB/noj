#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n[4]={0,0,0,0};
    int num=0;
    cin>>num;
    for(auto &a:n)
    {
        a=num%10;num/=10;
        a=(a+5)%10;
    }
    for(auto a:n) cout<<a;
    return 0;
}