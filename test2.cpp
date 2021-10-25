#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int a,b,l;
int n,num[100];
int i,temp=0;

int main()
{
    cin>>a>>b>>l;
    n=a/b;//整数部分计算
    cout<<"n="<<n<<endl;
    temp=a%b;
    for(i=0;i<l;i++)//小数部分计算
    {
        num[i]=10*temp/b;temp=10*temp%b;
        cout<<"temp="<<temp<<endl;
    }
    if(num[l-1]>=5) num[l-1]+=1;
    for(i=0;i<l;i++) cout<<num[i]<<endl;
    return 0;
}