#include <stdio.h>
#include <string.h>
int arr[100][100];
int size;
int issame(int x, int y, int n)
{
	int same=1;
	for(int i=x;i<x+n;i++)
	{
		for(int j=y;j<y+n;j++)
			if(arr[i][j]!=arr[x][y])
				same=0;
	}
	return same;
}
void algo(int x, int y, int n)
{
	if(issame(x,y,n))
	{
		printf("%d",arr[x][y]);
		return;
	}
	else
	{ // 중위순회로서 여는 괄호, 배열값(루트), 닫는 괄호 순으로 진행해야 한다.
		printf("(");
		int m=n/2;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<2;j++)
				algo(x+(i*m),y+(j*m),m);
		}
		printf(")");
	} 
}
int main()
{
	scanf("%d", &size);
	for(int i=0;i<size;i++)
	{
		char t[100];
		scanf("%s",&t);
		int len=strlen(t);
		for(int j=0;j<len;j++)
			arr[i][j]=t[j]-'0';
	}  
	algo(0,0,size);
}