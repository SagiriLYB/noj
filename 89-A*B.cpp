#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace  std;

int Cal(int n)
{
	int t1=0,t2=n;
	if(n>=10)
	{
		while(t2>=1)
		{
			t1+=t2%10;
			t2/=10;
		}
		return Cal(t1);
	}
	else if(n<10)
	{
		return n;
	}
}

int main()
{
	int a,b,c;
	cin>>a>>b;
	c=a*b;
	cout<<Cal(c);
	return 0;
}