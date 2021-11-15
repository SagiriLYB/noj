#include <iostream>
#include <string>
using namespace std;
int main()
{	
	string mystring("cdsiao");
	int num = mystring.size();
	for (int i=0 ; i<num ; i++)
	{
		mystring[i] = 'X';
	}
	cout<<mystring;	
    return 0;
}

