#include <iostream>

using namespace std;

int main()
{
    int a,c=0,d=0,e,n,b;
    cin>>e;
    for(n=0;d<e;n++)
    {
        for(a=1;a<=99;a++)
        {
            for(b=2;b<(a+n*100);b++)
            {
                if((a+n*100)%b==0)
                {
                    c++;break;
                }
            }
        if(c==99){d++;break;}
        if(a==99)c=0;
        }
    }
    printf("%d %d",n*100,n*100+99);
    return 0;
}