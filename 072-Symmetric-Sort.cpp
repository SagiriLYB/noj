#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

void QuickSort(vector<string> &A,int n,int left,int right)
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
        QuickSort(A,n,left,j-1);
        QuickSort(A,n,j+1,right);
    }
}

#define N 10

int main()
{
    int n;
    string ms1,t;
    stringstream mss1;
    vector<string> mv1;

    cin>>n;n=0;cin.ignore();
    getline(cin,ms1);
    mss1<<ms1;
    while(mss1>>t)
    {
        mv1.push_back(t);
        n++;
    }

    int i1,i2,t1;

    t1=mv1.size();
    if(t1%2==0)
    {
        for(i1=1;i1<=t1;i1+=2)
        {
            cout<<mv1[i1]<<' ';
        }
        for(i2=t1-2;i2>=0;i2-=2)
        {
            cout<<mv1[i2]<<' ';
        }
    }
    if(t1%2==1)
    {
        for(i1=0;i1<t1;i1+=2)
        {
            cout<<mv1[i1]<<' ';
        }
        for(i2=t1-2;i2>=0;i2-=2)
        {
            cout<<mv1[i2]<<' ';
        }
    }
    return 0;
}