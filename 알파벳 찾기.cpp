#include <stdio.h>
#include <string.h>
int alpa[30];
char arr[101];
int main()
{
	int len;
	for(int i=0;i<26;i++)
		alpa[i]=-1;
	gets(arr);
	len=strlen(arr);
	for(int i=0;i<len;i++)
	{
		int idx = arr[i]-97;
		if(alpa[idx]==-1)
			alpa[idx]=i;
	}
	for(int i=0;i<26;i++)
		printf("%d ",alpa[i]);
}
