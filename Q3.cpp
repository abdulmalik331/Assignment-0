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
	char substr[10];
	char substr2[100];
	ifstream fo;
	
	
	fin.open("a.txt");
	
	remove("a.txt");
	
	fo.open("q3_b.txt");
	
	int i=0;
	int k=0;
	int j=0;
	if(strcmp("a",argv[1])==0)
	{
	
		while(fin)
		{
			
			fin>>ch;
			substr[i]=ch;
			
			if(substr[i]==' ')
			{
				for(;j<=i;j++)
				{
					if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
						{
							for(;k<strlen(substr);k++)
							{
								substr2[k]=substr[]	
							}
				
						}	
				}
				
			}
			
			
			
		
			
			
		}
	
	fin.close();
	fo.close();
	
	
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
	
	
	
	
}
