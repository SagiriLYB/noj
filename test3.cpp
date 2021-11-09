#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int n,sum;
    int i1,i2,i3;
    for(i1=1;i1<=n;i1++)
    {
        for(i2=10;i2<=n;i2*=10)
        {
            if(n%i2==1) sum++;
            if(n/i2==1) sum++;
        }
    }
    return 0;
}