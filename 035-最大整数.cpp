#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int getfloor(double a)//最大整数
{
    int b;
    if(a<int(a))b=int(a)-1;
	else b=int(a);
    return b;
}

int main()
{
    double a;
    cin>>a;
    cout<<getfloor(a);
    return 0;
}