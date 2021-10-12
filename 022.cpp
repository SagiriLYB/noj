#include <iostream>
using namespace std;

int Judge(int n1,int n2)
{
    int n,t1,t2;int num[10];
    n1*=100000;
    n=n1+n2;
    for(t1=10,t2=1;t1<=100000000;t1*=10,t2++)
    {
        num[t2]=n%t1;
        cout<<num[t2]<<endl;
    }
    return 0;
}