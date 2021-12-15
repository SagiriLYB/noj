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
    int n=0;
    string ms1,ms2,ms3;
    getline(cin,ms1);
    getline(cin,ms2);
    for(int i=0;i<ms1.size();i++)
    {
        n+=(ms1[i]-ms2[i]);
    }
    cout<<n;
    return 0;
}