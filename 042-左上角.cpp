#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int n,N[100][100];

int main()
{
    cin>>n;
    for(int i1=0;i1<n;i1++)
    {
        for(int i2=0;i2<n;i2++)
        {
            cin>>N[i1][i2];
        }
    }

    for(int i1=0;i1<n;i1++)
    {
        for(int i2=0;i2<n;i2++)
        {
            if(i1+i2<n)
            cout<<N[i1][i2]<<' ';
        }
        cout<<endl;
    }

    return 0;
}