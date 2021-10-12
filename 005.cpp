#include<stdio.h>
int main()
{
   int num;
   scanf("%d",&num);
   if (num>=100000) return 0;
   else if (num%11==0) printf("yes\n");
   else if ((num*1000+num)%11==0) printf("yes\n");
   else if ((num*1000000+num)%11==0) printf("yes\n");
   else printf("no\n");
   return 0;
}