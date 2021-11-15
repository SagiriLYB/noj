#include <iostream>
using namespace std;

int Judge(int n1,int n2)
{
    int t,sum1,sum2;
    for(t=1;t<n1;t++)
    {
        if(n1%t==0)
        {
            sum1=sum1+t;
        }
    }
    for(t=1;t<n2;t++)
    {
        if(n2%t==0)
        {
            sum2=sum2+t;
        }
    }
    if(sum1==n2||sum2==n1) return 1;
    else return 0;
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    if(Judge(n1,n2)==1) cout<<"YES"<<endl;
    else printf("NO");
    return 0;
}