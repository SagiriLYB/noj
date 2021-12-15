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
    int UC,LC,Nu,Sp,Ot=0;

    getline(cin,ms1);
    getline(cin,ms2);
    getline(cin,ms3);
    ms1+=(ms2+ms3);
    for(char a:ms1)
    {
        if(a>='A'&&a<='Z') UC++;
        else if(a>='a'&&a<='z') LC++;
        else if(a>='0'&&a<='9') Nu++;
        else if(a==' ') Sp++;
        else Ot++;
    }
    cout<<UC<<' '<<LC<<' '<<Nu<<' '<<Sp<<' '<<Ot<<'\n';
    return 0;
}