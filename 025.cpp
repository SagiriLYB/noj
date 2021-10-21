#include <iostream>
#include <cmath>

int num[100];int l1,l2;

void Input(int n)//将数字转化数组
{
    int t;
    for(t=0;t<=l1;t++)
    {
        num[t]=n%10;
        n/=10;
    }
}

int Judge(int num[100])//判断是否有对应等于数
{
    int t;
    for(t=0;t<=l1;t++)
    {
        if(num[t]==l2) return 0;
    }
    return 1;
}

int main()
{
    int i,sum=0,t=0;
    std::cin>>l2>>l1;
    for(i=pow(10,l1-1);i<pow(10,l1);i++)
    {
        Input(i);
        if(Judge(num)==0&&i%l2!=0)
        {
            sum=sum+i;
            t++;
        }
    }
    std::cout<<t<<' '<<sum;
}