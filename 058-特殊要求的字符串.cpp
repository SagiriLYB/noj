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

void QuickSort1(string &A,int n,int left,int right)
{
    int i,j;
    char t;
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
        QuickSort1(A,n,left,j-1);
        QuickSort1(A,n,j+1,right);
    }
}

void QuickSort2(string &A,int n,int left,int right)
{
    int i,j;
    char t;
    if(left<right)
    {
        i=left;j=right+1;
        while(1)
        {
            while(i+1<n&&A[++i]>A[left]);
            while(j-1>-1&&A[--j]<A[left]);
            if(i>=j) break;
            t=A[i],A[i]=A[j],A[j]=t;
        }
        t=A[left],A[left]=A[j],A[j]=t;
        QuickSort2(A,n,left,j-1);
        QuickSort2(A,n,j+1,right);
    }
}

int main()
{
    string ms1,ms2,ms3;
    int Length;

    getline(cin,ms1);
    Length=ms1.size();

    ms2=ms1.substr(0,Length/2);
    ms3=ms1.substr((Length+1)/2,Length);

    ms1.erase((Length+1)/2,Length);
    ms1.erase(0,Length/2);

    QuickSort2(ms2,Length/2,0,Length/2-1);
    QuickSort1(ms3,Length/2,0,Length/2-1);


    cout<<ms3<<ms1<<ms2;
    return 0;
}