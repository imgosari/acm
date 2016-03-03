#include <stdio.h>
#include <string.h>
int alpa[30];
char arr[101];
int main()
{
	int len;
	gets(arr);
	len=strlen(arr);
	for(int i=0;i<len;i++)
		++alpa[arr[i]-97];
	for(int i=0;i<26;i++)
		printf("%d ",alpa[i]);
}
