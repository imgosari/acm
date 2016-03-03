#include <stdio.h> 
#include <iostream>
using namespace std;
int main()
{  
	char t[111];
	while(gets(t)) 
	{ 
		int so=0,dae=0,num=0,blank=0,len=0;
		for(int i=0;t[i];i++)
			++len;
		for(int i=0;i<len;i++)
		{
			if(t[i]>=48 && t[i]<=57)
				++num;
			else if(t[i]==32)
				++blank;
			else if(t[i]>=97 && t[i]<=122)
				++so;
			else if(t[i]>=65 && t[i]<=90)
				++dae;
		}
		printf("%d %d %d %d\n",so,dae,num,blank); 
	} 
}