#include <stdio.h>
#include <string.h>
char a[100] = "abcd";
char b[100];
void mycpy(char a[], char b[])
{
	int idx = -1;
	int len = strlen(a);
	for(int i=0;i<len;i++)
	{
		++idx;
		b[idx] = a[idx];
	}
}
int main()
{
	mycpy(a, b);
	printf("%s", b);
}




