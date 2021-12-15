#include <iostream>
#include <string>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::stringstream;

string ms1,*ms=&ms1,ms2,ms3,ms4;
stringstream mss1,mss2;
int j;
int s;//判断标志

template <typename T>//排序函数模版
void Sort(T &v1,T &v2,T &v3)
{
    if(v1>v2&&v2>v3) mss2<<v3<<' '<<v2<<' '<<v1;
    else if(v1>v3&&v3>v2) mss2<<v2<<' '<<v3<<' '<<v1;
    else if(v2>v1&&v1>v3) mss2<<v3<<' '<<v1<<' '<<v2;
    else if(v2>v3&&v3>v1) mss2<<v1<<' '<<v3<<' '<<v2;
    else if(v3>v2&&v2>v1) mss2<<v1<<' '<<v2<<' '<<v3;
    else if(v3>v1&&v1>v2) mss2<<v2<<' '<<v1<<' '<<v3;
}

int Jud(string *ms)//判断函数
{
    int r;
    for(char t:*ms)
    {
        if(t=='.')//出现小数点情况下
        {
            r=1;
            break;
        }
        if(t>'9')//出现字符情况下
        {
            r=2;
            break;
        }
        else//整形情况
        {
            r=3;
        }
    }
    return r;
}

int main()
{
    for(int i=0;i<3;i++)
    {
        getline(cin,ms1);
        mss1<<ms1;

        j=Jud(ms);

        if(j==1)//小数排序
        {
            double a,b,c;
            mss1>>a>>b>>c;
            Sort(a,b,c);
            getline(mss2,ms2);
            mss2.clear();
        }

        if(j==2)//字符排序
        {
            char a,b,c;
            mss1>>a>>b>>c;
            Sort(a,b,c);
            getline(mss2,ms3);
            mss2.clear();
        }

        if(j==3)//整形排序
        {
            int a,b,c;
            mss1>>a>>b>>c;
            Sort(a,b,c);
            getline(mss2,ms4);
            mss2.clear();
        }
    }
    cout<<ms2<<endl<<ms3<<endl<<ms4;
    return 0;
}