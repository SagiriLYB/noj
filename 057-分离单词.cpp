#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

int main()
{
    string ms1,ms2,ms3;
    stringstream mss1;
    vector<string> mv1;
    
    getline(cin,ms1);

    for(auto &a:ms1)
    {
        if(a==','||a=='.')
        {
            a=' ';
        }
    }

    mss1<<ms1;
    while(mss1>>ms2)
    {
        mv1.push_back(ms2);
    }
    for(int i=mv1.size()-1;i>=0;i--)
    cout<<mv1[i]<<' ';
    return 0;
}