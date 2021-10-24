#include <iostream>
#include <cstdio>
#include <cmath>

int a,b,l;
int n,num[100];
int i,temp=0;

void Output()//输出函数
{
    std::cout<<n<<'.';
    for(i=0;i<l;i++) std::cout<<num[i];
}

int main()
{
    std::cin>>a>>b>>l;
    n=a/b;//整数部分计算
    for(i=0;i<l;i++)//小数部分计算
    {
        temp=a%b;
        num[i]=10*temp/b;temp=10*temp%b;
    }
    Output;
    return 0;
}