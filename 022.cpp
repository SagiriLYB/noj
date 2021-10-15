#include <iostream>
using namespace std;

int num[10];int n1,n2;

int Judge(int num[10])//判断是否有相等数
{
    int t1,t2;
    for(t1=1;t1<=9;t1++)
    {
        for(t2=t1+1;t2<=9;t2++)
        {
            if(num[t1]==num[t2]) return 0;
        }
    }
    return 1;
}

void Input(int n1,int n2)//将数字转化数组
{
    int t;
    for(t=4;t>=0;t--)
    {
        num[t]=n1%10;
        n1/=10;
    }
    for(t=5;t<10;t++)
    {
        num[t]=n2%10;
        n2/=10;
    }
}

void Output(int num[10])//输出
{
    int t;
    for(t=0;t<5;t++)
    {
        printf("%d",num[t]);
    }
    printf("/");
    for(t=5;t<10;t++)
    {
        printf("%d",num[t]);
    }
}

int main()
{
    int n;
    cin>>n;
    for(n1=98765;n1>=01234;n1--)
    {
        for(n2=01234;n2<=98765;n2++)
        {
            if(n1/n2==n)
            {
                Input(n1,n2);
                if(Judge(num)==1) break;
            }
        }
    } 
    Output(num);
    return 0;
}