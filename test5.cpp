#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	char A[3][80];
	int n,m,i=0,j=0,k=0,a=0,b=0;
	for(n=0;n<3;n++)
	{
	fgets(A[n],100,stdin);
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
