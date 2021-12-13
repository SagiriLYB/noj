#include <stdio.h>
void SelectionSort(int A[],int s,int m)
{
	int i,j,k,t;
	for(i=s;i<m;i++)
	{
		k=i;
		for(j=i+1;j<m+s;j++)
			if(A[j]>A[k])k=j;
			if(i!=k)
				t=A[i],A[i]=A[k],A[k]=t;
}
}
int main()
{
	int n,i,A[100],s,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	scanf("%d %d",&s,&m);
	SelectionSort(A,s,m);
	for(i=0;i<n;i++)
		printf("%d ",A[i]);
	printf("\n");
	return 0;
}