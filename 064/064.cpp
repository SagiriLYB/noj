#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;
using std::string;

int main()
{
    int Line=1;

    ifstream in1("./noj/064/DATA5613.CPP");
    ifstream in2("./noj/064/DATA5613.TXT");
    //in1.open("./noj/064/DATA5613.CPP");
    //in2.open("./noj/064/DATA5613.TXT");

    if(in1&&in2)
    {
        string temp1,temp2;
        while(getline(in1,temp1)&&getline(in2,temp2))
        {
            for(int i=0;i<temp1.size();i++)//遍历找出不同
            {
                if(temp1[i]!=temp2[i]) cout<<Line<<' '<<i+1<<endl;
            }
            Line++;
        }
    }
    else cout<<"Can not open files.";
    return 0;
}