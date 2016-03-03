#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int map[301][301];
int v[301][301];
int dx[] = {-1, -1, -2, -2, 1, 1, 2, 2};
int dy[] = {-2, 2, -1, 1, -2, 2, -1, 1};
int size,sy,sx,ey,ex;
void bfs(int x, int y)
{ 
	int ans=0;
	queue< pair<pair<int,int>,int> > q;
	q.push(make_pair(make_pair(x,y),0));
	v[x][y]=1;
	while(!q.empty())
	{
		int s=q.size();  // why?
		while(s--)
		{
			int w=q.front().first.first;
			int h=q.front().first.second;
			int c=q.front().second;
			if(h==ey&&w==ex)
			{  
				while (!q.empty())
				{
					q.pop();
				}
				break;
			}
			q.pop();
			for(int i=0;i<8;i++)
			{
				int nx=w+dx[i];
				int ny=h+dy[i];
				if(nx<0||nx>=size||ny<0||ny>=size||v[nx][ny]) continue;
				v[nx][ny]=1;
				q.push(make_pair(make_pair(nx,ny),c+1));
			} 
		}
		ans++;
	} 
	printf("%d\n",ans-1);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		memset(v,0,sizeof(v));
		scanf("%d",&size);
		scanf("%d %d",&sx,&sy);
		scanf("%d %d",&ex,&ey);
		bfs(sx,sy);
	}
}