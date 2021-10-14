#include <iostream>
using namespace std;

int num[10];int n1=1234567790;int t;

int main()
{
    int t1,t2=10;
    for(t1=9;t1>=0;t1--)
    {
        num[t1]=n1%t2;
        n1/=10;
        cout<<n1<<"-"<<num[t1]<<endl;
    }
    for(t=0;t<5;t++)
    {
        printf("%d",num[t]);
    }
    printf("/");
    for(t=5;t<10;t++)
    {
        printf("%d",num[t]);
    }
    printf("\n");
    for(t1=1;t1<=9;t1++)
    {
        for(t2=t1+1;t2<=9;t2++)
        {
            if(num[t1]==num[t2])
            {
                cout<<1<<endl;
                return 0;
            }
        }
    }
    cout<<0<<endl;
    getchar();
    return 0;
}