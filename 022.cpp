#include <iostream>
using namespace std;

int Judge(int num[10])
{
    int t1,t2;int num[10];
    for(t1=1;t1<=9;t1++)
    {
        for(t2=t1+1;t2<=9;t2++)
        {
            if(num[t1]==num[t2]) return 0;
        }
    }
    return 1;
}

int Input(int n1,int n2)
{
    
}

int main()
{
    int n1,n2,n;int t;
    cin>>n;
    for(n1=98765;n1>=12345;n1--)
    {
        for(n2=12345;n2<=98765;n2++)
        {
            if(n2/n1==n)
            {
            }
        }
    }
}