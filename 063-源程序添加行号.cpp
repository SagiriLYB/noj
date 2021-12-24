#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

int main()
{
    ifstream infile("./noj/DATA5612.CPP",ios::in);
    ofstream outfile("./noj/DATA5612.TXT",ios::out);
    string line;
    int i=1;
    while(getline(infile,line))
    outfile<<i++<<" "<<line<<endl;
    return 0;
}