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
vector<int> DoTv{5,4};//恐怖水母触手直径(数组)
vector<int> CaCv{7,8,4};//海绵宝宝能力值、金币(数组)

int t,t1;//临时值
stringstream sst;
int main()
{
    t=0;
    for(auto &t2:DoTv)
    {
        for(auto &t3:CaCv)
        {
            if(t3>=t2)
            {
                if(t3<t)
            }
        }
    }
}