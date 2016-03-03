// 다시 풀어볼 것.
#include <stdio.h>
char arr[6600][6600]; 
void fill(int _x,int _y,int n)
{ 
	int c_x=_x+1,c_y=_y+1;
	for(int i=_x;i<_x+n;i++)
	{
		for(int j=_y;j<_y+n;j++)
		{
			if(i==c_x&&j==c_y)
				arr[i][j]=' ';
			else
				arr[i][j]='*';
		}
	}
}
void algo(int x, int y, int n)
{
	int m=n/3;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(i==1&&j==1)
				continue;
			else
				fill(x+(i*m),y+(j*m),m);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	algo(0,0,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			printf("%c",arr[i][j]);
		printf("\n");
	}
}