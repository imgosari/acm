#include <stdio.h>
#include <string.h>
char t[100000];
int idx=-1;
void tran(int d, int j)
{
	if(d<=0)
		return;
	else
	{
		int r = d%j;
		if(r>=10)
			t[++idx]=r+55;
		else
			t[++idx]=r+'0';
		tran(d/j,j);
	}
}
int main()
{ 
	int a,b,len,tidx=-1;
	char trans[100000];
	scanf("%d %d",&a,&b);
	tran(a,b); 
	len=strlen(t);
	for(int i=len-1;i>=0;i--)
		trans[++tidx]=t[i];
	trans[len]='\0';
	printf("%s",trans);
}
