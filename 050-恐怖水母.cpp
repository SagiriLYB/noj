#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

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
    cin>>NoT>>NoS;
    while(cin>>t)
    {
        DoT.push_back(t);
    }
    while(cin>>t)
    {
        CaC.push_back(t);
    }

    Jud1();
}