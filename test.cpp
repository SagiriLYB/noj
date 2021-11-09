#include <iostream>
#include <string>

using namespace std;

int main()
{
      int a[100];
      int b,temp;
      int i=0;
      for(b=1;b<=100;b++)
        {
      if (b%7==0||b%11==0)
      {
          a[i]=b;
          i++;
      }
      }
      temp=i;
      for(i=0;i<temp;i++)
      {
          if ((i+1)%5==0)
            cout<<endl;
            cout<<a[i]<<' ';
      }
      return 0;