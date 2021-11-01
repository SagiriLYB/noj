#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int i1,i2,n,t=0,add=1;
    cin>>n;
    for(i2=10;i2<=n;i2*=10)
    {
        for(i1=1;i1<=n;i1++)
        {
            cout<<"i1i2="<<i1<<' '<<i2<<endl;
            if(i1%i2==1) t+=add;
            if(i1%i2==0) t++;
            if(i1>=i2) add++;
        }
    }
    cout<<t;
    return 0;
}