#include<stdio.h>
char fun(char *p1,char *p2)
{
	if(*p1==*p2)
	{
		p1++;
		p2++;
	}
	else printf("%c and %c is not same!\n",*p1,*p2);
}
int main()
{
	FILE *fp,*fp1,*fp2;
	char ch1,ch2,*s1,*s2;
	char n;
	if{
		if((fa=fopen("aa.txt","r"))==NULL)
		{
			printf("Can't open aa.txt file\n");
			exit(0);
		}
		if((fb=fopen("bb.txt","r"))==NULL)
		{
			printf("Can't open bb.txt file\n");
			exit(0);
		}
	}
	fp1=fopen("aa.txt,"r");
	ch1=fgetc(fp1);s1=&ch1;
	fp2=fopen("bb.txt,"r");
	ch2=fgetc(fp2);s2=&ch2;
	n=fun(char s1,char s2);
    return 0;
}