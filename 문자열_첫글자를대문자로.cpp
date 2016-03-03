#include <stdio.h>
#include <string.h>
char str[31];
int main()
{ 
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{
		int len=0;
		len=strlen(gets(str));
		for(int i=0;i<len;i++)
		{
			if(i==0&&str[i]>90)
				printf("%c",str[i]-32);
			else
				printf("%c",str[i]);
		}
		printf("\n");
	}
}