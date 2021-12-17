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
	string A,B;
	int i,j=0,t;
	getline(cin,A);
	while(A[j]!='=')
	{
		
		B[j]=A[j];
		j++;
	}
	t=j-1;
	for(i=0;i<=t;i++)
	{
		A[i]=B[j-1];
		j--;
	}
	for(i=0;i<=t;i++)
		printf("%c",A[i]);
	printf("\n");
	return 0;
}

