#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int N[17];
int n,i,mul;

int main()
{
    //输入部分
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>N[i];
    }

    //计算部分
    int n1,n2,mul=1,temp;
    for(n1=0;n1<n;n1++)
    {
        for(n2=n-1;n2>n1;n2--)
        {
            temp=1;//复位缓存
            for(i=n1;i<=n2;i++) temp*=N[i];
            if(mul<temp) mul=temp;
        }
    }
    if(mul<0) mul=-1;
    cout<<mul;
    return 0;
}