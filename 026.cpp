#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Judge(int n)//判断是否存在素数
{
    int i;
    for(i=2;i<n;++i)
    {
        if(n%i==0) return 0;//为合数
    }
    return 1;//为素数
}

int main()