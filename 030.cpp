#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int N[10];
int i1,i2,i3;
int n;
int temp;

void In(int n)//转换为数组
{
    for(i1=0;n>0;i1++)
    {
        N[i1]=n%10;
        n/=10;
    }
    temp=i1;
}

int Cal()//统计1数量
{
    int t=0;
    for(i2=0;i2<temp;i2++)
    {
        if(N[i2]==1) t++;
    }
    return t;
}

int main()
{
    cin>>n;
    int sum=0;
    for(i3=1;i3<=n;i3++)
    {
        In(i3);
        sum=sum+Cal();
    }
    cout<<sum;
    return 0;
}