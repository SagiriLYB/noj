#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int N[5]={2,5,-1,2,-1};
int n=5,i,mul;

int main()
{
    cout<<endl<<endl<<endl;
    int n1,n2,mul=1,temp=1;
    for(n1=0;n1<n;n1++)
    {
        for(n2=n-1;n2>n1;n2--)
        {
            temp=1;
            for(i=n1;i<=n2;i++)
            {
                temp=temp*N[i];
            }
            if(mul<temp)
            {
                mul=temp;
            }
            cout<<endl<<"temp="<<temp<<endl;
            cout<<"n1,n2="<<n1<<n2<<endl;
        }
    }
    cout<<endl<<mul;
}