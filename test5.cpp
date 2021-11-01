#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int m,n,i;
	double x,s=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		x=pow(i,2.0);
		s=s+1/x;
	}
	printf("%.5lf\n",s);
	return 0;
}