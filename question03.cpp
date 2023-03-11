#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream fout;
    fout.open("a.txt",ios::app);
    fout<<"hello my name is abhishek verma";
    return 0;
}