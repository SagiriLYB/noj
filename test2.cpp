#include <iostream>
#include <stdio.h>
struct yuangong
{
    int num[20];
    char name[10];
    int age[10];
    int money[10];
};

struct yuangong p[5];

using namespace std;

int main()
{
    int i,maxgz=0;
    for(i=0;i<5;i++)
 {
    printf("请输入身份证号:");
    scanf("%s",p[i].num);
    printf("请输入姓名：");
    scanf("%s",p[i].name) ;
    printf("请输入工龄：");
    scanf("%d",p[i].age);
    printf("请输入工资：");
    scanf("%d",p[i].money);
  }

      for(i=0;i<5;i++){
            if (*p[i].money>maxgz)
                maxgz=p[i].money;
      }
      cout<<"最大工资为="<<maxgz<<endl;
    return 0;
}