#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int t=0;t<n;t++)
	{
		char s[21];
		int len,cnt;
		scanf("%d %s",&cnt,&s);
		len=strlen(s);
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<cnt;j++)
				printf("%c",s[i]);
		}
		printf("\n");
	}
}