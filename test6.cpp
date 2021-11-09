#include <iostream>
#include <string>
#include <vector>
using namespace std;
void main()
{	
	vector<string> My_vector;
	string istring;
	while (cin >> istring)
	{
		My_vector.push_back(istring);
	}
	for (int i = 0;i < My_vector.size();i++)
		for (int j = 0;j < My_vector[i].length();j++)
		{
			My_vector[i][j] = toupper(My_vector[i][j]);
		}
	for (int i = 0;i < My_vector.size();i++)
	{
		cout<<My_vector[i]<<endl;
	}
}

