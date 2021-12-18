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

#include<iostream>
#include<iomanip>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
	int m,n,s1=1,s2=1,i,k,c;
	cin>>m>>n;
	k=m-n+1;
	if(m>=n)
    {
        for(i=1;i<=n;i++)
    {
        s1*=k;
        k++;
    }
    for(i=1;i<=n;i++)
    {
        s2*=n;
        n--;
    }
    c=s1/s2;
    cout<<c;
    }
	else
    cout<<"wrong";
    return 0;

}