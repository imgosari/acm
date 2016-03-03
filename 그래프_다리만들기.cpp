#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int c[101][101];
int v[101][101];
int a[101][101];
int lcnt=1,n,result=99999999;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void search(int h, int w)
{
	for(int i=0;i<4;i++)
	{
		int nw=w+dx[i];
		int ny=h+dy[i];

		if(a[ny][nw]!=a[h][w])
		{
			if(nw>=0&&nw<n&&ny>=0&&ny<n)
			{
				if((c[ny][nw]+c[h][w])<=result)
					result=(c[ny][nw]+c[h][w]);
			}
		}
	}
} 
int exit()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(!a[i][j])
				return 0;
		}
	}
	return 1;
}
void init(int h, int w)
{ 
	if(a[h][w])
	{
		a[h][w]=lcnt;
		v[h][w]=1;
	}
	else return;
	for(int i=0;i<4;i++)
	{
		int nw=w+dx[i];
		int ny=h+dy[i];
		if(nw>=0&&nw<n&&ny>=0&&ny<n&&!v[ny][nw])
			init(ny,nw);
	}
}
void algo(int h, int w)
{ 
	if(a[h][w]&&!v[h][w])
	{
		for(int i=0;i<4;i++)
		{
			int nw=w+dx[i];
			int ny=h+dy[i];
			if(nw>=0&&nw<n&&ny>=0&&ny<n&&a[ny][nw]==0)
			{ 
				a[ny][nw]=a[h][w];
				v[ny][nw]=1;
				c[ny][nw]=c[h][w]+1;
			}
		} 
	}
	else return;
}
int main()
{
	memset(c,-1,sizeof(c));
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j])
				c[i][j]=0;
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]&&!v[i][j])
			{
				init(i,j);
				lcnt++;
			}
		}
	}   
	while(!exit())
	{ 
		memset(v,0,sizeof(v));  
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(a[i][j]!=0) 
					algo(i,j); 
			}
		} 

	}  
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			search(i,j);
	}
	printf("%d",result);
} 