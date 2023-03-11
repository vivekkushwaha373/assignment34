#include<iostream>
#include<fstream>
using namespace std;
int main()
{ 
    string line;
    ifstream fin;
    int countline=0;
    int countwords=1;
    int countchar=0;
    char ch,c;
    fin.open("Hello.txt",ios::in);
    fin.seekg(0,ios::beg);
    while(!fin.eof())
    {
       getline(fin,line);
       countline++;
    }
    
     fin.seekg(0,ios::beg);
    while(!fin.eof())
    {
        ch=fin.get();
        countchar++;
    }

    fin.clear(fin.eofbit);//fin.clear()
    fin.seekg(0,ios::beg);
    
    while(!fin.eof())
    {
        c=fin.get();
        if(c==' '||c=='\n')
        countwords++;
    }
   
    
    cout<<"number of lines are: "<<countline<<endl;
    cout<<"number of words are: "<<countwords<<endl;
    cout<<"number of characters are: "<<countchar<<endl;
      
    return 0;
}