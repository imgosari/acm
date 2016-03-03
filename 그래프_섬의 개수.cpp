#include <stdio.h>
#include <string.h>
int dx[8]={0,1,1,1,0,-1,-1,-1};
int dy[8]={-1,-1,0,1,1,1,0,-1};
int arr[1001][1001],v[1001][1001];
int lcnt=2,w,h;
void dfs(int _h, int _w)
{
	if(arr[_h][_w]==1&&!v[_h][_w])
	{
		arr[_h][_w]=lcnt;
		v[_h][_w]=1;
	}
	else return; 
	for(int i=0;i<8;i++)
	{
		int nw=_w+dx[i];
		int ny=_h+dy[i];
		if(ny>=0&&ny<=h&&nw>=0&&nw<=w)
		{
			if(!v[ny][nw]&&arr[ny][nw]==1)
				dfs(ny,nw);	
		}
	}
}
int main()
{ 
	while(true)
	{
		scanf("%d %d",&w,&h);
		if(!w&&!h) break;  
		for(int i=0;i<h;i++)
			for(int j=0;j<w;j++)
				scanf("%d",&arr[i][j]);
		for(int i=0;i<h;i++)
		{
			for(int j=0;j<w;j++)
			{
				if(!v[i][j]&&arr[i][j]==1)
				{
					dfs(i,j);
					lcnt++; 
				}
			}
		}  
		printf("%d\n",lcnt-2);
		lcnt=2; 
		memset(arr,0,sizeof(arr));
		memset(v,0,sizeof(v));
	} 
} 