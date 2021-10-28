#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Judge(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i!=0) return 0;
        cout<<i;
    }
    return 1;
}

int main()
{
    int i;
    cout<<Judge(11)<<endl;
    cout<<Judge(12)<<endl;
    return 0;
}