#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int times=0;

void QuickSort(vector<int> &A,int n,int left,int right)
{
    int i,j,t;
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
        t=A[left],A[left]=A[j],A[j]=t,times++;
        QuickSort(A,n,left,j-1);
        QuickSort(A,n,j+1,right);
    }
}

int main()
{
    int n,t;
    string ms1;
    stringstream mss1;
    vector<int> mv1;

    cin>>n;n=0;cin.ignore();
    getline(cin,ms1);
    mss1<<ms1;
    while(mss1>>t)
    {
        mv1.push_back(t);
        n++;
    }

    QuickSort(mv1,n,0,n-1);

    cout<<times*2;

    return 0;
}