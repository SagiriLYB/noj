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

int TS(char a)
{

}

int main()
{
    string ms1,ms2,ms3;
    vector<char> mv1;
    int t,i=0;

    getline(cin,ms1);

    for(char a:ms1)
    {
        if(i%2==1&&a%2==1)
        {
            mv1.push_back(a);
        }
        i++;
    }
    for(auto a:mv1)
    cout<<a;
    return 0;
}