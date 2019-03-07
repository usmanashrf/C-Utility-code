#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	
ifstream in;
in.open("mustakbil's data.txt");
ofstream out;
out.open("mustakbilFinal.txt");

string title,org,jobType;
string	type,jobShift,shift;
string	experience,years,sal;
string	salary,decs,loc_date; 
int Counter=1;	               // counter for count the total numbers of lines in files
char delimiter="]";           // keep a unique delimeter
	   {
	 while (! in.eof())
	       {
                out<<Counter<<"  ";
		      // get each individual line in file
			    getline(in,title); 
                            out<<title;  
                            out<<delimiter;
			    getline(in,org); 
			    out<<org;
			    out<<delimiter;
			    getline(in,jobType);
			    getline(in,type);
		            out<<type;
                            out<<delimiter;
			    getline(in,jobShift);
			    getline(in,shift);
			    out<<shift;
			    out<<delimiter;
			    getline(in,experience);
			    getline(in,years);
			    out<<years;
			    out<<delimiter;
			    getline(in,sal);
			    getline(in,salary);
			    out<<salary;
			    out<<delimiter;
			    getline(in,desc);
			    out<<desc;
			    out<<delimiter;
			    getline(in,loc_date);
			    out<<loc_date;
			    out<<delimiter;
			    out<<endl;
                /*cout<<y<<endl;
                cout<<a<<endl<<b<<endl<<d<<endl<<f<<endl<<h<<endl<<j<<endl<<k<<endl<<l;
                cout<<endl;*/
                y++;
                
                
            }	
			
             		  
			  
        }
   }


