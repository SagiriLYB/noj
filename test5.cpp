#include <stdio.h>
#include <string.h>

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
	char A[3][80];
    string ms1;
    int i2=0;
	int n,m,i=0,j=0,k=0,a=0,b=0;
	for(n=0;n<3;n++)
	{
	getline(cin,ms1);
    for(auto a:ms1)
    {
        A[n][i2]=a;
        i2++;
    }
	for(m=0;m<80&&A[n][m]!='\0';m++)
	{
		if(A[n][m]=='\n') break;
		else if(A[n][m]>='A'&&A[n][m]<='Z') i++;
		else if(A[n][m]>='a'&&A[n][m]<='z') j++;
		else if(A[n][m]>='0'&&A[n][m]<='9') k++;
		else if(A[n][m]==' ') a++;
		else b++;
    }
    }
	printf("%d %d %d %d %d\n",i,j,k,a,b);
	return 0;
}