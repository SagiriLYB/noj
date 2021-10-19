#include <iostream>
using namespace std;

int num[10]={1,2,3,4,4,6,7,8,9,0};int l1,l2;

void Input(int n)//将数字转化数组
{
    int t;
    for(t=0;t<=l1;t++)
    {
        num[t]=n%10;
        n/=10;
    }
}

int main()
{
    int i;
    cin>>l1>>l2;
    for(i=0;i<=l1;i++)
    {
        printf("%d",num[i]);
    }
    return 0;
}