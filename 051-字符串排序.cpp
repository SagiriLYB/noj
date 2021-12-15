#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::stringstream;

string ms1,ms2;
stringstream mss1;
vector<string> A;

void QuickSort(int n,int left,int right)
{
    int i,j;
    string t;
    if(left<right)
    {
        i=left;j=right+1;
        while(1)
        {
            while(i+1<n&&A[++i]<A[left]);
            while(j-1>-1&&A[--j]>A[left]);
            if(i>=j) break;
            t=A[i],A[i]=A[j],A[j]=t;
        }
        t=A[left],A[left]=A[j],A[j]=t;
        QuickSort(n,left,j-1);
        QuickSort(n,j+1,right);
    }
}

int main()
{
    getline(cin,ms1);
    mss1<<ms1;
    while(mss1>>ms2)
    {
        A.push_back(ms2);
    }
    QuickSort(A.size(),0,A.size()-1);
    for(auto s:A) cout<<s<<' ';
    return 0;
}