#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int Cal(int m,int n)//计算组合数
{
	int de=1,nu=1;
	for(int i=m;i>m-n;i--) 
	{
		de*=i;
	}
	for(int i=n;i>0;i--)
	{
		nu*=i;
	}
	return de/nu;
}

int main()
{
	int m,n;
	cin>>m>>n;
	if(m<=n) cout<<"invalid value"<<endl;
	cout<<Cal(m,n)<<endl;
	return 0;
}