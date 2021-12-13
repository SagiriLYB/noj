#include <stdio.h>
int n;
void BubbleSort(int A[],int s,int m)
{
	int i,j,t;
	for(j=0;j<=m-s;j++)
		for(i=s;i<m-j;i++)
			if(A[i]<A[i+1])
				t=A[i],A[i]=A[i+1],A[i+1]=t;
}
int main()
{
	int A[100],i,s,m;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	scanf("%d %d",&s,&m);
	BubbleSort(A,s,m);
    for(i=0;i<n;i++)
			printf("%d ",A[i]);
	printf("\n");
	return 0;
}
