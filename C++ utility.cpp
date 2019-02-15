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

string a,b,c,d,e,f,g,h,i,j,k,l;
        int y=1;	
	   {
	 while (! in.eof())
	       {
                out<<y<<"  ";
			    getline(in,a); 
                out<<a;  
                out<<"]";
			    getline(in,b); 
			    out<<b;
			    out<<"]";
				getline(in,c);
				getline(in,d);
				out<<d;
				out<<"]";
				getline(in,e);
				getline(in,f);
				out<<f;
				out<<"]";
				getline(in,g);
				getline(in,h);
				out<<h;
				out<<"]";
				getline(in,i);
				getline(in,j);
				out<<j;
				out<<"]";
				getline(in,k);
				out<<k;
				out<<"]";
				getline(in,l);
				out<<l;
				out<<"]";
				out<<endl;
                /*cout<<y<<endl;
                cout<<a<<endl<<b<<endl<<d<<endl<<f<<endl<<h<<endl<<j<<endl<<k<<endl<<l;
                cout<<endl;*/
                y++;
                
                
            }	
			
             		  
			  
        }
   }


