#include<stdio.h>
int main()
{
	int x,y=0,t;
	scanf("%d",&x);
	for(t=1;x/t>0;t*=10)
    {
		y+=x/(t*10)*t;//
		if(x/t%10>1) y+=t;//
		else if((x/t)%10) y+=x%t+1;
	}
	printf("%d\n",y);
	return 0;
 } 