#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int map[101][101];
int bmap[101][101]; 
int v[101][101];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
queue< pair<int,int> > q;
int n,sh,sw;
void bfs()
{
	v[0][0]=1;
	bmap[0][0]=1;
	q.push(make_pair(0,0));
	while(!q.empty())
	{
		int x=q.front().second;
		int y=q.front().first;
		q.pop();
		for(int i=0;i<4;i++)
		{
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=0&&nx<sw&&ny>=0&&ny<sh&&!v[ny][nx]&&map[ny][nx])
			{
				v[ny][nx]=1;
				bmap[ny][nx]=bmap[y][x]+1;
				q.push(make_pair(ny,nx));
			}
		}
	}
} 
int main()
{ 
	int len;
	scanf("%d %d",&sh,&sw);
	getchar();
	for(int i=0;i<sh;i++)
	{
		char t[101];
		len=strlen(gets(t));
		for(int j=0;j<len;j++)
			map[i][j]=t[j]-'0';
	} 
	bfs();
	printf("%d",bmap[sh-1][sw-1]); 
}  