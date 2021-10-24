#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int a,b,l;
int n,num[100];
int i,temp=0,o;

int main()
{
    cin>>a>>b>>l;
    n=a/b;//整数部分计算
    for(i=0;i<l;i++)//小数部分计算
    {
        temp=a%b;
        cout<<temp<<endl;
        num[i]=10*temp/b;temp=10*temp%b;
        cout<<temp<<' '<<i<<' ';
        for(o=0;o<l;o++) cout<<num[o];
    }
    return 0;
}