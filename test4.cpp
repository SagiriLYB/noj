#include <iostream>

 int i,a=1,b=6,l=4,n=12,num[100]={1,2,3,4,5};

void Output()//输出函数
{
    std::cout<<n<<'.';
    for(i=0;i<l;i++) std::cout<<num[i];
}

int main()
{
    Output();
    return 0;
}

