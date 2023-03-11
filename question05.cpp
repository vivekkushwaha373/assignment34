#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream s1;
    string line;
    s1.open("file1.txt");
    getline(s1,line);
    ofstream s2;
    s2.open("mergefile1_2.txt",ios::app);
    s2<<line;
    ifstream s3;
    s3.open("file2.txt");
    getline(s3,line);
    s2<<" "<<line;
    s1.close();
    s3.close();
    s2.close();
    
    return 0;
}