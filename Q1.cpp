#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(int argcount,char ** argv)
{
	ifstream fin;
	cout<<"total :"<<argcount<<" arguments"<<endl;
	cout<<"File "<<argv[1]<<" opened."<<endl;
	char ch;
	
	ifstream fo;
	ifstream fi;
	
	fin.open("q1_a.txt");
	fo.open("q1_b.txt");
	fi.open("q1_c.txt");
	
	
	int count=0;
	if(strcmp("a",argv[1])==0)
	{
	
		while(fin)
		{
		
			fin>>ch;
		
			if(ch>47 && ch<58)
			{
				count++;
			}
			
		}
	
	fin.close();
	fo.close();
	fi.close();
	
	}
	
	else if(strcmp("b",argv[1])==0){
	
	while(fo)
	{
		
		fo>>ch;
		
		if(ch>47 && ch<58)
		{
			count++;
		}
			
	}
	count--;
	fo.close();
	fi.close();
	fin.close();
	}
	
	else if(strcmp("c",argv[1])==0)
	{
	
	while(fi)
	{
		
		fi>>ch;
		
		if(ch>47 && ch<58)
		{
			count++;
		}
			
	}
	
	fi.close();
	fin.close();
	fo.close();
	}
	count--;
	
	cout<<"Total integers: "<<count<<endl;
}

