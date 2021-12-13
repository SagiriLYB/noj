#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int i,a=6;
    int sum=0;
    for(a=5;a<=100;a++)
    {
        sum=0;
        for(i=1;i<=a/2;i++)
    {
        if(a%i==0)
            sum+=i;//cout<<i<<'-'<<sum<<' ';
        if(sum==a) cout<<sum<<' ';
    }
    }
}