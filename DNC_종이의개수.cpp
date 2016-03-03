#include <stdio.h> 
int arr[2500][2500];
int result[3]; 
int issame(int x, int y, int n)
{
	int same=1;
	for(int i=x;i<x+n;i++)
	{
		for(int j=y;j<y+n;j++)
		{
			if(arr[i][j]!=arr[x][y])
				same=0;
		}
	}
	return same;
}
void algo(int x, int y, int n)
{ 
	if(issame(x,y,n))
	{
		++result[arr[x][y]+1];
		return;
	}
	int m=n/3;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
			algo(x+(i*m),y+(j*m),m);		
	}
} 
int main()
{ 
	int size;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
			scanf("%d",&arr[i][j]);
	}
	algo(0,0,size);
	for(int i=0;i<3;i++)
		printf("%d\n",result[i]); 
}