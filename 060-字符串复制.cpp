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
    int l;
    getline(cin,ms1);
    cin>>l;
    ms2=ms1.substr(l);
    cout<<ms2;
    return 0;
}