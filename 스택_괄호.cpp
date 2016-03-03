#include <stdio.h>
#include <string.h>
#include <malloc.h>
char t[51];
char s[101];
int top=-1;
int main()
{
	int n,len,exit=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",&t);
		len=strlen(t);
		for(int i=0;i<len;i++)
		{
			if( t[i] == '(' ) // ¿©
				s[++top] = '(';
			else // ´Ý
			{
				if( s[top] == '(' )
				{
					s[top--] = '\0';
					if(top < 0)
						top=-1;
				}
				else
				{
					printf("NO\n");
					exit=1;
					break;
				}
			}
		}
		if(!exit)
		{
			if(top!=-1)
				printf("NO\n");
			else
				printf("YES\n");
		}
		exit=0;
		top=-1;
		memset(s,0,sizeof(s));
	}
	return 0;
}