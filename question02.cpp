#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
 ifstream fin;
 fin.open("Hello.txt",ios::in);
 string line;
 getline(fin,line);
cout<<line;
cout<<endl<<"number of characters are: "<<line.length();
 return 0;
}