#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int N[10];
int i;
int n=1233233211;
int temp;

int Jud()//统计1数量
{
    int t=0;
    for(i=0;i<temp;i++)
    {
        if(N[i]==1) t++;
    }
    return t;
}

int main()//转换为数组
{
    for(i=0;n>0;i++)
    {
        N[i]=n%10;
        n/=10;
		cout<<n<<endl;
    }
    temp=i;
	cout<<temp<<endl;
	cout<<Jud()<<endl;
	for(i=0;i<10;i++) cout<<N[i];
	return 0;
}