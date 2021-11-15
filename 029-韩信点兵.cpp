#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int a,b,c,tolal;
    int i,j=1;
    cin>>a>>b>>c;
    for(i=1;i<=100;i++)
    {
        if(i%3==a&&i%5==b&&i%7==c)
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"-1";
    return 0;
}