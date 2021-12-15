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
    string ms1,ms2;
    vector<string> mv1;
    stringstream mss1;

    getline(cin,ms1);
    mss1<<ms1;
    while(mss1>>ms2)
    {
        if(ms2=="you")
        {
            mv1.push_back("we");
            continue;
        }
        mv1.push_back(ms2);
    }
    for(auto a:mv1) cout<<a<<' ';
    return 0;
}