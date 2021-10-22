#include <iostream>

int main()
{
    int i=10,sum=0;
    for(int i=0;i!=10;++i)
    {
        sum+=i;
        std::cout<<i<<" ";
    }
    std::cout<<i<<" "<<sum<<std::endl;
    return 0;
}