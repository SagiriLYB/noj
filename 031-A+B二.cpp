#include <string>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    int n=0,a=0,b=0;
    vector<int> R;
    cin>>n;//输入测试数据组数
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;//输入两数字
        R.push_back((a+b)%100);//将结果保存
    }
    for(auto a:R) cout<<a<<endl;//输出结果
    return 0;
}