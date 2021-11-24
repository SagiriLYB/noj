#include <fstream>
#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    int Line=1;

    char dire[256];
    char *val=getcwd(dire,sizeof(dire));
    string dir=dire;
    dir+="/1.txt";

    cout<<dir<<endl;
}