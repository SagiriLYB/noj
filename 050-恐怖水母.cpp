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
string DoTs;//恐怖水母触手直径(字符串)
string CaCs;//海绵宝宝能力值、金币(字符串)
vector<int> DoTv;//恐怖水母触手直径(数组)
vector<int> CaCv;//海绵宝宝能力值、金币(数组)

int t,t1;//临时值
stringstream sst;

int main()
{

//输入

    cin>>NoT>>NoS;
    getline(cin,DoTs);
    getline(cin,CaCs);

//字符串转换数组

    sst<<DoTs;
    while(sst>>t)
    {
        DoTv.push_back(t);
    }
    sst<<CaCs;
    sst.clear();
    while(sst>>t)
    {
        CaCv.push_back(t);
    }

//计算最少金币

    t=0;
    for(auto &t2:DoTv)
    {
        for(auto &t3:CaCv)
        {
            if(t3>=t2)
            {
                if(t3<t) t=t3;
            }
        }
    }
}