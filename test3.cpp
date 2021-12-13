#include <iostream>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stod;
using std::stringstream;

template <typename T>
void sort(T &v1,T &v2,T &v3)
{
    if(v1>v2&&v2>v3) cout<<v3<<' '<<v2<<' '<<v1;
    else if(v1>v3&&v3>v2) cout<<v2<<' '<<v3<<' '<<v1;
    else if(v2>v1&&v1>v3) cout<<v3<<' '<<v1<<' '<<v2;
    else if(v2>v3&&v3>v1) cout<<v1<<' '<<v3<<' '<<v2;
    else if(v3>v2&&v2>v1) cout<<v1<<' '<<v2<<' '<<v3;
    else if(v3>v1&&v1>v2) cout<<v2<<' '<<v1<<' '<<v3;
}

stringstream mss;

int main()
{
    string ms="10.1 20.2 30.3";
    double a,b,c;
    mss<<ms;
    mss>>a>>b>>c;
    cout<<a<<' '<<b<<' '<<c<<endl<<ms;
    return 0;
}