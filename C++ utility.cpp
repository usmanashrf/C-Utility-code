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
                            out<<title;                 // get the title of job
                            out<<delimiter;
			    getline(in,org);            // get organization name
			    out<<org;
			    out<<delimiter;
			    getline(in,jobType);
			    getline(in,type);            // get the job type 
		            out<<type;
                            out<<delimiter;
			    getline(in,jobShift);         // get the type of Job shift  
			    getline(in,shift);
			    out<<shift;
			    out<<delimiter;
			    getline(in,experience);  
			    getline(in,years);                 // get the experinece of job
			    out<<years;
			    out<<delimiter;
			    getline(in,sal);
			    getline(in,salary);                // get salary range
			    out<<salary;
			    out<<delimiter;
			    getline(in,desc);                //get the description of the job
			    out<<desc;
			    out<<delimiter;
			    getline(in,loc_date);             // get the Location and date  
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


