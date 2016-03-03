#include <stdio.h>
#include <string.h>
int main()
{ 
	char s[101];
	int len;
	gets(s);
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]>=97&&s[i]<=122) 
		{
			if(s[i]+13 > 122)
			{
				int t = 13-(122-s[i])-1;
				printf("%c",97+t);
			}
			else
				printf("%c",s[i]+13);
		}
		else if(s[i]>=65&&s[i]<=90)
		{
			if(s[i]+13 > 90)
			{
				int t = 13-(90-s[i])-1;
				printf("%c",65+t);
			}
			else
				printf("%c",s[i]+13);
		}
		else
			printf("%c",s[i]);
			
	}   
}