#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
    int n,r=0,a=0;
    double t,avg=0,var=0;
    vector<int> mv;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        mv.push_back(t);
        avg+=t/n;
    }
    for(auto a:mv) var+=pow(a-avg,2);
    printf("%.6lf",var);
    return 0;
}