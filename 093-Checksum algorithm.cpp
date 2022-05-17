#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string ms1;
    vector<string> mv1;

    while(getline(cin,ms1))
    {
        if(ms1[0]=='#') break;
        mv1.push_back(ms1);
    }

    for(auto a:mv1)
    {
        int t=1,sum=0;
        for(char b:a)
        {
            if(b==' ')
            {
                t++;
                continue;
            }
            sum+=(b-64)*t;
            t++;
        }
        cout<<sum<<endl;
    }
    return 0;
}