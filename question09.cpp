#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

void fun(char *C)
{

ifstream s1;
ofstream s2;
cout<<"function is called"<<endl;

int count=0;
int x;
char str[20];
s1.open("emp.dat",ios::in);
s1.seekg(0,ios::beg);
while(1)
{
// cout<<"h"<<endl;
s1.getline(str,20);
count++;
if(count==4 || (count-4)%6==0)
{   
    

    if(strcmp(str,C)==0)
    {
    
      x=count-3;
      s1.close();
      count=0;
        
     if(strcmp("Production",C)==0)
    {
       
        s2.open("Pro.dat",ios::out);
    }
    if(strcmp("IT",C)==0)
    {
        s2.open("IT.dat",ios::out);
    }
   
    if(strcmp("Admin",C)==0)
    {s2.open("Adm.dat",ios::out);}
    
    if(strcmp("Sales",C)==0)
    {s2.open("Sal.dat",ios::out);}
    
    s1.open("emp.dat",ios::in);
    s1.seekg(0,ios::beg);
    while(1)
    {
        
        s1.getline(str,20);
        count++;
        if(count==x)
        {
            s2<<str<<endl;
           s1.getline(str,20);
            s2<<str<<endl;
               s1.getline(str,20);
            s2<<str<<endl;
               s1.getline(str,20);
            s2<<str<<endl;
               s1.getline(str,20);
            s2<<str<<endl;
               s1.getline(str,20);
            s2<<str<<endl;
            s2.close();
            s1.close();
            break;
        }
    }
  
}
}
  if(count==x)
    {count=0;
    break;
    
    }

}
}


int main()
{
char a[4][12]={"Admin","Sales","IT","Production"};

fun(a[0]);
fun(a[1]);
fun(a[2]);
fun(a[3]);
return 0;
}