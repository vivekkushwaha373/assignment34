#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
    // string line,line1;
    ifstream fin;
    ifstream fin1;
    char str[100];
    char ptr[100];
    int j=0;
    fin.open("a.txt");
    fin1.open("Hello.txt");
    
    while(!fin.eof())
    {
        str[j]=fin.get();
    j++;
    }
    str[j-1]='\0';
    j=0;
      while(!fin1.eof())
    {
        ptr[j]=fin1.get();
    j++;
    }
    ptr[j-1]='\0';

    fin.close();
    fin1.close();
    // cout<<ptr<<endl<<str<<endl;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {if(str[i]!=32)
        str[i]=str[i]-32;
        }
        else
        {if(str[i]!=32 && str[i]>=65 && str[i]<=90)
        str[i]=str[i]+32;
    }}
     for(int i=0;ptr[i]!='\0';i++)
    {
        if(ptr[i]>=97 && ptr[i]<=122)
        {if(ptr[i]!=32)
        ptr[i]=ptr[i]-32;}
        else
        {
        if(ptr[i]!=32 && ptr[i]>=65 && ptr[i]<=90)
        ptr[i]=ptr[i]+32;
        }
    }
    // cout<<ptr<<endl<<str<<endl;
    
    
    ofstream fout;
    ofstream fout1;
    fout1.open("a.txt",ios::out);
    fout1<<ptr;
    fout1.close();
  
    fout.open("Hello.txt",ios::out);
    fout<<str;
    fout.close(); 
    return 0;
}