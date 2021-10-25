#include <iostream>
#include <cstdio>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int a,b,l;
int n,num[100];
int i,temp=0;

void Output()//输出函数
{
    cout<<n<<'.';
    for(i=0;i<l;i++) cout<<num[i];
}

int main()
{
    cin>>a>>b>>l;
    n=a/b;//整数部分计算
    temp=a%b;
    for(i=0;i<l;i++)//小数部分计算
    {
        num[i]=10*temp/b;temp=10*temp%b;
    }
    if(num[l-1]>=5) num[l-1]+=1;//四舍五入
    Output();
    return 0;
}