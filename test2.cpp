#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    // Write C++ code here
    
    int n=10;
    string mystr;
    string item;
    getline(cin, mystr, '\n');
    cout << "-----------" << endl;
    cout << mystr << endl;
    cout << "-----------" << endl;
    int myarr[10];
    int i=0;
    stringstream text_stream(mystr);
    while (std::getline(text_stream, item, ' ')) 
    {
        myarr[i]=stoi(item);
        i++;
    }
    for(int j=0; j<5; j++)
    {
        cout << myarr[j] << endl;
    }
    return 0;
}

