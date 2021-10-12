#include <iostream>
using namespace std;

int judge(int a,int N)
{
    int t;
    for(t=10;t<=N;t*=10)
    {
        if(a%7==0) return 1;
        else if(a%10==7) return 1;
        else if(a/t==7) return 1;
        else return 0;
    }
}
int main()
{
    int N,n,t;
    cin>>N;
    if(N>30000) printf("invalid value");
    {
        for(n=1;n<=N;n++)
        {
            if(judge(n,N)==1) printf("%d ",n);
        }
    }
    return 0;
}