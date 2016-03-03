#include <stdio.h>
#include <queue>
using namespace std;
int alpa[30];
char arr[21][21]; 
int r[21][21];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int h,w;
int ans=0;
void dfs(int y, int x, int v)
{
	if(v>=ans) ans=v;
	for(int i=0;i<4;i++)
	{
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=0&&nx<w&&ny>=0&&ny<h&&!alpa[arr[ny][nx]-65])
		{
			alpa[arr[ny][nx]-65]=1;
			dfs(ny,nx,v+1);
			alpa[arr[ny][nx]-65]=0;
		}
	}
} 
int main()
{ 
	scanf("%d %d",&h,&w);
	getchar();
	for(int i=0;i<h;i++)
	{
		char t[21];
		scanf("%s",&t);
		getchar();
		for(int j=0;j<w;j++)
			arr[i][j]=t[j]; 
	}   
	alpa[arr[0][0]-65]=1;
	dfs(0,0,1);
	printf("%d",ans);
}  