#include <iostream>
#include <math.h>
using namespace std;

void Judge(int n1,int n2)
{
    int n,t1,t2;int num[10];
    n1*=100000;
    n=n1+n2;
    for(t1=10,t2=1;t1<=100000000;t1*=10,t2++)
    {
        num[t2]=n%t1;
        cout<<num[t2]<<endl;
    }    
}

int main()
{
    int n1=12345,n2=67890;
    printf("Judge(n1,n2)");
    return 0;
}