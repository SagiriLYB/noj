#include<stdio.h>
void SelectionSort(int A[],int s,int m)
{
	int i=0,j=0,k=0;
	for(i=s+1;i<s+m;i++)
	{
		j=i;
		while(A[j]>A[j-1]&&j-1>=s)
		{  
            k=A[j];
			A[j]=A[j-1];
            A[j-1]=k;
			j--;
		}
		
	}
}
int main()
{
    int A[100]={0},s=0,m=0,n=0,i=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	scanf("%d%d",&s,&m);
	SelectionSort(A,s,m);
	for(i=0;i<n;i++)
	{
		printf("%d ",A[i]);
	}
	printf("\n");
	return 0;
}
