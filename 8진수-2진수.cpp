#include <stdio.h>
#include <string.h>
#include <vector>
char s[400000];
char arr[1000003];
int len,idx=-1;
using namespace std;
void oth(int data)
{
	if(data==0)
	{
		arr[idx+=1]='0';
		arr[idx+=1]='0';
		arr[idx+=1]='0';
	}
	else if(data==1)
	{
		arr[idx+=1]='1';
		arr[idx+=1]='0';
		arr[idx+=1]='0';
	}
	else if(data==2)
	{
		arr[idx+=1]='0';
		arr[idx+=1]='1';
		arr[idx+=1]='0';
	}
	else if(data==3)
	{
		arr[idx+=1]='1';
		arr[idx+=1]='1';
		arr[idx+=1]='0';
	}
}
void four(int data)
{
	if(data==1)
	{
		arr[idx+=1]='1';
		return;
	}
	else if(data==0)
	{
		arr[idx+=1]='0';
		return;
	}

	arr[idx+=1]=(data%2)+'0';
	four(data/=2);  
}
int main()
{
	char result[1000003];
	int ridx=-1,ok=0;
	gets(s);
	len=strlen(s); 
	if((s[0]-'0')==0)
		printf("0"); 
	else
	{
		for(int i=len-1;i>=0;i--)
		{
			if((s[i]-'0')<=3)
				oth(s[i]-'0');
			else
				four(s[i]-'0');
		}
		len=strlen(arr);
		for(int i=len-1;i>=0;i--)
		{
			if(!ok&&(arr[i]-'0')==1)
			{
				ok=1;
				result[++ridx]=arr[i];
			}
			else if(ok)
				result[++ridx]=arr[i];
		} 
		result[++ridx]='\0';
		printf("%s",result);
	}
}