#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream s1;
    s1.open("Hello.txt");
    s1<<"File created successfully";
    if(!s1)
    {
        cout<<"Error: file is not created";
    }
    s1.close();
    return 0;
}