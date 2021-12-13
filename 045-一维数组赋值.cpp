#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>N[i];
    }
    for(int i=0;i<n;i++) if(N[i]%2==0) cout<<N[i];
    return 0;
}