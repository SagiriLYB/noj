#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::stringstream;

int NoT;//恐怖水母的触手数
int NoS;//海绵宝宝数量
vector<int> DoT;//恐怖水母触手直径
vector<int> CaC;//海绵宝宝能力值、金币
int t;//临时值

int Jud1()//判断可解性
{
    int t1,t2;
    for(auto &t:DoT)
    {
        if(t1<t) t1=t;
    }
    for(auto &t:CaC)
    {
        if(t2<t) t2=t;
    }
    if(t1==t2) cout<<"NULL";
}

int main()
{
    string line,b;
    int a;
    getline(cin,line);
    stringstream ss(line);
    vector<int> mv1;
    while(ss>>a) 
    {
        cout<<a<<endl;
        mv1.push_back(a);
    }
    for(auto c:mv1) cout<<c<<' ';
}