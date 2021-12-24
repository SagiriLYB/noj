#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    ifstream infile("./noj/DATA5609.DAT",ios::in);
    string temp;
    getline(infile,temp);
    cout<<temp;
    return 0;
}