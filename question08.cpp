#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string line;
    ofstream s1;
    char ch;
    int count=0;
    s1.open("Employee.txt");
    s1<<" 1 vivek kushwaha\n";
    s1<<" 2 XYZ\n";
    s1<<" 3 zainab rahman\n";
    s1.close();
    ifstream s2;
    s2.open("Employee.txt");
    while(!s2.eof())
    {
        getline(s2,line);
        cout<<line;
        cout<<endl;
    }
    s2.clear(s2.eofbit);
    s2.seekg(0,ios::beg);
    while(!s2.eof())
    {
     ch=s2.get();
    if(ch=='X')
    {
        
        if(s2.get()=='Y')
        count++;
        if(s2.get()=='Z')
        count++;
        if(count==2)
        {
            getline(s2,line);
            cout<<"employee has been searched ";
            break;
        }
    }
    } 
    
        if(count!=2)
        {
            cout<<"No employee of name XYZ found ";
        }
    
    cout<<line;
    s2.close();
    return 0;
}