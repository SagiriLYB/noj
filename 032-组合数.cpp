#include <stdio.h>
#include <stdlib.h>
int fun(int m,int n)
{
	int y,y1=1,y2=1,i;
	for(i=0;i<n;i++)
		y1=y1*(m-i);
	for(;n>0;n--)
		y2=y2*n;
	y=y1/y2;
	return(y);
}
int main()
{
int m,n;
scanf("%d %d",&m,&n);
if(n>m||n<0||m<0)
printf("wrong\n");
else
printf("%d\n",fun(m,n));
return 0;
}
