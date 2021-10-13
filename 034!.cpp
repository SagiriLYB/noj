#include <iostream>
using namespace std;

int Judge(int n1,int n2)
{
    int t,sum;
    for(t=2;t<n1;t++)
    {
        if(n1%t==0)
        {
            sum=sum+t;
        }
    }
    if(sum==n2) return 1;
    return 0;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(Judge(n1,n2)==1) cout<<"yes"<<endl;
    return 0;
}