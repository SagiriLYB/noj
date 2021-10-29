#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Judge1(int n)//判断是否存在素数
{
    int i;
    for(i=2;i<n;++i)
    {
        if(n%i==0) return 0;//为合数
    }
    return 1;//为素数
}

int Judge2(int n)//判断是否为合数世纪
{
    int i;
    for(i=100*n;i<100*(n+1);i++)
    {
        if(Judge1(i)==1) return 0;//不为
    }
    return 1;//为
}

int main()
{
    int i;
    cout<<Judge2(16718)<<endl;
    cout<<Judge2(16719)<<endl;
    return 0;
}