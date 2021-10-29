#include <iostream>
#include <ctime>
using namespace std;

void QuickSort(int A[],int n,int left,int right)
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
        t=A[left],A[left]=A[j],A[j]=t;
        QuickSort(A,n,left,j-1);
        QuickSort(A,n,j+1,right);
    }
}

#define N 10

int main()
{
    int A[N],i;
    srand((unsigned int)time(0));
    for(i=0;i<N;i++)
    {
        A[i]=rand()%100;
        cout<<A[i]<<" ";
    }
    cout<<endl;
    QuickSort(A,N,0,N-1);
    for(i=0;i<N;i++) cout<<A[i]<<" ";
    return 0;

}