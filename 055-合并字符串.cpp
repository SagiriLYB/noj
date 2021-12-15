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
    getline(cin,ms1);
    getline(cin,ms2);
    ms3=ms1+ms2;
    cout<<ms3;
    return 0;
}